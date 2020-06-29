PREFIX ?= /usr/local

dwmblocks.o: dwmblocks.c blocks.h
	gcc -c -lX11 dwmblocks.c
output: dwmblocks.o
	gcc dwmblocks.o -lX11 -o dwmblocks
clean:
	rm -f *.o *.gch dwmblocks
install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks

.PHONY: clean install uninstall
