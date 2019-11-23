.class public MixedDrinks
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; SHOTSJess

.field private static Jess I

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

; SHOTSJess=100~

	ldc	100
	putstatic	MixedDrinks/Jess I

; CHUG{Jess=100+100}UNTILJess=1000~

Label_0:

; Jess=100+100

	ldc	100
	ldc	100
	iadd
	putstatic	MixedDrinks/Jess I
	getstatic	MixedDrinks/Jess I
	ldc	1000
	if_icmpeq Label_0

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
