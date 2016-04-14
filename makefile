# John: write a makefile as final exam question

driver: main.o tree.o node.o
	g++ main.o tree.o node.o -o driver

main.o: main.cpp
	g++ -c main.cpp

tree.o: tree.cpp tree.h
	g++ -c tree.cpp

node.o: node.cpp node.h
	g++ -c node.cpp

clean:
	rm -rf *.o driver