#include <stdio.h>



char *greet(char *g){
    char *x = (char *)printf("%s",g);

    return x;
}




int main()
{
    greet("Hello world");
    return 0;
    
    
}
