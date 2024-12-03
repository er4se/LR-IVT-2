namespace LR5
{
    internal class Program
    {
        class Time
        {
            private int hour, min, sec;

            public Time(int sec)
            {
                this.sec = sec;
            }

            public void setTime(int hour, int min)
            {
                this.hour = hour;
                this.min = min;
            }

            public void timeIncr()
            {
                if (sec >= 59)
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

            public void PrintTime()
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


            Time t = new Time(sec);
            t.setTime(hour, min);

            Console.Write("\nВремя до инкремента: "); t.PrintTime();

            t.timeIncr();
            Console.Write("Время после инкремента: "); t.PrintTime();
        }
    }
}
