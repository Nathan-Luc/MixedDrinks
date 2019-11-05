ALIAS = /mnt/c/'Program Files (x86)'/Google/Chrome/Application/chrome.exe
WEB = output/MixedDrinks/index.html
NOT = ! -name


all: antlr main.exe

antlr: 
	antlr4 -Dlanguage="Cpp" *.g4

main.exe:
	g++ *.cpp -o compiler -std=c++0x -I/usr/local/include/antlr4-runtime -L/usr/local/lib -lantlr4-runtime

syntax:
	java -jar rrd-antlr4-0.1.2.jar *.g4

display:
	google-chrome $(WEB)

window:
	$(ALIAS) $(WEB)

run: 
	 ./compiler

clean:
	 find . -type f $(NOT) "*.g4" $(NOT) "makefile" $(NOT) "main.cpp" $(NOT) "*.txt" $(NOT) "*.jar" $(NOT) "*.git" $(NOT) "*.md" -delete
	 