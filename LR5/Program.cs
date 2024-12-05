namespace LR5                                                       //ЛАБОРАТОРНАЯ РАБОТА №5. ВАРИАНТ 8
{
    internal class Program
    {
        class Time                                                  //Целевой класс по заданию
        {
            private int hour, min, sec;                             //Поля класса (часы, минуты, секунды)

            public Time(int sec)                                    //Конструктор с установкой времени
            {
                this.sec = sec;
            }

            public void setTime(int hour, int min)                  //Метод установки часов и минут
            {
                this.hour = hour;
                this.min = min;
            }

            public void timeIncr()                                  //Метод инкремента
            {
                if (sec >= 59)                                      //Проверка лимитов времени
                {
                    sec = 0;
                    if (min >= 59)
                    {
                        min = 0;
                        if (hour >= 23)
                        {
                            hour = 0;
                        }
                        else
                            hour++;
                    }
                    else
                        min++;
                }
                else
                    sec++;
            }

            public void PrintTime()                                 //Метод печати времени
            {
                Console.WriteLine(hour + ":" + min + ":" + sec);
            }
        }

        static void Main(string[] args)
        {
            int hour, min,
                sec = 0;

            Console.Write("Введите часы: "); hour = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите минуты: "); min = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите секунды (будут переданы в конструктор): "); sec = Convert.ToInt32(Console.ReadLine());


            Time t = new Time(sec);                                 //Секунды передаются в конструктор
            t.setTime(hour, min);                                   //Устанавливаем часы и минуты отдельно

            Console.Write("\nВремя до инкремента: "); t.PrintTime();

            t.timeIncr();                                           //Инкремент
            Console.Write("Время после инкремента: "); t.PrintTime();
        }
    }
}
