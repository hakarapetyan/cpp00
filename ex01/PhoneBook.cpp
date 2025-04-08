#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index=0;
}
PhoneBook::~PhoneBook()
{}
string PhoneBook::get_input(string str)
{
    string input;
    std::cout<<str<<": ";
    std::getline(std::cin, input);
    return (input);
}

void PhoneBook::add()
{
    this->contacts[this->index % 8].set_firstname(get_input("First name "));
    this->contacts[this->index % 8].set_lastname(get_input("Last name "));
    this->contacts[this->index % 8].set_nickname(get_input("Nick name "));
    this->contacts[this->index % 8].set_phonenumber(get_input("Phonenumber name "));
    this->contacts[this->index % 8].set_darksecret(get_input("Darkestsecret name "));
    if (ft_isalpha_str(this->contacts[this->index % 8].get_firstname()) && ft_isalpha_str(this->contacts[this->index % 8].get_lastname()) &&
    ft_isdigit_str(this->contacts[this->index % 8].get_phonenumber()) && empty_check(this->contacts[this->index % 8]))
        this->index++;
    else
        std::cout<<"\033[33mWrong input,hargelis,please write the correct input\n\033[37m";
}
void PhoneBook::print_fields()
{
    int i =0;
    string first,last,nick;
    std::cout<<std::setw(10)<<"Index";
    std::cout<<std::setw(2)<<"|";
    std::cout<<std::setw(10)<<"First_name";
    std::cout<<std::setw(2)<<"|";
    std::cout<<std::setw(10)<<"Last_name";
    std::cout<<std::setw(2)<<"|";
    std::cout<<std::setw(10)<<"Nick_name"<<std::endl;
    while (i < 8 && !this->contacts[i].get_firstname().empty())
    {
        first=this->contacts[i].get_firstname();
        last=this->contacts[i].get_lastname();
        nick=this->contacts[i].get_nickname();
        if (first.length()>10)
        first.substr(0,9)+'.';
        if (last.length()>10)
        last.substr(0,9)+'.';
        if (nick.length()>10)
        nick.substr(0,9)+'.';
    std::cout<<std::setw(10)<<i;
    std::cout<<std::setw(2)<<"|";
    std::cout<<std::setw(10)<<first;
    std::cout<<std::setw(2)<<"|";
    std::cout<<std::setw(10)<<last;
    std::cout<<std::setw(2)<<"|";
    std::cout<<std::setw(10)<<nick<<std::endl;
    i++;
    }  
}
void PhoneBook::search()
{

        print_fields();
}