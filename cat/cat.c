#include <stdio.h>
#include <unistd.h>
int  main()
{
  char buff[1024];
	int i = 1;
	while(i > 0){
	i = read(0, buff, 1024);
	if(i>0){
	int j = write(1, buff, i);
	if(j<0){
	write(2, "Error in write\n", 16);
}
}
}
	if(i<0){
	write(2, "Error in read\n", 15);
}
    return 0;
}
