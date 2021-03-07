#ifndef SHAPE_H
#define SHAPE_H
#include <inttypes.h>
/* Shape's attributes... */
typedef struct {
	int16_t x; /* x-coordinate of Shape's position */
	int16_t y; /* y-coordinate of Shape's position */
} Shape;

/* Shape's operations (Shape's interface)... */
void	Shape_ctor(Shape * const me, int16_t x, int16_t y);
void	Shape_moveBy(Shape * const me, int16_t dx, int16_t dy);
int16_t	Shape_getX(Shape * const me);
int16_t	Shape_getY(Shape * const me);

#endif /* SHAPE_H */