#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct Product    
{
    int quantity;
    float price;
    char productName[20];
} goods[10];        

struct Customer
{
    int totalQuantity;
    float totalAmount;
    char customerName[20];
    struct Product productsBought[10];
} customer1;

void setProductAttributes();

void buyProducts();
void sellProducts();
void displayProducts();

void checkout();
void updateInventory(int);

int main()
{
    system("cls");      
    int operation, again;

    setProductAttributes();
NEW_CUSTOMER:
    printf("Welcome Customer!!!");
AGAIN:
    printf("\nPress 1 to buy products.\nPress 2 to sell products.\nPress 3 to see all the products.\nPress 4 to exit shop.\n");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:
        buyProducts();
        break;
    case 2:
        sellProducts();
        break;
    case 3:
        displayProducts();
        goto AGAIN;
        break;
    case 4:
        break;
    default:
        printf("Enter a valid number from 1 to 4!!!\n");
        break;
    }
INVALID:
    printf("Press 1 to welcome another.\nPress 2 to close Shop.\n");
    scanf("%d", &again);
    switch (again)
    {
    case 1:
        system("cls");
        goto NEW_CUSTOMER;
        break;
    case 2:
        printf("\n\n\t\tTHE SHOP IS NOW CLOSED!!!\n\n");
        break;
    default:
        printf("Enter a valid number from 1 to 2!!!\n");
        goto INVALID;
        break;
    }
    return 0;
}

void setProductAttributes()
{
    strcpy(goods[0].productName, "Rice");
    strcpy(goods[1].productName, "Wheat");
    strcpy(goods[2].productName, "Soap");
    strcpy(goods[3].productName, "Oreo");
    strcpy(goods[4].productName, "Parle G");
    strcpy(goods[5].productName, "Vim Dishwash Liquid");
    strcpy(goods[6].productName, "Dairy Milk");
    strcpy(goods[7].productName, "5 Star");
    strcpy(goods[8].productName, "Kissan Pichku");
    strcpy(goods[9].productName, "Mustard Oil");
    for (int i = 0; i < 10; i++)
    {
        goods[i].quantity = 100;
    }
    goods[0].price = 50.00;
    goods[1].price = 100.00;
    goods[2].price = 25.00;
    goods[3].price = 30.00;
    goods[4].price = 20.00;
    goods[5].price = 45.00;
    goods[6].price = 10.00;
    goods[7].price = 20.00;
    goods[8].price = 30.00;
    goods[9].price = 60.00;
}

