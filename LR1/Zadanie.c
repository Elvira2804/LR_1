#include <stdio.h>
#include <locale.h>

void name();
void date();

int main() {

    setlocale(LC_CTYPE, "ru_RU.UTF-8");
    name();
    date();

    return 0;
};

void name() {

    printf("****************************************************\n");
    printf("*      Тема: Разработка консольного приложения     *\n");
    printf("*                                                  *\n");
    printf("* Группа:  бИД-261                                 *\n");
    printf("* Студент: Орлова Э.Э.                             *\n");
    printf("****************************************************\n");
}

void date() {

    puts(" __   __       __             __   __ ");
    puts(" __| |__|     |  | |__|      |  | |__ ");
    puts("|___ |__|  .  |__|    |   .  |__| |__|");
}