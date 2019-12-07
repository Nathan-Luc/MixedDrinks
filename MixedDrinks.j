.class public MixedDrinks
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; SHOTSLong

.field private static Long I

; SHOTSNicholas

.field private static Nicholas I

; SPRITSchar

.field private static char C

; SHOTSJesse

.field private static Jesse I

; SHOTSNathan

.field private static Nathan I

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

; SHOTSLong=8~

	ldc	8
	putstatic	MixedDrinks/Long I

; SHOTSNicholas=5~

	ldc	5
	putstatic	MixedDrinks/Nicholas I

; SPRITSchar='a'~

	ldc	97
	putstatic	MixedDrinks/char C

; Long=Long+Nicholas~

	getstatic	MixedDrinks/Long I
	getstatic	MixedDrinks/Nicholas I
	iadd
	putstatic	MixedDrinks/Long I

; SPILL(Nicholas)~<missing '~'>

	getstatic	MixedDrinks/Nicholas I
		putstatic	MixedDrinks/Nicholas I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Nicholas = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Nicholas I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

; SPILL(Long)~<missing '~'>

	getstatic	MixedDrinks/Long I
		putstatic	MixedDrinks/Long I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Long = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Long I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

; SHOTSJesse=1001~

	ldc	1001
	putstatic	MixedDrinks/Jesse I

; SHOTSNathan=1~

	ldc	1
	putstatic	MixedDrinks/Nathan I

; DRUNK(Jesse=1000)DO{Jesse=100~Nathan=Nathan+1~SPILL(Jesse)~<missing '~'>SPILL(Nathan)~<missing '~'>}SOBER{Jesse=1000~Nathan=Nathan-1~SPILL(Jesse)~<missing '~'>SPILL(Nathan)~<missing '~'>}

Label_0:
	getstatic	MixedDrinks/Jesse I
	ldc	1000
	if_icmpeq Label_1

; Jesse=1000~

	ldc	1000
	putstatic	MixedDrinks/Jesse I

; Nathan=Nathan-1~

	getstatic	MixedDrinks/Nathan I
	ldc	1
	isub
	putstatic	MixedDrinks/Nathan I

; SPILL(Jesse)~<missing '~'>

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

; SPILL(Nathan)~<missing '~'>

	getstatic	MixedDrinks/Nathan I
		putstatic	MixedDrinks/Nathan I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Nathan = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Nathan I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
	goto Label_2
Label_1:

; Jesse=100~

	ldc	100
	putstatic	MixedDrinks/Jesse I

; Nathan=Nathan+1~

	getstatic	MixedDrinks/Nathan I
	ldc	1
	iadd
	putstatic	MixedDrinks/Nathan I

; SPILL(Jesse)~<missing '~'>

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

; SPILL(Nathan)~<missing '~'>

	getstatic	MixedDrinks/Nathan I
		putstatic	MixedDrinks/Nathan I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Nathan = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Nathan I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
Label_2:

; CHUG{Jesse=Jesse+1~Nathan=Nathan+2~SPILL(Jesse)~<missing '~'>}UNTIL(1010>=Jesse)~

Label_3:

; Jesse=Jesse+1~

	getstatic	MixedDrinks/Jesse I
	ldc	1
	iadd
	putstatic	MixedDrinks/Jesse I

; Nathan=Nathan+2~

	getstatic	MixedDrinks/Nathan I
	ldc	2
	iadd
	putstatic	MixedDrinks/Nathan I

; SPILL(Jesse)~<missing '~'>

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
	ldc	1010
	getstatic	MixedDrinks/Jesse I
	if_icmpge Label_3

; SPILL(Nathan)~<missing '~'>

	getstatic	MixedDrinks/Nathan I
		putstatic	MixedDrinks/Nathan I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Nathan = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	MixedDrinks/Nathan I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

; SPILL("Shots Shots Shots")~<missing '~'>

	; Assignment
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Shots Shots Shots"

		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

	getstatic     MixedDrinks/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
