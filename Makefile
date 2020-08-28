all:
	sudo gcc convert.c -o /bin/convert

clean:
	cd ..
	rm -r Converter
