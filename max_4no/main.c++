#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    int great_no = a;
    if (great_no > b && great_no > c && great_no > d)
        return great_no; 
    great_no = b;    
    if (great_no > a && great_no > c && great_no > d)
        return great_no;
    great_no = c;    
    if (great_no > a && great_no > b && great_no > d)
        return great_no;
     great_no = d;    
    if (great_no > a && great_no > c && great_no > b)
        return great_no;
return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
