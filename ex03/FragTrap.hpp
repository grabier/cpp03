/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:08:53 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/01 21:00:28 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(const std::string &);
		FragTrap(const FragTrap &);
		~FragTrap(void);
		void operator=(const FragTrap &);
		void guardGate(void);
		void attack(const std::string &);
		void highFivesGuys(void);
};