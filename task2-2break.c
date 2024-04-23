int main()
{
    int flag = 0;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            for (int k = 0; k <= 10; k++)
            {
                if (i == 7 && j == 7 && k == 7)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    return 0;
}