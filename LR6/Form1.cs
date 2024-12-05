namespace LR6                                                                               //ЛАБОРАТОРНАЯ РАБОТА №6. ВАРИАНТ 8
{
    public partial class MainForm : Form                                                    //Класс формы
    {
        Random rnd;                                                                         //Рандом
        Button green, red, yellow, blue;                                                    //Кнопки

        List<Button> buttons;                                                               //Лист кнопок для большей рандомности события

        public MainForm()                                                                   //Конструктор
        {
            InitializeComponent();

            rnd = new Random();                                                             //Инициализация рандома

            green = greenButton;                                                            //Приписываем ссылки кнопок
            red = redButton;
            yellow = yellowButton;
            blue = blueButton;

            buttons = new List<Button>() { green , red , yellow , blue };                   //Заполняем лист ссылками
        }

        void buttonChanger()                                                                //Работа всех кнопок по сути одинаковая, выносим функционал в метод
        {
            foreach (Button button in buttons)                                              //Проходим по всем кнопкам и "цепляем" случайные из них
            {
                int flag = rnd.Next(0, 2);
                if (flag == 1)                                                              //Меняем их размер и положение (ограничиваем положение от размеров формы)
                {
                    button.Size = new Size(rnd.Next(25, 200), rnd.Next(25, 200));
                    button.Location = new Point(rnd.Next(button.Width, this.Width - button.Width), rnd.Next(button.Height, this.Height - button.Height - 40));
                }
            }
        }

        private void greenButton_Click(object sender, EventArgs e)
        {
            buttonChanger();                                                                //Запускаем метод
        }

        private void redButton_Click(object sender, EventArgs e)
        {
            buttonChanger();                                                                //Запускаем метод
        }

        private void yellowButton_Click(object sender, EventArgs e)
        {
            buttonChanger();                                                                //Запускаем метод
        }

        private void blueButton_Click(object sender, EventArgs e)
        {
            buttonChanger();                                                                //Запускаем метод
        }
    }
}
