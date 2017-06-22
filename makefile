install:
	gcc -g -fPIC -shared -Wl,-soname,libh.so modulo.c exp.c ssort.c somatorio.c -o libh.so.01
	ln -s libh.so.01 libh.so
	cp libh.so.01 /usr/lib
	cp libh.so /usr/lib
	rm libh.so*
	cp libbh.h /usr/include

compile:
	gcc hello.c -o exe -lh

run:
	./exe


clean:
	rm -rf libh.so* *.o exe
