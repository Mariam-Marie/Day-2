#include <stdio.h>
int main() {
	int i, h, m, s;
	printf("Please enter a number : ");
	scanf("%d", &i);
	h = (i/3600);
	m = (i - (3600*h))/60;
	s = (i - (3600*h)-(60*m));
	printf("hours: %d \n", h);
	printf("minutes: %d \n", m);
	printf("seconds: %d", s);
	return 0;
}
