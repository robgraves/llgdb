
typedef struct Buffer{
	void *data;
	unsigned int index;
	size_t size;
} Buffer;

void InitBuffer(Buffer *buffer);
int GrowBuffer(size_t size, Buffer *buffer);
int SerializeInt(int value, Buffer *buffer);
int DeserializeInt(Buffer *buffer, int *value);
int SerializeChar(char value, Buffer *buffer);
int DeserializeChar(Buffer *buffer, char *value);
