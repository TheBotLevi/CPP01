/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:00:44 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/26 09:09:00 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

std::string HumanA::attack() {
        std::cout << _name << " attacks with their " << _weaponType << std::endl;
}