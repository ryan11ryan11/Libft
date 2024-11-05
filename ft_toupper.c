/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:34:24 by junhhong          #+#    #+#             */
/*   Updated: 2023/12/18 12:49:16 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c = c - 32;
	return (c);
}

// int main()
// {
// 	int	i;

// 	i = 5;
// 	while(i <= 150)
// 	{
// 		printf("%c :: %c\n",i,ft_toupper(i));
// 		i ++ ;
// 	}
// }