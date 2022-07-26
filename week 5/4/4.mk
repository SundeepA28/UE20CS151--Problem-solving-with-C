a.exe:client_strcat.o server_strcat.o
	gcc client_strcat.o server_strcat.o
client_strcat.o:client_strcat.c server_strcat.h
	gcc -c client_strcat.c
server_strcat.o:server_strcat.c server_strcat.h
	gcc -c server_strcat.c