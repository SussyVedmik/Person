#include "Person.h"

int main()
{
    Student student("German", 18, "Tech");
    Teacher teacher("Muhammad", 34, "Bright School", 12000);
    Driver driver("Britney", 27, "CH5900FG", "RT-00976584573");
    Doctor doctor("Bagofries", 29, "Venereology", 25);

    student.showInfo();
    teacher.showInfo();
    driver.showInfo();
    doctor.showInfo();

    return 0;
}
