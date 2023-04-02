#include <stdio.h> 
#include <stdbool.h>

bool isBissectrice(double, double);
bool isVertical(double);
bool isHorizontal(double);

void main() {
	double for_check[10][2] = {{5., 5.}, {-3., -4.}, {-4.,1.}, {-10., 4.}, {1., 10.}, {5.,-7.},
	{3., -1.}, {1.,1.}, {0.,0.}, {4.,-4.}};

	/* 1-ые координаты - входят ли они в закраш. область 1 четверти (ожид.: 1)
	2-ые координаты - входят ли они в третью четверть (ожид.:  1)
	3-ие координаты - входят ли они в закраш. область 2 четверти (ожид. 1)
	4-ые координаты - входят ли они в незакраш. область 2 четверти под графиком (ожид. 0)
	5-ые координаты - входят ли они в незакраш. обл. 2 четверти сверху графика (ожид. 0)
	6-ые координаты - входят ли они в незакраш. обл. 4 четверти под графиком (ожид. 0)
	7-ые координаты - входят ли они в незакраш. обл. 4 четверти сверху графика (ожид. 0)
	8-ые координаты - входят ли они в незакраш. обл. 1 чертверти (ожид. 0)
	9-ые координаты - как ведут себя в начале координат (ожид. 1)
	10-ые координаты - как ведут себя на границе графика (ожид. 1) */

	double x;
	double y;

	for (int i = 0; i < 10; i++) {
		printf("Проверка %d: %d\n", i+1, (isBissectrice(for_check[i][0], for_check[i][1]) 
		&& (!isVertical(for_check[i][0])) && (!isHorizontal(for_check[i][1]))) || 
		(isVertical(for_check[i][0]) && isHorizontal(for_check[i][1])));
	}

	printf ("Введите координату х: ");
	scanf ("%lf", &x);
	printf ("Введите координату y: ");
	scanf ("%lf", &y);
	printf("Проверка от пользователя: %d\n", (isBissectrice(x, y) 
	&& (!isVertical(x)) && (!isHorizontal(y))) || 
	(isVertical(x) && isHorizontal(y)));

}

bool isBissectrice(double x, double y) {
	bool res;
	res = (y <= -x);
	return res;
}

bool isVertical(double x) {
	bool res;
	res = (x > 4);
	return res;
}
bool isHorizontal(double y) {
	bool res;
	res = (y > 3);
	return res;
}