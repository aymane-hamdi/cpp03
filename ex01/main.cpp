/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:38:46 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/13 22:04:25 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a;
	ScavTrap b("Cody");
	a.attack("some other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other other robot");
	b.beRepaired(3);
	for (int i = 1; i <= 51; i++)
		b.attack("Cody-clone");
	b.beRepaired(3);
	return (0);
}