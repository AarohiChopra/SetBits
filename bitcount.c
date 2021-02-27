#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int count=0;
	if(argc!=2)
	{
		printf("USAGE: %s filename\n", argv[0]);
    exit(1);
	}
	for(int i=1;i<argc;i++)
	{
	FILE *f=fopen(argv[i],"r");
	if(f == NULL) {
      printf("%s : No such file or directory", argv[1]);
      exit(2);
    } 
    else
    {
    int c;
    while ((c = fgetc(f)) != EOF)
    {
       //printf("%c",c);
       for( int i = 7; i >= 0; i-- ) {
       	int bit=( c >> i ) & 1 ? 1 : 0;
        if(bit==1)
        {
        	count++;
        }
    }
	}
	printf("%d",count);
}
}
}