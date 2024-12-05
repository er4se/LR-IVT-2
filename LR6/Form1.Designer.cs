namespace LR6
{
    partial class MainForm
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            greenButton = new Button();
            yellowButton = new Button();
            blueButton = new Button();
            redButton = new Button();
            SuspendLayout();
            // 
            // greenButton
            // 
            greenButton.BackColor = Color.FromArgb(128, 255, 128);
            greenButton.Location = new Point(363, 32);
            greenButton.Name = "greenButton";
            greenButton.Size = new Size(75, 75);
            greenButton.TabIndex = 0;
            greenButton.Text = "CLICK ME";
            greenButton.UseVisualStyleBackColor = false;
            greenButton.Click += greenButton_Click;
            // 
            // yellowButton
            // 
            yellowButton.BackColor = Color.FromArgb(255, 255, 128);
            yellowButton.Location = new Point(363, 346);
            yellowButton.Name = "yellowButton";
            yellowButton.Size = new Size(75, 75);
            yellowButton.TabIndex = 1;
            yellowButton.Text = "CLICK ME";
            yellowButton.UseVisualStyleBackColor = false;
            yellowButton.Click += yellowButton_Click;
            // 
            // blueButton
            // 
            blueButton.BackColor = Color.FromArgb(128, 128, 255);
            blueButton.Location = new Point(194, 188);
            blueButton.Name = "blueButton";
            blueButton.Size = new Size(75, 75);
            blueButton.TabIndex = 2;
            blueButton.Text = "CLICK ME";
            blueButton.UseVisualStyleBackColor = false;
            blueButton.Click += blueButton_Click;
            // 
            // redButton
            // 
            redButton.BackColor = Color.FromArgb(255, 128, 128);
            redButton.Location = new Point(542, 188);
            redButton.Name = "redButton";
            redButton.Size = new Size(75, 75);
            redButton.TabIndex = 3;
            redButton.Text = "CLICK ME";
            redButton.UseVisualStyleBackColor = false;
            redButton.Click += redButton_Click;
            // 
            // MainForm
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(redButton);
            Controls.Add(blueButton);
            Controls.Add(yellowButton);
            Controls.Add(greenButton);
            Name = "MainForm";
            Text = "LR6";
            ResumeLayout(false);
        }

        #endregion

        private Button greenButton;
        private Button yellowButton;
        private Button blueButton;
        private Button redButton;
    }
}
