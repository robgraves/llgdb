main : TestClass.o
	g++ -g src/main.cpp -I lib/ -o bin/main obj/TestClass.o \
	../asn1/bin/asn1.a

TestClass.o :
	g++ -g -c src/TestClass.cpp -I lib/ -I ../asn1/lib/ \
	-o obj/TestClass.o 

clean :
	rm -f bin/*
	rm -f obj/*
