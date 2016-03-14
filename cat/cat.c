#include <stdio.h>
#include <unistd.h>
int  main()
{
    char buff[1024];
	int i = 1;
	while(i > 0){
        i = read(0, buff, 1024);
        int k = 0;
        while (i>k){
            int j = write(1, buff+k, i-k);
            if(j<0){
                write(2, "Error in write\n", 16);
            }
            k+=j;
        }
    }
	if(i<0){
	write(2, "Error in read\n", 15);
    }
    return 0;
}