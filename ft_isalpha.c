/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:08:29 by vbychik           #+#    #+#             */
/*   Updated: 2024/05/21 17:35:56 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int i)
{
	if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char a = '9';
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(100));
	printf("%d\n", ft_isalpha(242));
	printf("%d\n", ft_isalpha(23));
	printf("%d\n", ft_isalpha(69));
}
*/
