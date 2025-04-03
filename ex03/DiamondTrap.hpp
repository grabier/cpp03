/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:39:50 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 21:20:09 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	private:
		using ClapTrap::name;

	public:
		DiamondTrap();
		DiamondTrap(const std::string &);
		~DiamondTrap();
		void operator=(const DiamondTrap &);
		void attack(const std::string &);
		void whoAmI(void);
};