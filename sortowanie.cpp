<<<<<<< HEAD
#define NAJNOWSZAZMIANA 1

 int[] tab = new int[zakres];
=======
#define NOWAZMIANA 2

int[] tab = new int[zakres];
>>>>>>> remotes/origin/drugi
            for (int i = 0; i < zakres; i++)
            {
                liczba = Generator.Next(101);
                tab[i] = liczba;
                Console.Write(tab[i] + " ");
            }
            sort = Sortowanie(tab, zakres);
            Console.WriteLine("wynik" + sort);
        }
            public static int Sortowanie(int[] tab, int zakres, int bufor)
            {
            for (int i = 0; i < zakres - 1; i++)
            {
                for (int j = 0; j < zakres - 1; j++)
                {
                    if (tab[j] > tab[j + 1])
                    {
                        bufor = tab[j];
                        tab[j] = tab[j + 1];
                        tab[j + 1] = bufor;
                    }
 
                }
            }