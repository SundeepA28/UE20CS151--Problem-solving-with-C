a.exe:client.o server1.o
	gcc client.o server1.o
client.o:client.c unique.h
	gcc -c client.c
server1.o:server1.c unique.h
	gcc -c server1.c
