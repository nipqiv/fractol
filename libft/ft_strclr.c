/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:16:09 by jandre-d       #+#    #+#                */
/*   Updated: 2019/02/04 12:15:49 by jandre-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *as)
{
	while (*as)
	{
		*(as) = '\0';
		as++;
	}
}
