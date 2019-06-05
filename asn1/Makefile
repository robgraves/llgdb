C_FLAGS = -Werror -Wall
SRC_FILES=$(wildcard src/*.c)
OBJ_FILES=$(wildcard obj/*.o)
SCHEMA_FILES=$(wildcard schema/*)
_DEBUG = $(shell echo $(DEBUG)|tr A-Z a-z)
ifeq ($(_DEBUG),true)
C_FLAGS += -g
endif

asn1.a : $(OBJ_FILES) | compile-source
	@$(AR) cr bin/asn1.a $^


compile-source : $(SRC_FILES) | compile-schema
		@$(foreach f, $^, \
		$(CC) $(C_FLAGS) -c $(f) -I lib/ -o obj/$(basename $(notdir $(f))).o;)


compile-schema : $(SCHEMA_FILES)
	@asn1c $^ 2>asn1c.output
	@mv *.h lib/
	@mv *.c src/
	@rm Makefile.am.sample

clean :
	@rm obj/*
	@rm bin/*
