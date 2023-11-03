package game;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Image;

import javax.swing.ImageIcon;
import javax.swing.JPanel;

class Ball1 extends JPanel { // (1)-A
	static int x, y;
	int xInc = 1, yInc = 1;
	int diameter;

	private ImageIcon icon = new ImageIcon("image/ball1.png");
	private Image img = icon.getImage(); // 이미지 객체


	public Ball1(int d) {
		this.diameter = d;

		x = (int) (Math.random() * (Main_1p.WIDTH - d) + 3);	//공의 x좌표
		y = (int) (Math.random() * (Main_1p.HEIGHT - d) + 3);	//공의 y좌표
		xInc = (int) (Math.random() * 3 +3 ); // 공의 x축 이동 속도
		yInc = (int) (Math.random() * 3 +3 ); // 공의 y축 이동 속도
	}

	public void paint(Graphics g) {
/////////////////////////////////////// 공이 위로 날아갔을 때
		if ((x + diameter > Main_1p.WIDTH - Racket_mouse.width) && (y < Main_1p.myMouse) && (y + diameter < Main_1p.myMouse)) 
		{
			System.out.println("공이 위로 날아갔습니다.");
			System.out.println("PC에게 패했습니다.");
			g.drawImage(img, x, y, diameter, diameter, this);

		}
/////////////////////////////////////// 공이 아래로 날아갔을 때
		else if ((x + diameter > Main_1p.WIDTH - Racket_mouse.width) && (y > Main_1p.myMouse + Racket_mouse.height))
		{
			System.out.println("공이 아래로 날아갔습니다.");
			System.out.println("PC에게 패했습니다.");
			g.drawImage(img, x, y, diameter, diameter, this);

		}
/////////////////////////////////////// 공이 화면안에 있을 때
		else 
		{
			if (x < Racket_mouse.width || x > (Main_1p.WIDTH - diameter - Racket_mouse.width))
			{
				xInc = -xInc;
			}
			else if (y < 0 || y > (Main_1p.HEIGHT - diameter)) 
			{
				yInc = -yInc;
			}
 
			if (x >= 660 && x <= 840 && y >= 340 && y <= 510) // 목표물에 맞았을 때
			{
				yInc = -yInc;
				xInc = -xInc;
				System.out.println("x =" + x);
				System.out.println("y =" + y);
			}
			if(x>=660 &&x<=730 && y >= 340 && y <= 510)
			{
				//1p, com득점
				NorthPanel.score1p++;
			}	
			else if(x>=730 && x<=840 && y >= 340 && y <= 510)
			{
				//2p득점
				NorthPanel.score2p++;
			}
			x += xInc;
			y += yInc;
	        g.drawImage(img, x, y, diameter, diameter, this);
		}
	}
}