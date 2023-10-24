#include <stdio.h>

unsigned long long int recursiva(int n);

void printrecursivaSerie(int n, int i);

int main() 
{
    int n;

    printf("Introduce el numero:");
    if (scanf("%d", &n) != 1 || n < 0) 
	{
    
    }
}

unsigned long long int recursiva(int n) 
{
    return (n <= 1) ? n : recursiva(n - 1) + recursiva(n - 2);
}

void printrecursivaSerie(int n, int i) 
{
    if (i <= n) 
	{
        printf("%llu ", recursiva(i));
        if (i < n) {
            printrecursivaSerie(n, i + 1);
        } else {
            printf("\n");
        }
    }
}

