.PHONY: all clean

all:
	rock underwear.ooc -staticlib -v
	gcc -Ibuild/underwear/include -std=c99 app.c build/underwear/lib/underwear.a -lgc -lpthread -o app

clean:
	rm -rf app *.o *.a build/
