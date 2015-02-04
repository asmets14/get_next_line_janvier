/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 13:32:19 by asmets            #+#    #+#             */
/*   Updated: 2015/02/04 14:24:41 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
# include <unistd.h>

int main ()
{
	char *line;
	int fd;

	fd = open("toto", O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		printf("[TEST] [%s]\n", line);
		free(line);
		line = NULL;
	}
	close(fd);
	return (0);
}

