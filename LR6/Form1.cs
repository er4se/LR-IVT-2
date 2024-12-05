namespace LR6                                                                               //������������ ������ �6. ������� 8
{
    public partial class MainForm : Form                                                    //����� �����
    {
        Random rnd;                                                                         //������
        Button green, red, yellow, blue;                                                    //������

        List<Button> buttons;                                                               //���� ������ ��� ������� ����������� �������

        public MainForm()                                                                   //�����������
        {
            InitializeComponent();

            rnd = new Random();                                                             //������������� �������

            green = greenButton;                                                            //����������� ������ ������
            red = redButton;
            yellow = yellowButton;
            blue = blueButton;

            buttons = new List<Button>() { green , red , yellow , blue };                   //��������� ���� ��������
        }

        void buttonChanger()                                                                //������ ���� ������ �� ���� ����������, ������� ���������� � �����
        {
            foreach (Button button in buttons)                                              //�������� �� ���� ������� � "�������" ��������� �� ���
            {
                int flag = rnd.Next(0, 2);
                if (flag == 1)                                                              //������ �� ������ � ��������� (������������ ��������� �� �������� �����)
                {
                    button.Size = new Size(rnd.Next(25, 200), rnd.Next(25, 200));
                    button.Location = new Point(rnd.Next(button.Width, this.Width - button.Width), rnd.Next(button.Height, this.Height - button.Height - 40));
                }
            }
        }

        private void greenButton_Click(object sender, EventArgs e)
        {
            buttonChanger();                                                                //��������� �����
        }

        private void redButton_Click(object sender, EventArgs e)
        {
            buttonChanger();                                                                //��������� �����
        }

        private void yellowButton_Click(object sender, EventArgs e)
        {
            buttonChanger();                                                                //��������� �����
        }

        private void blueButton_Click(object sender, EventArgs e)
        {
            buttonChanger();                                                                //��������� �����
        }
    }
}
