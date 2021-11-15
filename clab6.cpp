#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

using namespace std;
int main()
{
    char arr[4];
    arr[0] = 'W';
    arr[1] = 'O';
    arr[2] = 'R';
    arr[3] = 'K';
    char *p;
    p = &arr[0];
	for(int i = 0; i < 4;++i){
		printf("%c\n", *(p + i));
	}
	char *arr2;
	arr2 = (char*)malloc(4*sizeof(char));
	arr2[0] = 'W';
    arr2[1] = 'O';
    arr2[2] = 'R';
    arr2[3] = 'K';
    printf("%s\n", arr2);
    free(arr2);
    return 0;
}
