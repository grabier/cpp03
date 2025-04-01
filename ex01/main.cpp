/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:01:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 19:04:00 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap b("roberwido");
	ClapTrap A;
	A.attack("paqui");
	b.attack("paqui");
	b.guardGate();
	b.takeDamage(100);
	b.guardGate();
	A.takeDamage(9);
	return (0);
}