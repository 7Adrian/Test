#include <stdio.h>
#include <stdlib.h>

int zliczanie(char *w1)
{
    int k=0;
    while(*(w1+k)!='\0')
    {
        k++;
    }
    return k;
}

int policz(char *w1, char *w2)
{
//    if (*)


}

int main()
{
    char l1[]="8999";
    char l2[]="23";

    char *wl1=&l1[0];
    char *wl2=&l2[0];

    int dl1=zliczanie(wl1);
    int dl2=zliczanie(wl2);
    int dl3=0;
    if (dl1>=dl2)
        dl3=policz(wl1,wl2);
    else
        dl3=


    printf("%d %d %d", dl1, dl2, dl3);
    return 0;
}
