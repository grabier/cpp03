/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:50:30 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 19:03:07 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout << "ScavTrap default constructor" << std::endl;
	hitpoints = 100;
	energypoints = 50;
	attackdamage = 20;
}

ScavTrap::ScavTrap(const std::string &_name){
	std::cout << "ScavTrap name constructor" << std::endl;
	name = _name;
	hitpoints = 100;
	energypoints = 50;
	attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other){
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::operator=(const ScavTrap &other){
	name = other.name;
	hitpoints = other.hitpoints;
	energypoints = other.energypoints;
	attackdamage = other.attackdamage;
}

void ScavTrap::attack(const std::string &target){
	std::cout << "ScavTrap " << name << " attacks " << target
	 << " for " << attackdamage << " amount of health" << std::endl;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}