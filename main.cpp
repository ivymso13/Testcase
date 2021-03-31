#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <vector>
using namespace std;

int cnt;
char fileName[50];

int main() {
    // init
    srand(time(NULL));

    // input
    scanf("%d", &cnt);

    // Make File
    for(int i=1;i<=cnt;i++) {

        // input
        sprintf(fileName, "./case/test%03d.in", i);
        freopen(fileName, "w", stdout);

        int a, b;

        if(i==1) { a=14; b=17; }
        else if(i==2) { a=29; b=10; }
        else if(i==3) { a=b=83; }
        else if(i==4) { a=82; b=13; }
        else if(i==5) { a=19; b=87; }
        else {
            a = rand()%90 + 10;
            b = rand()%90 + 10;
        }

        printf("%d %d\n", a, b);

        // output
        sprintf(fileName, "./case/test%03d.out", i);
        freopen(fileName, "w", stdout);

        a = (a%10)*10 + a/10;
        b = (b%10)*10 + b/10;

        if(a>b) printf("1\n");
        else if(a<b) printf("-1\n");
        else printf("0\n");
    }

}