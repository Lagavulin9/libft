/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:25:41 by jinholee          #+#    #+#             */
/*   Updated: 2022/07/06 11:02:36 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return (('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z')
		|| ('0' <= c && c <= '9'));
}
