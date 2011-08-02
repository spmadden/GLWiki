all:
	gcc -o glwplugin.so glwplugin.c -DXP_UNIX -shared -fPIC

clean:
	rm glwplugin.so

install: all
	cp glwplugin.so ~/.mozilla/plugins
	chmod 755 ~/.mozilla/plugins/glwplugin.so
