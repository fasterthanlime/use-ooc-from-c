.PHONY: all clean

all:
	rock underwear.ooc -staticlib=underwear.a -outpath=underwear-headers -gc=off -noclean -nomain -quiet -v
	gcc -Iunderwear-headers -std=c99 app.c underwear.a -o app

clean:
	rm -rf app *.o *.a underwear-headers