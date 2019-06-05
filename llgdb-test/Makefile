C_FLAGS = -Werror -Wall
LIBS= -I lib/ -I ../asn1/lib -I ../llgdb/lib
_DEBUG = $(shell echo $(DEBUG)|tr A-Z a-z)
ifeq ($(_DEBUG),true)
C_FLAGS += -g
endif

test : main.o
	 @$(CXX) $(C_FLAGS) -o bin/test $(LIBS) \
								  obj/main.o \
							  obj/TestClass.o \
			 ../llgdb/obj/llgdbBoardGamesSeq.o \
				  ../llgdb/obj/llgdbBoardGame.o \
				              ../asn1/bin/asn1.a 
main.o : TestClass.o
	@$(CXX) $(C_FLAGS) -c src/main.cpp -o obj/main.o $(LIBS)

TestClass.o : 
	@$(CXX) $(C_FLAGS) -c src/TestClass.cpp -o obj/TestClass.o $(LIBS) 

clean :
	@rm -f bin/*
	@rm -f obj/*
