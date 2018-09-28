#include <stdlib.h>
#include <string.h>
#include "serialize.h"


int InitBuffer(Buffer *buffer)
{
	free(buffer);
	buffer->index = 0;
	buffer->size = 0;
	return 0;
}

int GrowBuffer(size_t size, Buffer *buffer)
{
	void *tmp1 = malloc(size+buffer->size);
	memcpy(tmp1, buffer->data, buffer->size);
	free(buffer->data);
	buffer->data = tmp1;
	buffer->size += size;
	return 0;
}

int SerializeInt(int value, Buffer *buffer)
{
	GrowBuffer(sizeof(int), buffer);
	memcpy(buffer->data + buffer->index, &value, sizeof(int));
	buffer->index += sizeof(int);
	return 0;
}


