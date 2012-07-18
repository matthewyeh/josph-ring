/*
modify time: 2012-07-18 10:52
*/

#include <stdio.h>

typedef struct _ballItem
{
	int num;
	struct _ballItem *next;
} ballitem_t;

typedef struct _josphring
{
	ballitem_t *before_select;
	ballitem_t *select;
} josph_ring_t;

josph_ring_t jrctx;
void balls_init(int n)
{
	int i=0;
	ballitem_t *p=NULL,*q=NULL;
	jrctx.before_select = jrctx.select = NULL;
	for (i=0; i<n; i++)
	{
		p = (ballitem_t *)calloc(sizeof(ballitem_t));
		p->num = n-i;
		p->next = q;
		q = p;
	}
	jrctx.before_select = q;
}

void build_ring(int start, int count)
{
}

void display_ring()
{
}

void saferelease()
{
	ballitem_t *p=jrctx.select,*q=NULL;
	while(p)
	{
		p = p->next;
	}
}

void josph-ring(int n, int k, int m)
{
	balls_init(n);
	build_ring(k,m);
	display_ring();
	saferelease();
}

int main(int argc, char *argv[])
{
	josph_ring(9,1,5);
	return 0;
}