void buyProducts()
{
    int productNumber, again;
    customer1.totalQuantity = 0;
    customer1.totalAmount = 0;
    displayProducts();
BUY:
    printf("\n\nPress 1 to buy Rice.\nPress 2 to buy Wheat.\nPress 3 to buy Soap.\nPress 4 to buy Oreo.\nPress 5 to buy Parle G.\nPress 6 to buy Vim Dishwash Liquid.\nPress 7 to buy Dairy Milk.\nPress 8 to buy 5 Star,\nPress 9 to buy Kissan Pichku.\nPress 10 to buy Mustard Oil.\n");
    scanf("%d", &productNumber);
    switch (productNumber)
    {
    case 1:
        strcpy(customer1.productsBought[0].productName, goods[0].productName);
    VALID_QUANTITY1:
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[0].quantity);
        if (customer1.productsBought[0].quantity >= goods[0].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY1;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[0].quantity;
            customer1.totalAmount += (customer1.productsBought[0].quantity * goods[0].price);
        }
        break;
    case 2:
        strcpy(customer1.productsBought[1].productName, goods[1].productName);
    VALID_QUANTITY2:
        printf("Enter the quatity you want to buy : ");
        scanf("%d", &customer1.productsBought[1].quantity);
        if (customer1.productsBought[1].quantity > goods[1].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY2;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[1].quantity;
            customer1.totalAmount += (customer1.productsBought[1].quantity * goods[1].price);
        }
        break;
    case 3:
        strcpy(customer1.productsBought[2].productName, goods[2].productName);
    VALID_QUANTITY3:
        printf("Enter the quatity you want to buy : ");
        scanf("%d", &customer1.productsBought[2].quantity);
        if (customer1.productsBought[2].quantity > goods[2].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY3;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[2].quantity;
            customer1.totalAmount += (customer1.productsBought[2].quantity * goods[2].price);
        }
        break;
    case 4:
        strcpy(customer1.productsBought[3].productName, goods[3].productName);
    VALID_QUANTITY4:
        printf("Enter the quatity you want to buy : ");
        scanf("%d", &customer1.productsBought[3].quantity);
        if (customer1.productsBought[3].quantity > goods[3].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY4;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[3].quantity;
            customer1.totalAmount += (customer1.productsBought[3].quantity * goods[3].price);
        }
        break;
    case 5:
        strcpy(customer1.productsBought[4].productName, goods[4].productName);
    VALID_QUANTITY5:
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[4].quantity);
        if (customer1.productsBought[4].quantity >= goods[4].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY5;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[4].quantity;
            customer1.totalAmount += (customer1.productsBought[4].quantity * goods[4].price);
        }
        break;
    case 6:
        strcpy(customer1.productsBought[5].productName, goods[5].productName);
    VALID_QUANTITY6:
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[5].quantity);
        if (customer1.productsBought[5].quantity >= goods[5].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY6;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[5].quantity;
            customer1.totalAmount += (customer1.productsBought[5].quantity * goods[5].price);
        }
        break;
    case 7:
        strcpy(customer1.productsBought[6].productName, goods[6].productName);
    VALID_QUANTITY7:
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[6].quantity);
        if (customer1.productsBought[6].quantity >= goods[6].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY7;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[6].quantity;
            customer1.totalAmount += (customer1.productsBought[6].quantity * goods[6].price);
        }
        break;
    case 8:
        strcpy(customer1.productsBought[7].productName, goods[7].productName);
    VALID_QUANTITY8:
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[7].quantity);
        if (customer1.productsBought[7].quantity >= goods[7].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY8;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[7].quantity;
            customer1.totalAmount += (customer1.productsBought[7].quantity * goods[7].price);
        }
        break;
    case 9:
        strcpy(customer1.productsBought[8].productName, goods[8].productName);
    VALID_QUANTITY9:
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[8].quantity);
        if (customer1.productsBought[8].quantity >= goods[8].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY9;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[8].quantity;
            customer1.totalAmount += (customer1.productsBought[8].quantity * goods[8].price);
        }
        break;
    case 10:
        strcpy(customer1.productsBought[9].productName, goods[9].productName);
    VALID_QUANTITY10:
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[9].quantity);
        if (customer1.productsBought[9].quantity >= goods[9].quantity)
        {
            printf("Sorry we don't have that much quantity, Please Enter a reduced quantity :\n");
            goto VALID_QUANTITY10;
        }
        else
        {
            customer1.totalQuantity += customer1.productsBought[9].quantity;
            customer1.totalAmount += (customer1.productsBought[9].quantity * goods[9].price);
        }
        break;
    default:
        printf("Enter a valid number from 1 to 10!!!\n");
        goto BUY;
        break;
    }
INVALID_NUMBER:
    printf("Press 1 to buy another product.\nPress 2 to proceed to checkout.\n");
    scanf("%d", &again);
    switch (again)
    {
    case 1:
        goto BUY;
        break;
    case 2:
        checkout();
        break;
    default:
        printf("\nEnter a valid number between 1 and 2");
        goto INVALID_NUMBER;
        break;
    }
    updateInventory(0);
}

