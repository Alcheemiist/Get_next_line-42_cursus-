/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:11:33 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/11/10 00:59:10 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int main (int argc, char **argv)
{
	char	*line;
	int 	fd;
	int  ret;
	int x;

	x = 1;	
	ret = 1;
	if (argc == 2)
	{
		fd = open( argv[1], O_RDONLY);
		while (ret)
			{
				if (ret == -1)
					break;
				ret = get_next_line(fd, &line);
				printf("\033[0;32m");
				printf("-|%s\n",line);
				x++;
			}
		printf("%d\n\n",ret);
	}	
	else 
	{
		printf("\033[0;31m"); 
		printf(" Mehdi put the fucking file.txt");	
	}
	return (0);
}
