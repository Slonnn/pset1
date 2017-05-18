#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int quarter = 25, 
        ten = 10, 
        five = 5, 
        cent = 1;
        
    
    float change;
    
    //Вводим сумму
    do
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while(change < 0);
    
    //перевод в центы
    change = change * 100;
    
    //округление
    change = round(change);

    //подсчет монет 
    int c;
    int f = change;
    
    c = f / quarter;
    f = f % quarter;
    
    c = c + f / ten;
    f = f % ten;

    c = c + f / five;
    f = f % five;
    
    c = c + f / cent; 
    f = f % cent;
    
    //Вывод количество монет
    printf("%d\n", c);
    
    
    //!!!Отредактировал Согласен :) До полного идеала нехватает переменных для монеток, а так все отлично
    return 0;
}
