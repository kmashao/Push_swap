#include "push_swap.h"

t_stack     *get_stack(int ac, char **av)
{
	t_stack     *node;
	t_stack     *stack;
	int index;

	node = NULL;
	stack = NULL;
	index = ac;

	if (index == 2)
	{
		while(av[index])
			index++;
	}
	while (--index >= 1)
	{
		if (!(node = (t_stack *)malloc(sizeof(t_stack))))
			{
				del_stack(&stack);
				return (NULL);
			}
		node->num = ft_atoi(av[index]);
		node->next = NULL;
		push(&stack, node);
	}
	return (stack);
}

t_stack		*make_stack(int ac, char **argv)
{
	t_stack		*stack;
	char		**values;

	stack = NULL;
	values = NULL;

	if (ac == 2)
	{
		values = split_args(ac, argv);
		stack = get_stack(ac, values);
		ft_del_2D(values);
	}
	else
		stack = get_stack(ac, argv);
	return (stack);
}

void	push(t_stack **stack, t_stack *node)
{
	if (stack && node)
	{
		node->next = (*stack);
		(*stack) = node;
	}
}

t_stack		*pop(t_stack **stack)
{
	t_stack *node;

	node = NULL;
	if (stack && (*stack))
	{
		node = (*stack);
		(*stack) = (*stack)->next;
		node->next = NULL;
	}
	return (node);
}

void	sa_sb(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	do_op(char *op, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strequ(op, "sa"))
		swap(stack_a);
	else if (ft_strequ(op, "sb"))
		swap(stack_b);
	else if (ft_strequ(op, "ss"))
		sa_sb(stack_a, stack_b);
	else if (ft_strequ(op, "ra"))
		rotate(stack_a);
	else if (ft_strequ(op, "rb"))
		rotate(stack_b);
	else if (ft_strequ(op, "rr"))
		ra_rb(stack_a, stack_b);
	else if (ft_strequ(op, "rra"))
		rev_rotate(stack_a);
	else if (ft_strequ(op, "rrb"))
		rev_rotate(stack_b);
	else if (ft_strequ(op, "rrr"))
		rev_rotate_ab(stack_a, stack_b);
	else if (ft_strequ(op, "pa"))
		push(stack_a, pop(stack_b));
	else if (ft_strequ(op, "pb"))
		push(stack_b, pop(stack_a));
	ft_putendl(op);
}

void	do_op_2(char *op, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strequ(op, "sa"))
		swap(stack_a);
	else if (ft_strequ(op, "sb"))
		swap(stack_b);
	else if (ft_strequ(op, "ss"))
		sa_sb(stack_a, stack_b);
	else if (ft_strequ(op, "ra"))
		rotate(stack_a);
	else if (ft_strequ(op, "rb"))
		rotate(stack_b);
	else if (ft_strequ(op, "rr"))
		ra_rb(stack_a, stack_b);
	else if (ft_strequ(op, "rra"))
		rev_rotate(stack_a);
	else if (ft_strequ(op, "rrb"))
		rev_rotate(stack_b);
	else if (ft_strequ(op, "rrr"))
		rev_rotate_ab(stack_a, stack_b);
	else if (ft_strequ(op, "pa"))
		push(stack_a, pop(stack_b));
	else if (ft_strequ(op, "pb"))
		push(stack_b, pop(stack_a));
}