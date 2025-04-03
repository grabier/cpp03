/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:01:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/03 15:37:48 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (){

	ScavTrap scav;
	ClapTrap clap;
	FragTrap frag("test");
	DiamondTrap diamond("ALOALO");

	std::cout << "Clap info: " << std::endl;
	std::cout << clap.getHitpoints() << std::endl << clap.getEnergypoints() << std::endl << clap.getAttackdamage() << std::endl;
	std::cout << "Scav info: " << std::endl;
	std::cout << scav.getHitpoints() << std::endl << scav.getEnergypoints() << std::endl << scav.getAttackdamage() << std::endl;
	std::cout << "Frag info: " << std::endl;
	std::cout << frag.getHitpoints() << std::endl << frag.getEnergypoints() << std::endl << frag.getAttackdamage() << std::endl;
	std::cout << "Diamond info: " << std::endl;
	std::cout << diamond.getHitpoints() << std::endl << diamond.getEnergypoints() << std::endl << diamond.getAttackdamage() << std::endl;
	scav.guardGate();
	frag.highFivesGuys();
	diamond.whoAmI();

	return (0);
}