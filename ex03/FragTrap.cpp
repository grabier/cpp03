/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:07:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 19:13:00 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "FragTrap default constructor" << std::endl;
	hitpoints = 100;
	energypoints = 100;
	attackdamage = 30;
}

FragTrap::FragTrap(const std::string &_name){
	std::cout << "FragTrap name constructor" << std::endl;
	name = _name;
	hitpoints = 100;
	energypoints = 100;
	attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &other){
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::operator=(const FragTrap &other){
	name = other.name;
	hitpoints = other.hitpoints;
	energypoints = other.energypoints;
	attackdamage = other.attackdamage;
}

void FragTrap::attack(const std::string &target){
	std::cout << "FragTrap " << name << " attacks " << target
	 << " for " << attackdamage << " amount of health" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << name << " high fives all my dudes" << std::endl;
}