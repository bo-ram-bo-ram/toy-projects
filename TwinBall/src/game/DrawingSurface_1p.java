package game;

import java.awt.Graphics;
import java.awt.Image;

import javax.swing.ImageIcon;
import javax.swing.JPanel;


class DrawingSurface_1p extends JPanel{
	   public Ball1 basket1[] = new Ball1[1];
	   public Ball2 basket2[] = new Ball2[1];
	   public Racket_com racket1[] = new Racket_com[1];
	   public Racket_mouse racket2[] = new Racket_mouse[1];
	   public Goal goal[] = new Goal[1];
	   private ImageIcon icon = new ImageIcon("image/ground.jpg");
	   private Image img = icon.getImage(); // 이미지 객체
	   
	   public DrawingSurface_1p() {
	      basket1[0] = new Ball1(55);   //숫자로 공의 크기 조절
	      basket2[0] = new Ball2(55);   //숫자로 공의 크기 조절
	      racket1[0] = new Racket_com(30,100);   //숫자로 com바의 크기 조절
	      racket2[0] = new Racket_mouse(30,100);   //숫자로 1p바의 크기 조절
	      goal[0] = new Goal(170,170);
	   }
	    
	    public void paint(Graphics g) {
	      
	      super.paintComponent(g);
	      g.drawImage(img, 0, 0, getWidth(), getHeight(), this);
	      
	      for (Ball1 b1 : basket1)
	      {
	         b1.paint(g);
	      }
	      for (Ball2 b2 : basket2)
	      {
	         b2.paint(g);
	      }
	      for (Racket_com r1 : racket1)
	      {
	         r1.paint(g);
	      }
	      for (Racket_mouse r2 : racket2)
	      {
	         r2.paint(g);
	      }
	      for (Goal goal : goal)
	      {
	         goal.paint(g);
	      }
	      
	   }
	}