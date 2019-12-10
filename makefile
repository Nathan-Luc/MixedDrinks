ALIAS = /mnt/c/'Program Files (x86)'/Google/Chrome/Application/chrome.exe
WEB = output/MixedDrinks/index.html
JAVA = java -jar
JAVACP = java -cp 
JASMIN = jasmin-2.4/jasmin.jar
PASCALRTL = PascalRTL.jar
MIXEDDRINKS = MixedDrinks
SAMPLE = error_sample.MixedDrinks
NOT = ! -name


all: antlr main.exe


antlr: 
	antlr4 -visitor -no-listener -Dlanguage="Cpp" *.g4

main.exe:
	g++ *.cpp -o compiler -std=c++0x -I/usr/local/include/antlr4-runtime -L/usr/local/lib -lantlr4-runtime

syntax:
	$(JAVA) rrd-antlr4-0.1.2.jar *.g4

display:
	google-chrome $(WEB)

window:
	$(ALIAS) $(WEB)

class:
	$(JAVA) $(JASMIN) $(MIXEDDRINKS).j


run: 
	$(JAVACP) .:$(PASCALRTL) $(MIXEDDRINKS)
wrun:
	$(JAVACP) .;$(PASCALRTL) $(MIXEDDRINKS)

program: compile class run

wprogram: compile class wrun

compile: 
	 ./compiler $(SAMPLE)

clean:
	 find . -type f $(NOT) "*.g4" $(NOT) "makefile" $(NOT) "main.cpp" $(NOT) "*.txt" $(NOT) "*.jar" $(NOT) "*.git" $(NOT) "*.md" -delete
	 
