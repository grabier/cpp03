/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:01:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 17:41:23 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap A("juani");
	//ClapTrap B(A);
	ClapTrap c;
	c = A;
	//ClapTrap c;
	c.attack("robert wid");
	//c.takeDamage(10);
	//A.takeDamage(9);
	A.beRepaired(1);
	A.beRepaired(1);
	A.beRepaired(1);
	A.beRepaired(1);
	A.beRepaired(1);
	A.beRepaired(1);
	A.beRepaired(1);
	A.beRepaired(1);
	A.beRepaired(1);
	A.beRepaired(1);
	//A.getenergy();
	//B.getenergy();
	A.beRepaired(1);
	//A.takeDamage(2);
	//c.beRepaired(200000);
}