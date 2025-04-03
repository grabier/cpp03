/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:39:52 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 21:13:48 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap default constructor" << std::endl;
	hitpoints = FragTrap::hitpoints;
	energypoints = ScavTrap::energypoints;
	attackdamage = FragTrap::attackdamage;
}

DiamondTrap::DiamondTrap(const std::string &target){
	std::cout << "DiamondTrap name constructor" << std::endl;
	ClapTrap::name = target + "_clap_name";
	name = target;
	hitpoints = FragTrap::hitpoints;
	energypoints = ScavTrap::energypoints;
	attackdamage = FragTrap::attackdamage;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::operator=(const DiamondTrap &other){
	name = other.name;
	hitpoints = other.hitpoints;
	energypoints = other.energypoints;
	attackdamage = other.attackdamage;
}

void DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void){
	std::cout << "My Diamond name is : " << name << std::endl;
	std::cout << "My ClapTrap name is : " << ClapTrap::name << std::endl;
}