void sellProducts()
{
    int choice, again;
    customer1.totalQuantity = 0;
    customer1.totalAmount = 0;
    displayProducts();
BUY:
    printf("\n\nPress 1 to sell Rice.\nPress 2 to sell Wheat.\nPress 3 to sell Soap.\nPress 4 to sell Oreo.\nPress 5 to sell Parle G.\nPress 6 to sell Vim Dishwash Liquid.\nPress 7 to sell Dairy Milk.\nPress 8 to sell 5 Star,\nPress 9 to sell Kissan Pichku.\nPress 10 to sell Mustard Oil.\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        strcpy(customer1.productsBought[0].productName, goods[0].productName);
        printf("Enter the quatity you want to sell : ");
        scanf("%d", &customer1.productsBought[0].quantity);
        customer1.totalQuantity += customer1.productsBought[0].quantity;
        customer1.totalAmount += (customer1.productsBought[0].quantity * goods[0].price);
        break;
    case 2:
        strcpy(customer1.productsBought[1].productName, goods[1].productName);
        printf("Enter the quatity you want to sell : ");
        scanf("%d", &customer1.productsBought[1].quantity);
        customer1.totalQuantity += customer1.productsBought[1].quantity;
        customer1.totalAmount += (customer1.productsBought[1].quantity * goods[1].price);
        break;
    case 3:
        strcpy(customer1.productsBought[2].productName, goods[2].productName);
        printf("Enter the quatity you want to sell : ");
        scanf("%d", &customer1.productsBought[2].quantity);
        customer1.totalQuantity += customer1.productsBought[2].quantity;
        customer1.totalAmount += (customer1.productsBought[2].quantity * goods[2].price);
        break;
    case 4:
        strcpy(customer1.productsBought[3].productName, goods[3].productName);
        printf("Enter the quatity you want to sell : ");
        scanf("%d", &customer1.productsBought[3].quantity);
        customer1.totalQuantity += customer1.productsBought[3].quantity;
        customer1.totalAmount += (customer1.productsBought[3].quantity * goods[3].price);
        break;
    case 5:
        strcpy(customer1.productsBought[4].productName, goods[4].productName);
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[4].quantity);
        customer1.totalQuantity += customer1.productsBought[4].quantity;
        customer1.totalAmount += (customer1.productsBought[4].quantity * goods[4].price);
        break;
    case 6:
        strcpy(customer1.productsBought[5].productName, goods[5].productName);
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[5].quantity);
        customer1.totalQuantity += customer1.productsBought[5].quantity;
        customer1.totalAmount += (customer1.productsBought[5].quantity * goods[5].price);
        break;
    case 7:
        strcpy(customer1.productsBought[6].productName, goods[6].productName);
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[6].quantity);
        customer1.totalQuantity += customer1.productsBought[6].quantity;
        customer1.totalAmount += (customer1.productsBought[6].quantity * goods[6].price);
        break;
    case 8:
        strcpy(customer1.productsBought[7].productName, goods[7].productName);
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[7].quantity);
        customer1.totalQuantity += customer1.productsBought[7].quantity;
        customer1.totalAmount += (customer1.productsBought[7].quantity * goods[7].price);
        break;
    case 9:
        strcpy(customer1.productsBought[8].productName, goods[8].productName);
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[8].quantity);
        customer1.totalQuantity += customer1.productsBought[8].quantity;
        customer1.totalAmount += (customer1.productsBought[8].quantity * goods[8].price);
        break;
    case 10:
        strcpy(customer1.productsBought[9].productName, goods[9].productName);
        printf("Enter the quantity you want to buy : ");
        scanf("%d", &customer1.productsBought[9].quantity);
        customer1.totalQuantity += customer1.productsBought[9].quantity;
        customer1.totalAmount += (customer1.productsBought[9].quantity * goods[9].price);
        break;
    default:
        printf("Enter a valid number from 1 to 10!!!\n");
        goto BUY;
        break;
    }
INVALID_NUMBER:
    printf("Press 1 to sell another product.\nPress 2 to proceed to checkout.\n");
    scanf("%d", &again);
    switch (again)
    {
    case 1:
        goto BUY;
        break;
    case 2:
        checkout();
        break;
    default:
        printf("\nEnter a valid number between 1 and 2");
        goto INVALID_NUMBER;
        break;
    }
    updateInventory(1);
}

void displayProducts()
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nProduct Name : %s\tProduct Price : %.2f", goods[i].productName, goods[i].price);
    }
}

void checkout()
{
    system("cls");
    printf("Enter Customer Name : ");
    scanf("%s", customer1.customerName);
    printf("Final Reciept:--\n");
    printf("|   Customer Name : %s\n", customer1.customerName);
    printf("|   Product Name   | Rate  | Quantity  | Total     |\n");
    for (int i = 0; i < 10; i++)
    {
        if (customer1.productsBought[i].quantity != 0)
        {
            printf("|   %s           | %.2f | %d        | %.2f   |\n", goods[i].productName, goods[i].price, customer1.productsBought[i].quantity, goods[i].price * customer1.productsBought[i].quantity);
        }
    }
    printf("|   Total Quantity : %d |   Total Amount : %.2f |", customer1.totalQuantity, customer1.totalAmount);
    printf("\nThank You For Shopping");
}

void updateInventory(int check)
{
    int choice;
    if (check == 0)
    {
        for (int i = 0; i < 10; i++)
        {
            goods[i].quantity -= customer1.productsBought[i].quantity;
        }
    }
    else if (check == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            goods[i].quantity += customer1.productsBought[i].quantity;
        }
    }
    printf("\nPress 1 to view Inventory : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("Product Name : %s\tProduct Price : %.2f\tProduct Stock : %d\n", goods[i].productName, goods[i].price, goods[i].quantity);
        }
    }
}
