int main()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            for (int k = 0; k <= 10; k++)
            {
                if (i == 7 && j == 7 && k == 7)
                {
                    goto END;
                }
            }
        }
    }
END:
    return 0;
}