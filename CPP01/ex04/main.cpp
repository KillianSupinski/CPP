/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksupinsk <ksupinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:15:51 by ksupinsk          #+#    #+#             */
/*   Updated: 2026/01/20 14:01:59 by ksupinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static void replaceAll(std::string& content, 
    const std::string& s1, const std::string& s2)
{
    std::string::size_type pos = 0;
    
    while((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "It must have 3 arguments {Filename, s1, s2}" << std::endl; 
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if(s1.length() == 0)
    {
        std::cout << "s1 can't be empty." << std::endl;
        return (1);
    }
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cout << "Error, can't open this file." << std::endl;
        return (1);
    }
    std::string content;
    std::string line;
    while(std::getline(infile, line))
    {
        content += line;
        if(!infile.eof())
            content += "\n";
    }
    std::string outname = filename + ".replace";
    std::ofstream outfile(outname.c_str());
    if(!outfile)
    {
        std::cout << "Error: cannot open output file" << std::endl;
        return (1);
    }
    replaceAll(content, s1, s2);
    outfile << content;
    return (0);
}