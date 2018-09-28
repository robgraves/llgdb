
typedef struct Buffer{
	void *data;
	unsigned int index;
	size_t size;
} Buffer;

int InitBuffer(Buffer *buffer);
int GrowBuffer(size_t size, Buffer *buffer);
int SerializeInt(int value, Buffer *buffer);
