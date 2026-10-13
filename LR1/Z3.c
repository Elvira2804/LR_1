#include <stdio.h> 
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "ru_RU.UTF-8");

    puts(" __   __       __             __   __ ");
    puts(" __| |__|     |  | |__|      |  | |__ ");
    puts("|___ |__|  .  |__|    |   .  |__| |__|");

    return 0;
}
