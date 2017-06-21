#include <stdio.h>

#define MAX 255
int R[MAX];

void heapify(int s, int m)
{
    int j, temp;
    temp = R[s];
    j = 2 * s;
    while (j <= m)
    {
        if (R[j] > R[j + 1] && j < m)
            j++;
        if (temp < R[j])
            break;
        R[s] = R[j];
        s = j;
        j = j * 2;
    }
    R[s] = temp;
}

void BuildHeap(int n)
{
    int i;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(i, n);
    }
}

void Heap_Sort(int n)
{
    int i;
    BuildHeap(n);
    for (int i = n; i > 1; i--)
    {
        R[0] = R[1];
        R[1] = R[i];
        R[i] = R[0];
        heapify(1, i - 1);
    }
}
int main(int argc, char const *argv[])
{
    int number;
    puts("Please input the number\n");
    scanf("%d", &number);
    puts("Please input the elements\n");
    for (int i = 1; i <= number; i++)
    {
        scanf("%d", &R[i]);
    }
    Heap_Sort(number);
    puts("The sorted elements\n");
    for (int i = 1; i <= number; i++)
    {
        printf("%4d", R[i]);
    }
    return 0;
}
