typedef unsigned int footype;

int printf(char *fmt, ...);

int foobar(footype a)
{
    printf("%d\n", a);
}

int main()
{
    footype a = 10;
    foobar(a);
}
