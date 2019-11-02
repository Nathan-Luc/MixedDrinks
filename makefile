all: antlr main.exe

antlr: 
	antlr4 -Dlanguage="Cpp" *.g4

main.exe:
	g++ *.cpp -o compiler -std=c++0x -I/usr/local/include/antlr4-runtime -L/usr/local/lib -lantlr4-runtime

syntax:
	java -jar rrd-antlr4-0.1.2.jar *.g4

display:
	google-chrome output/MixedDrinks/index.html

alias: 
	alias chrome="/mnt/c/'Program Files (x86)'/Google/Chrome/Application/chrome.exe"

window:
	chrome 'output'/'MixedDrinks'/index.html
	
run: 
	 ./compiler

clean:
	 find . -type f ! -name "*.g4" ! -name "makefile" ! -name "main.cpp" ! -name "*.txt" ! -name "*.jar" ! -name "*.git" -delete
	 