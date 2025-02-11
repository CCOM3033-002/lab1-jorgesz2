/*
Lab 1: Box Office
Nombre: Jorge Suris Zayas - jorgesz2
Núm. Est: 401-24-8161
Colaboraciones: 

*/

#include <iostream>
#include <iomanip>

    /*
    This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.
 ex:
    Movie Name:                 “Wheels of Fury”  
    Adult Tickets Sold:           382  
    Child Tickets Sold:           127  
    Gross Box Office Profit:    $  4582.00  
    Net Box Office Profit:      $   916.40  
    Amount Paid to Distributor: $  3665.60  
    */

int main(){
    // Proposito
    std::cout << "This program calculates the Gross and Net "
        << "Box Office Profit and the Distributer's Profit "
        << "of a movie playing in the theater.\n" << std::endl;
    
    //len de padding
    std::string str = "Amount Paid to Distributor: ";
    int pad = str.length();

    // Nombre
    std::cout << "Enter the name of the movie: ";
    std::string nombre;
    getline(std::cin, nombre);

    // Cantidad de tickets (Adluto y menor)
    std::cout << "Enter the amount of adult tickets sold: ";
    int adultos;
    std::cin >> adultos;

    std::cout << "Enter the amount of child tickets sold: ";
    int menores;
    std::cin >> menores;

    // Matematica
    // Adulto *= $10.00, Menor *= $6.00
    double gross_p = adultos*10.0 + menores*6.0;
    //net = Gross*0.20, Distributors = Gross - Net
    double net_p = gross_p*0.2;
    double distributor_p = gross_p-net_p;

    std::cout << std::endl; // Buffer
    // Desplegar Movie info + Profit
    std::cout << std::left << std::setw(pad) << "Movie Name:"
        << "\""+nombre+"\"" << std::endl; // "name"

    std::cout << std::left << std::setw(pad+1) << "Adult Tickets Sold:"
        << adultos << std::endl; // Adultos

    std::cout << std::left << std::setw(pad+1) << "Child Tickets Sold:"
        << menores << std::endl; // Menores

    std::cout << std::setprecision(2) << std::fixed; //Punto decimal 
    int m_buff = 11; // setw() para profits [\w+00000.00]

    std::cout << std::left << std::setw(pad) << "Gross Box Office Profit:"
        << "$" << std::right << std::setw(m_buff) << gross_p << std::endl;

    std::cout << std::left << std::setw(pad) << "Net Box Office Profit:"
    << "$" << std::right << std::setw(m_buff) << net_p << std::endl;

    std::cout << std::left << std::setw(pad) << "Amount Paid to Distributor:"
        << "$" << std::right << std::setw(m_buff) << distributor_p << std::endl;

    
    return 0;
}
