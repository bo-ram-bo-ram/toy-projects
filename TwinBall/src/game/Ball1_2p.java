package game;

import java.awt.*;
import javax.swing.*;
import member.*;
class Ball1_2p extends JPanel { // (1)-A
	static int x, y;	
	int xInc = 1, yInc = 1;
	int diameter;//반지름

	private ImageIcon icon = new ImageIcon("image/ball1.png");
	private Image img = icon.getImage(); // 이미지 객체

	public Ball1_2p(int d) {
		this.diameter = d;

		x = (int) (Math.random() * (Main_1p.WIDTH - d) + 3); // 공의 x좌표
		y = (int) (Math.random() * (Main_1p.HEIGHT - d) + 3); // 공의 y좌표
		xInc = (int) (Math.random() * 3 + 3); // 공의 x축 이동 속도
		yInc = (int) (Math.random() * 3 + 3); // 공의 y축 이동 속도
	}

	public void paint(Graphics g) {
/////////////////////////////////////// 2p / 오른쪽으로 빠졌을 때
		if ((x> Main_2p_key.WIDTH - Racket_key1.width)&&(x + diameter > Main_2p_key.WIDTH - Racket_key1.width)
				&&(y < Main_2p_key.myKey1)&&  (y + diameter < Main_2p_key.myKey1)) 
		{
			System.out.println("공이 위로 날아갔습니다.");
			System.out.println("1p손실 / 2p득점");
			g.drawImage(img, x, y, diameter, diameter, this); //공을 제자리에 계속 그리도록
		}
		else if ((x> Main_2p_key.WIDTH - Racket_key1.width)&&(x + diameter > Main_2p_key.WIDTH - Racket_key1.width) 
				&&(y > Main_2p_key.myKey1)&& (y > Main_2p_key.myKey1 + Racket_key2.height)) 
		{
			System.out.println("공이 아래로 날아갔습니다.");
			System.out.println("1p손실 / 2p득점");
			g.drawImage(img, x, y, diameter, diameter, this);  //공을 제자리에 계속 그리도록
		}
/////////////////////////////////////// 2p / 왼쪽으로 빠졌을 때
		 else if ((x < Racket_key2.width)&&(x - diameter < Racket_key2.width) 
				 &&(y < Main_2p_key.myKey2)&&(y - diameter < Main_2p_key.myKey2))
		 {
			System.out.println("공이 위로 날아갔습니다.");
			System.out.println("2p손실 / 1p득점");
			g.drawImage(img, x, y, diameter, diameter, this);

		} 
		else if ((x < Racket_key2.width)&&(x - diameter <Racket_key2.width) 
				&&(y > Main_2p_key.myKey2)&& (y - diameter  > Main_2p_key.myKey2+Racket_key1.height)) 
		{
			System.out.println("공이 아래로 날아갔습니다.");
			System.out.println("2p손실 / 1p득점");
			g.drawImage(img, x, y, diameter, diameter, this);
		} 
/////////////////////////////////화면안에서
		else 
		{
			//라켓2에 닿았을 때
			if (x < Racket_key1.width || x > (Main_2p_key.WIDTH - diameter - Racket_key1.width))
			{ 
				xInc = -xInc;
			}
			else if (y < 0 || y > (Main_2p_key.HEIGHT - diameter))
			{
				yInc = -yInc;
			}

			if (x >= 660 && x <= 830 && y >= 340 && y <= 510) // 목표물에 맞았을 때
			{
				yInc = -yInc;
				xInc = -xInc;
				System.out.println("x =" + x);
				System.out.println("y =" + y);
			}
			///////////목표물을 1p가 맞췄을 때
			if(x>=660 &&x<=730 && y >= 340 && y <= 510)
			{
				//1p득점
				NorthPanel.score1p++;
			}	
			//////////목표물을 2p가 맞췄을 때
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