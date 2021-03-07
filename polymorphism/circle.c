#include "circle.h" /* Rectangle class interface */
#include <stdio.h> /* for printf() */


/* Rectangle's prototypes of its virtual functions */
/* NOTE: the "me" pointer has the type of the superclass to fit the vtable */
static uint32_t Circle_area_(Shape const * const me);
static void Circle_draw_(Shape const * const me);
/* constructor */
void Circle_ctor(Circle * const me, int16_t x, int16_t y, uint16_t radius)
{
	static struct ShapeVtbl const vtbl = { /* vtbl of the Rectangle class */
			&Circle_area_,
			&Circle_draw_
	};
	Shape_ctor(&me->super, x, y); /* call the superclass' ctor */
	me->super.vptr = &vtbl; /* override the vptr */
	me->radius = radius;
}
/* Circle's class implementations of its virtual functions... */
static uint32_t Circle_area_(Shape const * const me) {
	Circle const * const me_ = (Circle const *)me; /* explicit downcast */
	return (uint32_t)me_->radius * (uint32_t)me_->radius * 3.14;
}

static void Circle_draw_(Shape const * const me) {
	Circle const * const me_ = (Circle const *)me; /* explicit downcast */
	printf("Circle_draw_(x=%-3d,y=%-3d,radius=%-3d)\n",me_->super.x, me_->super.y, me_->radius);
}
