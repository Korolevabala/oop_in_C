#include "rectangle.h" /* Rectangle class interface */
#include <stdio.h>

int main() {
	Rectangle r1, r2; /* multiple instances of Rect */
	/* instantiate rectangles... */
	Rectangle_ctor(&r1, 0, 2, 10, 15);
	Rectangle_ctor(&r2, -1, 3, 5, 8);
	printf("Rect r1(x=%d,y=%d,width=%d,height=%d)\n",
		   r1.super.x, r1.super.y, r1.width, r1.height);
	printf("Rect r2(x=%d,y=%d,width=%d,height=%d)\n",
		   r2.super.x, r2.super.y, r2.width, r2.height);
	/* re-use inherited function from the superclass Shape... */
	Shape_moveBy((Shape *)&r1, -2, 3);
	Shape_moveBy(&r2.super, 2, -1);
	printf("---------------------------------\n");
	printf("Rect r1(x=%d,y=%d,width=%d,height=%d)\n",
		   r1.super.x, r1.super.y, r1.width, r1.height);
	printf("Rect r2(x=%d,y=%d,width=%d,height=%d)\n",
		   r2.super.x, r2.super.y, r2.width, r2.height);

	printf("---------------------------------\n");
	printf("Rect r1(x=%d,y=%d,width=%d,height=%d)\n",
		Shape_getX((Shape *)&r1), Shape_getY((Shape *)&r1), r1.width, r1.height);


	return 0;
}