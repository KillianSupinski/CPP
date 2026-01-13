/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 10:55:26 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/11 14:24:40 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for(int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        for(size_t j = 0; j < arg.length(); j++){
            std::cout << static_cast<char>(std::toupper(arg[j]));
        }
    }
    std::cout << std::endl;
    return (0);
}