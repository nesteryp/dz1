#include <stdio.h>  
#include <math.h>  

int twototen(int dv2)  
{  
    int deci = 0, temp = 0, number;  // для функции переменные такие вот
    while (dv2 != 0)         // пока число не равное 0
    {  
        number = dv2 % 10;      // берет остатки для умножения потом
        dv2 = dv2 / 10;  // выступает таким счетчиком, пока пробегаться
        deci = deci + number * pow( 2, temp);  //  вычисляет по одной циферке с конца, пробегает по всему числу
        temp++;  //плюс попытка для определения длины числа
    }  
    return deci;   //  вернули число для вывода
}  

int main()  
{   
    int dv, dec; //переменные чисто символически вот    
    scanf ("%d", &dv);  //считываем число вот
      
    dec = twototen (dv); // функцию вызываем вот  
    printf ("%d", dec); //ответ:  
}  