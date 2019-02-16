C_FLAGS = -Werror -Wall
SRC_FILES=$(wildcard src/*.c)
OBJ_FILES=$(wildcard obj/*.o)
SCHEMA_FILES=$(wildcard schema/*)

all: compile-schema compile-source archive-objs

.PHONEY=compile-schema
compile-schema : $(SCHEMA_FILES)
	asn1c $^
	mv *.h lib/
	mv *.c src/

.PHONY=asn1
compile-source : $(SRC_FILES)
		$(foreach f, $^, \
		$(CC) $(C_FLAGS) -c $(f) -I lib/ -o obj/$(basename $(notdir $(f))).o;)

archive-objs : $(OBJ_FILES)
	$(AR) cr bin/asn1.a $^

clean :
	rm src/*
	rm lib/*
	rm obj/*
