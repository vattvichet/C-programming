double binary;
    printf("Enter you Binary :");
    scanf("%lf", &binary);
    int integerPart = binary;
    float floatingPart = binary - integerPart;
    int multiFloat;
    int i, octal = 0, decimal = 0;
    i = 0;
    char textText[50];
    while (integerPart != 0)
    {
        decimal = decimal + (integerPart % 10) * pow(2, i);
        i++;
        integerPart = integerPart / 10;
    }

    i = 1;
    while (decimal != 0)
    {
        octal = octal + (decimal % 16) * i;
        decimal = decimal / 16;
        i = i * 10;
    }

    printf("The Hexadecimal Value : %d", octal);
    {
        i++;
    }

    printf(".");

    for (int s = 1; s < 2; s++)
    {
        int integer = floatingPart * 10000;
        switch (integer)
        {
        case 0:
            printf("0");
            break;
        case 1:
            printf("1");
            break;
        case 10:
            printf("2");
            break;
        case 11:
            printf("3");
            break;
        case 100:
            printf("4");
            break;
        case 101:
            printf("5");
            break;
        case 110:
            printf("6");
            break;
        case 111:
            printf("7");
            break;
        case 1000:
            printf("8");
            break;
        case 1001:
            printf("9");
            break;
        case 1010:
            printf("A");
            break;
        case 1011:
            printf("B");
            break;
        case 1100:
            printf("C");
            break;
        case 1101:
            printf("D");
            break;
        case 1110:
            printf("E");
            break;
        case 1111:
            printf("F");
            break;

        default:
            break;
        }
    }
    printf("\n");