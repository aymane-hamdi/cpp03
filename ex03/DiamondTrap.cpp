/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:49:13 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/14 12:14:08 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("defaultDT_clap_trap")
{
    this->name = "defaultDT";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 30;
    std::cout << "Default constructor of DiamondTrap Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_trap")
{
    this->name = name;
    this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 30;
    std::cout << "Parameterized constructor of DiamondTrap Called" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap &original)
{
    this->name = original.name;
    this->Hit_points = original.Hit_points;
    this->Energy_points = original.Energy_points;
    this->Attack_damage = original.Attack_damage;
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
    if (this !=  &original)
    {
        this->name = original.name;
        this->Hit_points = original.Hit_points;
        this->Energy_points = original.Energy_points;
        this->Attack_damage = original.Attack_damage;
    }
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Deconstractor  of DiamondTrap Called" << std::endl;
}
void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i am a DiamondTrap named " << this->name << " and i am originated from the ClapTrap named " << ClapTrap::name << "." <<
	std::endl;
}