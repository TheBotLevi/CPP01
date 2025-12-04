/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:44:54 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/04 16:50:37 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include "../inc/Weapon.hpp"

/*
void HumanA_test() {
        Weapon type = Weapon("Machete");
        HumanA Bob("Bob", type);

        Bob.attack();
        type.setType("Sword");
        Bob.attack();
}

void HumanB_test() {
        Weapon type = Weapon("Dagger");
        HumanB Jim("Jim");

        Jim.setWeapon(type);
        Jim.attack();
        type.setType("Nun-chucks");
        Jim.attack();
}

int main() {
        HumanA_test();
        std::cout << std::endl;
        HumanB_test();
        return 0;
}*/

int main() {
        {
                Weapon club = Weapon("crude spiked club");
                HumanA bob("Bob", club);

                bob.attack();
                club.setType("some other type of club");
                bob.attack();
        }
        {
                Weapon club = Weapon("crude spiked club");
                HumanB jim("Jim");

                jim.setWeapon(club);
                jim.attack();
                club.setType("some other type of club");
                jim.attack();
        }
        return 0;
}