.class public MixedDrinks
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; SHOTSJesse

.field private static Jesse I

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

; SHOTSJesse=1001~

	ldc	1001
	putstatic	MixedDrinks/Jesse I

; DRUNK(Jesse=1000)DO{Jesse=100~SPILL(Jesse)~}SOBER{Jesse=1000~SPILL(Jesse)~}

Label_0:
	getstatic	MixedDrinks/Jesse I
	ldc	1000
	if_icmpeq Label_1

; Jesse=1000~

	ldc	1000
	putstatic	MixedDrinks/Jesse I

; SPILL(Jesse)~

	getstatic	MixedDrinks/Jesse I
		putstatic	MixedDrinks/Jesse I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Jesse = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Jesse I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
	goto Label_2
Label_1:

; Jesse=100~

	ldc	100
	putstatic	MixedDrinks/Jesse I

; SPILL(Jesse)~

	getstatic	MixedDrinks/Jesse I
		putstatic	MixedDrinks/Jesse I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Jesse = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Jesse I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
Label_2:

; CHUG{Jesse=Jesse+1~SPILL(Jesse)~}UNTIL(Jesse<1006)~

Label_3:

; Jesse=Jesse+1~

	getstatic	MixedDrinks/Jesse I
	ldc	1
	iadd
	putstatic	MixedDrinks/Jesse I

; SPILL(Jesse)~

	getstatic	MixedDrinks/Jesse I
		putstatic	MixedDrinks/Jesse I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Jesse = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Jesse I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
	getstatic	MixedDrinks/Jesse I
	ldc	1006
	if_icmplt Label_3

	getstatic     MixedDrinks/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
