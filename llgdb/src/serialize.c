#include <stdlib.h>
#include <string.h>
#include <serialize.h>


int InitBuffer(Buffer *buffer)
{
	buffer->data = NULL;
	buffer->index = 0;
	buffer->size = 0;
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

int DeserializeInt(Buffer *buffer, int *value)
{
	memcpy(value, buffer->data + buffer->index, sizeof(int));
	buffer->index += sizeof(int);
	return 0;
}

int SerializeChar(char value, Buffer *buffer)
{
	GrowBuffer(sizeof(char), buffer);
	memcpy(buffer->data + buffer->index, &value, sizeof(char));
	buffer->index += sizeof(char);
	return 0;
}

int DeserializeChar(Buffer *buffer, char *value)
{
	memcpy(value, buffer->data + buffer->index, sizeof(int));
	buffer->index += sizeof(int);
	return 0; 
}
