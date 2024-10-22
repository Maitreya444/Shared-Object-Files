This Repository includes programs of Arrays, Digits, Numbers, Strings, Data structures, etc., and their own dynamic and static libraries in Windows and Linux OS.

Linux DLL compilation command :-
1. gcc -c -fpic sharedfileLL (name).c
2. gcc -shared -o library3.so (library file name as per code) sharedfileLL.o (name of output file)
3. gcc clientLL.c (name of client) -rdynamic -o Myexe
4. ./Myexe

Windows DLL compilation command :-
1. gcc -shared -o sharedfile.dll sharedfile.c
2. gcc -o Myexe client.c
