#include "Person.h"

Person::Person(const char* name, int age) : name(name), age(age) {}

const char* Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

void Person::showInfo() const
{
    cout << "Name: " << name << ", Age: " << age << endl;
}

Student::Student(const char* name, int age, const char* university)
    : Person(name, age), university(university) {}

const char* Student::getUniversity() const
{
    return university;
}

void Student::showInfo() const
{
    Person::showInfo();
    cout << "University: " << university << endl;
}

Teacher::Teacher(const char* name, int age, const char* school, double salary)
    : Person(name, age), school(school), salary(salary) {}

const char* Teacher::getSchool() const
{
    return school;
}

double Teacher::getSalary() const
{
    return salary;
}

void Teacher::showInfo() const
{
    Person::showInfo();
    cout << "School: " << school << ", Salary: $" << salary << endl;
}

Driver::Driver(const char* name, int age, const char* carNumber, const char* driverLicenseNumber)
    : Person(name, age), carNumber(carNumber), driverLicenseNumber(driverLicenseNumber) {}

const char* Driver::getCarNumber() const
{
    return carNumber;
}

const char* Driver::getDriverLicenseNumber() const
{
    return driverLicenseNumber;
}

void Driver::showInfo() const
{
    Person::showInfo();
    cout << "Car Number: " << carNumber << ", Driver License Number: " << driverLicenseNumber << endl;
}

Doctor::Doctor(const char* name, int age, const char* speciality, int experience)
    : Person(name, age), speciality(speciality), experience(experience) {}

const char* Doctor::getSpeciality() const
{
    return speciality;
}

int Doctor::getExperience() const
{
    return experience;
}

void Doctor::showInfo() const
{
    Person::showInfo();
    cout << "Speciality: " << speciality << ", Experience: " << experience << " years" << endl;
}
