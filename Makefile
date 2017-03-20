install:
	g++ NumStack.cpp -c
	g++ Stack.cpp -c
	g++ -o main main.cpp Stack.o NumStack.o

clean:
	rm -rf *.o a.out main