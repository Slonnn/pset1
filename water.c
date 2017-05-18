#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double gallon = 1.5;    //галонов
    int ounce = 128;        //унций 
    int ounce_bottles = 16; //унций в бутылке
    
    //Указываем время пользования душа
    
    printf("Сколько минут Вам нужно?\n");
    int n = GetInt();
    
    if (n > 0)
    {
    //узнать сколько бутылки с водой в минуту
    
    int bottles = (n*gallon*ounce)/ounce_bottles;
    printf("ВАМ понадобиться %d бутылок.\n", bottles);
    }
    else
     {
        printf("напишите положительное число\n");
    }
    //Хорошо, еще бы проверку введенных данных добавить, и будет идеально
    return 0;
}