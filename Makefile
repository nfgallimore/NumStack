install:
	g++ Stack.cpp -c -std=c++11
	g++ -o main main.cpp Stack.o -std=c++11

clean:
	rm -rf *.o a.out main