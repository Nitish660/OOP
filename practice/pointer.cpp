#include <stdio.h>

void update(int *a,int *b) {
 *a = *a + *b;
    *b = *a - (2 * (*b));
    if(*b < 0)
    {
        *b = -1 * (*b);
    }
    printf("%d\n%d", *a, *b);
    
    // Complete this functio n    
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}