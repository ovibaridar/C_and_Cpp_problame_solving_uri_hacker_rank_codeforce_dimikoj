#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int a = 0,b = 0,c = 0,d = 0,e = 1,f = 0,g = 0,h = 1,i = 0,j = 0,k = 0,l = 2,m = 0,n = 0,o = 0;
    int q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}

