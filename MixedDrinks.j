.class public MixedDrinks
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; SHOTSi

.field private static shout_i I

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
	goto shout_end
shout:
	astore_1

; SHOTSi=0~

	ldc	0
	putstatic	MixedDrinks/shout_i I

; CHUG{SPILL("Shots ")~<missing '~'>i=i+1~}UNTIL(3>i)~

Label_0:

; SPILL("Shots ")~<missing '~'>

	; Assignment
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Shots "

		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

; i=i+1~

	getstatic	MixedDrinks/shout_i I
	ldc	1
	iadd
	putstatic	MixedDrinks/shout_i I
	ldc	3
	getstatic	MixedDrinks/shout_i I
	if_icmpgt Label_0

; RETURN0~

	ldc	0
	ret 1
shout_end:

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

; DRUNK(Jesse=1000)DO{SPILL("IN DRUNK")~<missing '~'>Jesse=100~Nathan=Nathan+1~SPILL(Jesse)~<missing '~'>SPILL(Nathan)~<missing '~'>}SOBER{SPILL("IN SOBER")~<missing '~'>Jesse=1000~Nathan=Nathan-1~SPILL(Jesse)~<missing '~'>SPILL(Nathan)~<missing '~'>}

Label_1:
	getstatic	MixedDrinks/Jesse I
	ldc	1000
	if_icmpeq Label_2

; SPILL("IN SOBER")~<missing '~'>

	; Assignment
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "IN SOBER"

		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

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
	goto Label_3
Label_2:

; SPILL("IN DRUNK")~<missing '~'>

	; Assignment
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "IN DRUNK"

		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

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
Label_3:
	jsr shout

	getstatic     MixedDrinks/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
