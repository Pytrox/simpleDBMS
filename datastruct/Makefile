HEADERS = datastruct.h stack.h list.h tree.h

all: datastruct.o
stack.o: stack.c $(HEADERS)
	cc -c stack.c
list.o: list.c $(HEADERS)
	cc -c list.c
tree.o: tree.c $(HEADERS)
	cc -c tree.c
datastruct.o: stack.o list.o tree.o
	ld -i -o datastruct.o stack.o list.o tree.o
clean:
	rm stack.o list.o tree.o
clean-all:
	rm *.o;	
git-push:
	git add Makefile; \
	git add *.c; \
	git add *.h
