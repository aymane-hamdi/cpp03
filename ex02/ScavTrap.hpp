/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 21:25:05 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/15 15:07:01 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
class ScavTrap : public  ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &original);
        ScavTrap& operator=(const ScavTrap& original);
        void attack(const std::string& target);
        ~ScavTrap();
        void guardGate();
};

#endif