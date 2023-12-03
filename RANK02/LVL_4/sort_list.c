#include "list.h"

int is_sorted(t_list *lst)
{
	while (lst->next)
	{
		if (lst->data > lst->next->data)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	ft_swap(t_list *a, t_list *b)
{
	int tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *l = lst;
	int b = 1;
	while (b)
	{
		b = 0;
		while (l && l->next)
		{
			if (!cmp(l->data, l->next->data))
			{
				ft_swap(l,l->next);
				b = 1;
			}
			l = l->next;
		}
		l = lst;
	}
	return (lst);
}

/*
#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list *c = malloc(sizeof(t_list));
	c->next = 0;
	c->data = 45;

	t_list *b = malloc(sizeof(t_list));
	b->next = c;
	b->data = 73;

	t_list *a = malloc(sizeof(t_list));
	a->next = b;
	a->data = 108;

	t_list *cur = a;
	while (cur)
	{
		printf("%d", cur->data);
		if (cur->next != 0)
			printf(", ");
		cur = cur->next;
	}
	printf("\n");

	cur = sort_list(a, ascending);

	 //cur = a;
	while (cur)
	{
		printf("%d", cur->data);
		if (cur->next != 0)
			printf(", ");
		cur = cur->next;
	}
	printf("\n");
}
*/
