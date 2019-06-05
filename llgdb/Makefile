C_FLAGS = -Werror -Wall
LIBS= -I lib/ -I ../asn1/lib
_DEBUG = $(shell echo $(DEBUG)|tr A-Z a-z)
ifeq ($(_DEBUG),true)
C_FLAGS += -g
endif

all : bgdb llgdbBoardGame.o llgdbBoardGamesSeq.o serialize.o

bgdb : bgdb.o
	$(CC) $(C_FLAGS) -o bin/bgdb obj/bgdb.o

bgdb.o :
	@$(CC) $(C_FLAGS) -c src/bgdb.c -o obj/bgdb.o $(LIBS)

serialize.o :
	@$(CC) $(C_FLAGS) -c src/serialize.c -o obj/serialize.o $(LIBS)

llgdbBoardGamesSeq.o : 
	@$(CC) $(C_FLAGS) -c src/llgdbBoardGamesSeq.c -o obj/llgdbBoardGamesSeq.o $(LIBS)

llgdbBoardGame.o :
	@$(CC) $(C_FLAGS) -c src/llgdbBoardGame.c -o obj/llgdbBoardGame.o $(LIBS)

clean :
	@rm -f obj/*
	@rm -f bin/*


