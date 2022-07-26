a.exe:client2.o server2.o
	gcc client2.o server2.o
client2.o:client2.c header1.h
	gcc -c client2.c
server2.o:server2.c header1.h
	gcc -c server2.c
