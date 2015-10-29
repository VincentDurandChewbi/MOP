CC = g++
CFLAGS = -Wall -g

all:main
main: Facade.cc Maison.cc Rectangle.cc Triangle.cc Fenetre.cc Porte.cc
	$(CC) $(CFLAGS) Facade.cc Maison.cc Rectangle.cc Triangle.cc Fenetre.cc Porte.cc -o main 

clean:
	rm -f *.o
mrproper: clean
	rm -f hello
