a.exe:client1.o server1.o
	gcc client1.o server1.o
client1.o:client1.c 1.h
	gcc -c client1.c
server1.o:server1.c 1.h
	gcc -c server1.c