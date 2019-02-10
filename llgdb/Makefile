C_FLAGS = -Werror -Wall

bgdb:
	gcc $(C_FLAGS) src/bgdb.c -I lib/ -o bin/bgdb

xer_encoder.o :
	gcc $(C_FLAGS) -c src/asn1/xer_encoder.c -I lib/asn1 -o obj/xer_encoder.o

xer_decoder.o :
	gcc $(C_FLAGS) -c src/asn1/xer_decoder.c -I lib/asn1 -o obj/xer_decoder.o

ber_tlv_tag.o :
	gcc $(C_FLAGS) -c src/asn1/ber_tlv_tag.c -I lib/asn1 -o obj/ber_tlv_tag.o

ber_tlv_length.o :
	gcc $(C_FLAGS) -c src/asn1/ber_tlv_length.c -I lib/asn1 -o obj/ber_tlv_length.o

asn_codecs_prim.o :
	gcc $(C_FLAGS) -c src/asn1/asn_codecs_prim.c -I lib/asn1 -o obj/asn_codecs_prim.o /bin/OCTET_STRING.o

OCTET_STRING.o :
	gcc $(C_FLAGS) -c src/asn1/OCTET_STRING.c -I lib/asn1 -o obj/OCTET_STRING.o

VisibleString.o :
	gcc $(C_FLAGS) -c src/asn1/VisibleString.c -I lib/asn1 -o obj/VisibleString.o

INTEGER.o :
	gcc $(C_FLAGS) -c src/asn1/INTEGER.c -I lib/asn1 -o obj/INTEGER.o

BoardGame.o :
	gcc $(C_FLAGS) -c src/asn1/BoardGame.c -I lib/asn1/ -o obj/BoardGame.o

clean :
	rm -f bin/*
	rm -f obj/*
