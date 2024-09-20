#include <stdio.h>

struct company {
    char name[100];
    char address[200];
    long int phone;
    int no_of_employees;
};

int main() {
    struct company companyInfo;

    printf("Enter company name: ");
    scanf("%s", companyInfo.name);

    printf("Enter company address: ");
    scanf("%s", companyInfo.address);

    printf("Enter company phone number: ");
    scanf("%ld", &companyInfo.phone);

    printf("Enter number of employees: ");
    scanf("%d", &companyInfo.no_of_employees);

    printf("\nCompany Information:\n");
    printf("Name: %s\n", companyInfo.name);
    printf("Address: %s\n", companyInfo.address);
    printf("Phone: %ld\n", companyInfo.phone);
    printf("Number of Employees: %d\n", companyInfo.no_of_employees);

    return 0;
}