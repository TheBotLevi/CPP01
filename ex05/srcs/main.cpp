/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:22:15 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/12 18:30:14 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main( void ) {
        Harl harl;

        harl.complain("DEBUG");
        std::cout << std::endl;
        harl.complain("WARNING");
        std::cout << std::endl;
        harl.complain("INFO");
        std::cout << std::endl;
        harl.complain("ERROR");
        std::cout << std::endl;
        harl.complain("");
        std::cout << std::endl;
        harl.complain("HALLO");
        return 0;
}