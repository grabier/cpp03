/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:01:41 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 17:42:17 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//*************CONSTRUCTORS/DESTRUCTORS********** */
ClapTrap::ClapTrap(){
	std::cout << "ClapTrap Default constructor called" << std::endl;
	hitpoints = 10;
	energypoints = 10;
	attackdamage = 0;
}

ClapTrap::ClapTrap(const std::string &_name){
	std::cout << "ClapTrap Name constructor called" << std::endl;
	name = _name;
	hitpoints = 10;
	energypoints = 10;
	attackdamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}


//********************OPERATOR OVERLOAD *************** */
void ClapTrap::operator=(const ClapTrap &other){
	name = other.name;
	hitpoints = other.hitpoints;
	energypoints = other.energypoints;
	attackdamage = other.attackdamage;
}


//**********************GETTERS/SETTERS ****************** */
std::string ClapTrap::getName(void){
	return (name);
}

unsigned int ClapTrap::getHitpoints(void){
	return (hitpoints);
}

unsigned int ClapTrap::getEnergypoints(void){
	return (energypoints);
}

unsigned int ClapTrap::getAttackdamage(void){
	return (attackdamage);
}

void ClapTrap::setName(std::string &_name){
	name = _name;
}

void ClapTrap::setHitpoints(unsigned int amount){
	hitpoints = amount;
}

void ClapTrap::setEnergypoints(unsigned int amount){
	energypoints = amount;
}

void ClapTrap::setAttackdamage(unsigned int amount){
	attackdamage = amount;
}


//************************OTHER METHODS ******************** */
void ClapTrap::attack(const std::string &target){
	if (energypoints > 1 && hitpoints > 0){
		std::cout << "ClapTrap " << name << "attacks "
		 << target << ", causing " << attackdamage << " points of damage!" << std::endl;
		energypoints--;
	}
	else if (energypoints == 0)
		std::cout << "ClapTrap " << name << "does not have enough energy points to attack " << std::endl;
	else if (hitpoints == 0)
	std::cout << "ClapTrap " << name << "does not have enough hit points to attack " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitpoints > 0){
		if (amount > hitpoints)
			hitpoints = 0;
		else
			hitpoints -= amount;
		std::cout << "ClapTrap " << name << " recieved " << amount << " points of damage" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " already has 0 health" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	hitpoints += amount;
	std::cout << "ClapTrap " << name << " healed " << amount << " points of damage" << std::endl;
	
}