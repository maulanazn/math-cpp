foldercpp = some_cpp_thing/you_know.cpp

foldersrc = some_cpp_thing/src/*.cpp
folderinclude = some_cpp_thing/include/*.hpp

output = build/cpp_thing/cppthink

all:
	g++ -g -O -o $(output) $(foldercpp) $(foldersrc) $(folderinclude)

remove:
	rm -rf $(output)

run:
	./$(output)