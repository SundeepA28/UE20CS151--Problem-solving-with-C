a.exe:client3.o server3.o
	gcc client3.o server3.o
client3.o:client3.c header3.h
	gcc -c client3.c
server3.o:server3.c header3.h
	gcc -c server3.c
