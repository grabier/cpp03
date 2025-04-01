/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:01:37 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 18:35:43 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

//orthodox canonical:
//default constructor
//copy constructor
//copy assignment operator
//destructor

class ClapTrap{
	protected:
		std::string name;
		unsigned int hitpoints;
		unsigned int energypoints;
		unsigned int attackdamage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string &_name);
		ClapTrap(const ClapTrap &other);
		void operator=(const ClapTrap &other);
		virtual void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//getters
		std::string getName(void);
		unsigned int getHitpoints(void);
		unsigned int getEnergypoints(void);
		unsigned int getAttackdamage(void);
		//setters
		void setName(std::string &_name);
		void setHitpoints(unsigned int);
		void setEnergypoints(unsigned int);
		void setAttackdamage(unsigned int);
};