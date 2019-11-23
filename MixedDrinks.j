.class public MixedDrinks
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; SHOTSJess

.field private static Jess I

; SPRITSNathan

.field private static Nathan C

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        MixedDrinks/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        MixedDrinks/_standardIn LPascalTextIn;

; SHOTSJess=1000~

	ldc	1000
	putstatic	MixedDrinks/Jess I

; SPRITSNathan='H'~

	ldc	72
	putstatic	MixedDrinks/Nathan C

; DRUNK(Jess=1000)DO{Jess=10000~}SOBER{Jess=1000~}

Label_0:
	getstatic	MixedDrinks/Jess I
	ldc	1000
	if_icmpeq Label_1

; Jess=1000~

	ldc	1000
	putstatic	MixedDrinks/Jess I
	goto Label_2
Label_1:

; Jess=10000~

	ldc	10000
	putstatic	MixedDrinks/Jess I
Label_2:

; SPILL(Jess)~

	getstatic	MixedDrinks/Jess I
		putstatic	MixedDrinks/Jess I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Jess = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Jess I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

	getstatic     MixedDrinks/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
