/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 10:53:57 by luccasim          #+#    #+#             */
/*   Updated: 2016/12/02 10:54:00 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	const char	*a = "ft_printf";

	PUTSTR("Bonjour quelques test de DEFINES:");
	PUTNBR(42);
	PUTSTR("Affichage de 42 en binaire (16 bit par defaut):");
	PUTBIN(42);
	PUTSTR("Sur 6 bit:");
	ft_printf("%.6b\n", 42);
	PUTSTR("Affichage d'une addresse");
	PUTPTR(a);
	ft_printf("Ceci est un {p:4}format{e} per{w:1}sonnaliser{e}\n");
	ft_printf("{g:1:%s}", "Et une version encore plus formater!\n");
	return (0);
}
