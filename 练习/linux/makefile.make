socket-tcp: socket-tcp.c
	g++ -std=c++11 socket-tcp.c -lpthread -o socket-tcp

clean:
	rm socket-tcp 
