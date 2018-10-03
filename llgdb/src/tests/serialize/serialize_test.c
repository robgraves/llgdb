#include <stdlib.h>
#include <stdio.h>
#include <serialize.h>


int main(int argc, char **argv)
{
	int err = 0;
	err = InitBufferTest();
	
	err = GrowBufferTest();

	return 0;
}


int GrowBufferTest()
{
	size_t size = 56;
	Buffer newBuf;
	GrowBuffer(size, &newBuf);
	for (size_t i = 0; i < size; i++){
		*((char *)newBuf.data+i) = 'A'+i;
	}
	if(newBuf.size != size){return -1;}
	else {return 0;}
	free(newBuf.data);
}

int InitBufferTest()
{
	Buffer newBuf;
	InitBuffer(&newBuf);
	if(newBuf.data != NULL){
	return -1;}
	if(newBuf.index != 0){return -2;}
	if(newBuf.size != 0){return -3;}
	if(sizeof(newBuf.data) != 0){return -4;}
	return 0;
}
