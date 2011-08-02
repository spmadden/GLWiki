all:
	gcc -c -o glwplugin.so glwplugin.c

clean:
	rm glwplugin.so

install: all
	cp glwplugin.so ~/.mozilla/plugins
	chmod 755 ~/.mozilla/plugins/glwplugin.so
