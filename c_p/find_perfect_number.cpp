#include <stdio.h>
int main()
{
    int mn, mxx;
    printf("Enter minimum number:");
    scanf("%d", &mn);
    printf("Enter maximum number:");
    scanf("%d", &mxx);

    for (int i = mn; i <= mxx; i++)
    {
        int j = 1;
        long int sum = 0;
        while (j < i)
        {
            if (i % j == 0)
            {
                sum += j;
            }
            j++;
        }
        if (sum == i)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}