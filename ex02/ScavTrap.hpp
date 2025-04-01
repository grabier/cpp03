/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:50:22 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 18:42:37 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(const std::string &);
		ScavTrap(const ScavTrap &);
		~ScavTrap(void);
		void operator=(const ScavTrap &);
		void guardGate(void);
		void attack(const std::string &);
};