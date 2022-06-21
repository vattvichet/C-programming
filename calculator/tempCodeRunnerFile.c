else
        {
            if (binary[i] == '.')
            {
                break;
            }
            decimal += (binary[i] - '0') * pow(2, n);
            n--;
            sum = decimal;
        }