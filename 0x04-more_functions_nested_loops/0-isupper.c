nclude "main.h"

int _putchar(char c);

int main(void)
{
    char c;

    c = 'A';
    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar(_isupper(c) + '0');
    _putchar('\n');

    c = 'a';
    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar(_isupper(c) + '0');
    _putchar('\n');

    return (0);
}

