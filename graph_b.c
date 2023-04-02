#include <stdio.h> 
#include <math.h>

void main () {

    double for_check[10][2] = {{-5., 5.}, {-4., -4.}, {5.,-1.}, {5., 5.}, {1., 8.}, {1.,2.},
	{3., 0.}, {0.,3.}, {0.,0.}, {1.,1.}};

	/* 1-ые координаты - входят ли они во 2 четверть (ожид.: 0)
	2-ые координаты - входят ли они в 3 четверть (ожид.:  0)
	3-ие координаты - входят ли они в 4 четверть (ожид. 0)
	4-ые координаты - входят ли они в окружность (ожид. 0)
	5-ые координаты - лежат ли они на окружности (там где нет границы с закраш. обл.) (ожид. 0)
	6-ые координаты - лежат ли они на окружности (там где граница с закраш. обл) (ожид. 1)
	7-ые координаты - лежат ли они на оси х (там где закраш. обл.) (ожид. 1)
	8-ые координаты - лежат ли они на оси у (там где закраш. обл.) (ожид. 1)
	9-ые координаты - как ведут себя в начале координат (ожид. 1)
	10-ые координаты - как ведут себя в закраш. области (ожид. 1) */

    double x,y;

    for (int i = 0; i < 10; i++) {
	    printf("Проверка %d: %d\n", i+1, (!(pow((for_check[i][0]-5.),2.) + 
        pow((for_check[i][1]-5.),2.) < pow(5.,2.))) && (for_check[i][0] <= 5.) && 
        (for_check[i][1] <= 5.) && (for_check[i][0]>=0) && (for_check[i][1]>=0));
	}

	printf ("Введите координату х: ");
	scanf ("%lf", &x);
	printf ("Введите координату y: ");
	scanf ("%lf", &y);

    if ((!(pow((x-5.),2.) + pow((y-5.),2.) < pow(5.,2.))) && (x <= 5.) && (y <= 5.) && (x>=0) && (y>=0))
	    printf("Результат проверки от пользователя: 1\n");
    else
        printf("Результат проверки от пользователя: 0\n");

}