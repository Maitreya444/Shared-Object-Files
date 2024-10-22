This Repository includes programs of Arrays, Digits, Numbers, Strings, Data structures, etc., and their own dynamic and static libraries in Windows and Linux OS.

# USAGE of shared library files :-
1. For programs that require multiple libraries, shared libraries can reduce the memory footprint of the program. 
2. This is because multiple program can use shared library simultaneously.
3. Therefore only one library is needed in the memory at a time.
4. Internally in linux os the application is invoking and Myexe and linking an ELF image.
5. Kernel begins the process of loading the ELF image.
6. Internally DLL's address is returned and to capture that function pointers are used. 


Linux DLL compilation command :-
1. gcc -c -fpic sharedfileLL (name).c
2. gcc -shared -o library3.so (library file name as per code) sharedfileLL.o (name of output file)
3. gcc clientLL.c (name of client) -rdynamic -o Myexe
4. ./Myexe

Windows DLL compilation command :-
1. gcc -shared -o sharedfile.dll sharedfile.c
2. gcc -o Myexe client.c
3. Myexe
