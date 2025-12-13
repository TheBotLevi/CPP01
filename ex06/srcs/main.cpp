/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:22:15 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/13 11:24:13 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int ac, char **av) {
        Harl harl;

        if (ac != 2) {
                std::cout << "Usage: ./program <level>" << std::endl;
                return 1;
        }
        harl.complain(av[1]);
        return 0;
}