int main()
{
    int i, j;
    int multiplica[11][11];
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 11; j++)
        {
            multiplica[i][j] = i * j;
        }
    }
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 11; j++)
        {
            printf("%5d ", multiplica[i][j]);
        }
        printf("\n");
    }
    return 0;
}