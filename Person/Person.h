#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
protected:
    const char* name;
    int age;

public:
    Person(const char* name, int age);
    virtual const char* getName() const;
    virtual int getAge() const;
    virtual void showInfo() const;
};

class Student : public Person
{
private:
    const char* university;

public:
    Student(const char* name, int age, const char* university);
    const char* getUniversity() const;
    void showInfo() const override;
};

class Teacher : public Person
{
private:
    const char* school;
    double salary;

public:
    Teacher(const char* name, int age, const char* school, double salary);
    const char* getSchool() const;
    double getSalary() const;
    void showInfo() const override;
};

class Driver : public Person
{
private:
    const char* carNumber;
    const char* driverLicenseNumber;

public:
    Driver(const char* name, int age, const char* carNumber, const char* driverLicenseNumber);
    const char* getCarNumber() const;
    const char* getDriverLicenseNumber() const;
    void showInfo() const override;
};

class Doctor : public Person
{
private:
    const char* speciality;
    int experience;

public:
    Doctor(const char* name, int age, const char* speciality, int experience);
    const char* getSpeciality() const;
    int getExperience() const;
    void showInfo() const override;
};

#endif
