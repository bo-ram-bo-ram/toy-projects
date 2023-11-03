package game;

import java.awt.*;
import javax.swing.*;
import member.*;
class Ball1_2p extends JPanel { // (1)-A
	static int x, y;	
	int xInc = 1, yInc = 1;
	int diameter;//������

	private ImageIcon icon = new ImageIcon("image/ball1.png");
	private Image img = icon.getImage(); // �̹��� ��ü

	public Ball1_2p(int d) {
		this.diameter = d;

		x = (int) (Math.random() * (Main_1p.WIDTH - d) + 3); // ���� x��ǥ
		y = (int) (Math.random() * (Main_1p.HEIGHT - d) + 3); // ���� y��ǥ
		xInc = (int) (Math.random() * 3 + 3); // ���� x�� �̵� �ӵ�
		yInc = (int) (Math.random() * 3 + 3); // ���� y�� �̵� �ӵ�
	}

	public void paint(Graphics g) {
/////////////////////////////////////// 2p / ���������� ������ ��
		if ((x> Main_2p_key.WIDTH - Racket_key1.width)&&(x + diameter > Main_2p_key.WIDTH - Racket_key1.width)
				&&(y < Main_2p_key.myKey1)&&  (y + diameter < Main_2p_key.myKey1)) 
		{
			System.out.println("���� ���� ���ư����ϴ�.");
			System.out.println("1p�ս� / 2p����");
			g.drawImage(img, x, y, diameter, diameter, this); //���� ���ڸ��� ��� �׸�����
		}
		else if ((x> Main_2p_key.WIDTH - Racket_key1.width)&&(x + diameter > Main_2p_key.WIDTH - Racket_key1.width) 
				&&(y > Main_2p_key.myKey1)&& (y > Main_2p_key.myKey1 + Racket_key2.height)) 
		{
			System.out.println("���� �Ʒ��� ���ư����ϴ�.");
			System.out.println("1p�ս� / 2p����");
			g.drawImage(img, x, y, diameter, diameter, this);  //���� ���ڸ��� ��� �׸�����
		}
/////////////////////////////////////// 2p / �������� ������ ��
		 else if ((x < Racket_key2.width)&&(x - diameter < Racket_key2.width) 
				 &&(y < Main_2p_key.myKey2)&&(y - diameter < Main_2p_key.myKey2))
		 {
			System.out.println("���� ���� ���ư����ϴ�.");
			System.out.println("2p�ս� / 1p����");
			g.drawImage(img, x, y, diameter, diameter, this);

		} 
		else if ((x < Racket_key2.width)&&(x - diameter <Racket_key2.width) 
				&&(y > Main_2p_key.myKey2)&& (y - diameter  > Main_2p_key.myKey2+Racket_key1.height)) 
		{
			System.out.println("���� �Ʒ��� ���ư����ϴ�.");
			System.out.println("2p�ս� / 1p����");
			g.drawImage(img, x, y, diameter, diameter, this);
		} 
/////////////////////////////////ȭ��ȿ���
		else 
		{
			//����2�� ����� ��
			if (x < Racket_key1.width || x > (Main_2p_key.WIDTH - diameter - Racket_key1.width))
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
			///////////��ǥ���� 1p�� ������ ��
			if(x>=660 &&x<=730 && y >= 340 && y <= 510)
			{
				//1p����
				NorthPanel.score1p++;
			}	
			//////////��ǥ���� 2p�� ������ ��
			else if(x>=730 && x<=840 && y >= 340 && y <= 510)
			{
				//2p����
				NorthPanel.score2p++;
			}
			
			x += xInc;
			y += yInc;
			g.drawImage(img, x, y, diameter, diameter, this);
		}
		
	}
}