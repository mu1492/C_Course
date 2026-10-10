// frand100.cpp, pag. 195

int frand100(void)
{
        time_t lt;
        int number;

        srand((unsigned) time(&lt));
        number=rand()%101;

        return number;
}
