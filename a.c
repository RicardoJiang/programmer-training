extern int shared;
extern void swap(int *a, int* b);

int main(void)
{
    int a = 100;
    swap(&a, &shared);
}