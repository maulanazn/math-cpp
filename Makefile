foldercpp = some_cpp_thing/you_know.cpp

foldersrccpp = some_cpp_thing/src/cpp_thing.cpp
folderinclude_cppthing = some_cpp_thing/include/cpp_thing.hpp

foldersrcscope = some_cpp_thing/src/scopeandlinkage.cpp
folderinclude_scope = some_cpp_thing/include/scopeandlinkage.hpp

foldersrcstl = some_cpp_thing/src/stl_cpp.cpp
folderinclude_stl = some_cpp_thing/include/stl_cpp.hpp

output = build/cpp_thing/cppthink
output_stl = build/cpp_thing/cppthink_stl
output_scope = build/cpp_thing/cppthing_scope

cpp:
	g++ -g -O -o $(output) $(foldercpp) $(foldersrccpp) $(folderinclude_cppthing)

stl:
	g++ -g -O -o $(output_stl) $(foldercpp) $(foldersrcstl) $(folderinclude_stl)

scope:
	g++ -g -O -o $(output_scope) $(foldercpp) $(foldersrcscope) $(folderinclude_scope)

remove_cpp:
	rm -rf $(output)

remove_stl:
	rm -rf $(output_stl)

remove_scope:
	rm -rf $(output_scope)

run_cpp:
	./$(output)

run_stl:
	./$(output_stl)

run_scope:
	./$(output_scope)
