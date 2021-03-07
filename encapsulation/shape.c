#include "shape.h" /* Shape class interface */
/* constructor implementation */
void Shape_ctor(Shape * const me, int16_t x, int16_t y) {
	me->x = x;
	me->y = y;
}
/* move-by operation implementation */
void Shape_moveBy(Shape * const me, int16_t dx, int16_t dy) {
	me->x += dx;
	me->y += dy;
}

/* "getter" operations implementation */
int16_t Shape_getX(Shape * const me) {
	return me->x;
}

int16_t Shape_getY(Shape * const me) {
	return me->y;
}