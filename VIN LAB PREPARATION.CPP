#pragma once
#include <string>
#ifndef CONTACT_H
#define CONTACT_H

class Contact
{

private:
    // Member variables for contact details
    std::string mFirstName;
    std::string mLastName;
    std::string mPhoneNumber;

    public
    // default constrctor 
    Contact();

    Contact(string firstName, string lastName, string phonenumber);

    //Accessor methods(getters)
    string GetFirstName() const;
    string GetLastName() const;
    string GetPhoneNumber() const;

    //overload relational  operator ==
    bool operator==(const Contacts& other) const;
};


CONTACT.CPP (IMPLEMENTATION FILE)

#include "Contact.h"

// default constructor
Contact:: Contact( string firstName, string lastName, string phonenumber);
mfirstName = firstName;
mLastName = lastName;
mPhoneNumber = phoneNumber;

// ACCESSORS
string Contact::GetFirstName() const{return mFirstName;}
string Contact:: GetFirstName() const{return mLastName;}
string Contact:: GetPhoneNumber() const{ return mPhoneNumber;}

//Equality operator overloading 
bool Contact::operator==(const Contact& other) const
{
    return this->mphoneNumber == other.mPhoneNUmber;
}


Phonebook.h
#include <iostream>
#include <fstream>

class Phonebook
{
    private:
    Contact* mContacts; // Dynamic array of objects
    int mCount; // Tracks valid contacts assigned
    int mSize; //Total size of the array

    // Private member fucntions
    void AddContact();
    void SaveContactsToFile();
    void ShowAllContacts();
    public:
    // only one constructor
    PhoneBook();

    //public run function
    void Run();
};
#endif

#include "PhoneBook.h"

// Constructor: Initializes the dynamic array with size 5
PhoneBook::PhoneBook() {
    mSize = 5;
    mCount = 0;
    mContacts = new Contact[mSize]; 
}

// Destructor: Cleans up dynamic memory
PhoneBook::~PhoneBook() {
    delete[] mContacts;
}

void PhoneBook::AddContact() {
    // 3.a.iv: Check if array is full
    if (mCount >= mSize) {
        std::cout << "PhoneBook is full! Cannot add more contacts." << std::endl;
        return;
    }

    std::string fName, lName, pNum;
    std::cout << "Enter First Name: "; std::cin >> fName;
    std::cout << "Enter Last Name: ";  std::cin >> lName;
    std::cout << "Enter Phone Number: "; std::cin >> pNum;

    Contact newContact(fName, lName, pNum);

    // 3.a.ii: Check for duplicates using overloaded == operator
    for (int i = 0; i < mCount; i++) {
        if (mContacts[i] == newContact) {
            std::cout << "Error: A contact with this number already exists!" << std::endl;
            return;
        }
    }

    // 3.a.iii & v: Assign and update count
    mContacts[mCount] = newContact;
    mCount++;
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::ShowAllContacts() {
    if (mCount == 0) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }
    for (int i = 0; i < mCount; i++) {
        std::cout << i + 1 << ". " << mContacts[i].GetFirstName() << " " 
                  << mContacts[i].GetLastName() << " [" << mContacts[i].GetPhoneNumber() << "]" << std::endl;
    }
}

void PhoneBook::SaveContactsToFile() {
    std::ofstream outFile("contacts.txt");
    for (int i = 0; i < mCount; i++) {
        outFile << mContacts[i].GetFirstName() << " " << mContacts[i].GetLastName() 
                << " " << mContacts[i].GetPhoneNumber() << std::endl;
    }
    outFile.close();
    std::cout << "Contacts saved to contacts.txt" << std::endl;
}

void PhoneBook::Run() {
    int choice = 0;
    // Basic loop to process menu options
    while (choice != 4) {
        std::cout << "\n1. Add Contact\n2. Show All Contacts\n3. Save to File\n4. Exit\nChoose option: ";
        std::cin >> choice;

        if (choice == 1) AddContact();
        else if (choice == 2) ShowAllContacts();
        else if (choice == 3) SaveContactsToFile();
        else if (choice == 4) std::cout << "Exiting..." << std::endl;
        else std::cout << "Invalid option! Try again." << std::endl; // 3.d.iv
    }
}
