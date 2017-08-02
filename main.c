/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:23:45 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/08/02 13:58:33 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test_queue()
{
	t_queue *queue = create_queue(10);
	
	t_vertex v1;
	v1.distance = 1;
	t_vertex v2;
	v2.distance = 2;
	t_vertex v3;
	v3.distance = 3;
	
	enqueue(queue, v1);
	enqueue(queue, v2);
	enqueue(queue, v3);

	printf("Front item is %d", front(queue).distance);  
}

int		main(int argc, char **argv)
{
	test_queue();
	return (0);
}
