/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:50:22 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 21:00:23 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(const std::string &);
		ScavTrap(const ScavTrap &);
		~ScavTrap(void);
		void operator=(const ScavTrap &);
		void guardGate(void);
		virtual void attack(const std::string &);
};