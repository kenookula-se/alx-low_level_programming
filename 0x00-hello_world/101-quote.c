#include <unistd.h>

int main(void)
{
    char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, msg, 59);  // 59 is the length of the message
    return 1;
}
