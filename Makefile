all: capmain.o rmvcaps.o
	cc -o chngecaps capmain.o rmvcaps.o

capmain.o: capmain.c rmvcaps.h
	cc -c capmain.c

rmvcaps.o: rmvcaps.c rmvcaps.h
	cc -c rmvcaps.c

clean:
	rm *.o
	rm chngecaps
