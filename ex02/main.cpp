/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:38:46 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/13 22:14:12 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a;
	FragTrap b("Cody");
	a.attack("some other robot");
	a.takeDamage(101);
	a.takeDamage(101);
	a.beRepaired(5);
	a.attack("some other other robot");
	b.beRepaired(3);
	for (int i = 1; i <= 12; i++)
		b.attack("Cody-clone");
	b.beRepaired(3);
	return (0);
}