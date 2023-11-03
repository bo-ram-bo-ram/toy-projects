package game;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Image;

import javax.swing.ImageIcon;
import javax.swing.JPanel;

class Ball2 extends JPanel { // (1)-A
	static int x = 100, y;
	int xInc = 1, yInc = 1;
	int diameter;
	private ImageIcon icon = new ImageIcon("image/ball2.png");
	private Image img = icon.getImage(); // �̹��� ��ü


	public Ball2(int d) {
		this.diameter = d;
		
		x = (int) (Math.random() * (Main_1p.WIDTH - d) + 3);	//���� x��ǥ
		y = (int) (Math.random() * (Main_1p.HEIGHT - d) + 3);	//���� y��ǥ
		xInc = (int) (Math.random() * 3 +3 ); // ���� x�� �̵� �ӵ�
		yInc = (int) (Math.random() * 3 +3 ); // ���� y�� �̵� �ӵ�
	}

	public void paint(Graphics g) {
		
		/////////////////////////////////////// 1p
		if ((x + diameter > Main_1p.WIDTH - Racket_mouse.width) && (y < Main_1p.myMouse) && (y + diameter < Main_1p.myMouse)) 
		{
			System.out.println("���� ���� ���ư����ϴ�.");
			System.out.println("PC���� ���߽��ϴ�.");
			g.drawImage(img, x, y, diameter, diameter, this);
		}
		else if ((x + diameter > Main_1p.WIDTH - Racket_mouse.width) && (y > Main_1p.myMouse + 100))
		{
			System.out.println("���� �Ʒ��� ���ư����ϴ�.");
			System.out.println("PC���� ���߽��ϴ�.");
			g.drawImage(img, x, y, diameter, diameter, this);
		}
		else 
		{
			if (x < Racket_key1.width || x > (Main_2p_key.WIDTH - diameter - Racket_key1.width)) 
			{
				xInc = -xInc;
			} 
			else if (y < 0 || y > (Main_2p_key.HEIGHT - diameter)) 
			{
				yInc = -yInc;
			}
			else if (x < Racket_key2.width || x > (Main_2p_key.WIDTH - diameter - Racket_key2.width))
			{
				xInc = -xInc;
			}
			else if (y < 0 || y > (Main_2p_key.HEIGHT - diameter)) 
			{
				yInc = -yInc;
			}

			if (x >= 660 && x <= 830 && y >= 340 && y <= 510) // ��ǥ���� �¾��� ��
			{
				yInc = -yInc;
				xInc = -xInc;
				System.out.println("x =" + x);
				System.out.println("y =" + y);
			}
			//if(x == 660 && y >= 340 && y <= 500)
			if(x>=660 &&x<=730 && y >= 340 && y <= 510)
			{
				//1p, com����
				NorthPanel.score1p++;
			}	
			//else if(x == 840 && y >= 340 && y <= 500)
			else if(x>=730 && x<=840 && y >= 340 && y <= 510)
			{
				//2p����
				NorthPanel.score2p++;
			}

			x += xInc;
			y += yInc;
			super.paintComponent(g);
			g.drawImage(img, x, y, diameter, diameter, this);
		}

	}
}