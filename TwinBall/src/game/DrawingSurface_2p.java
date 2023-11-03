package game;

import java.awt.Graphics;
import java.awt.Image;

import javax.swing.ImageIcon;
import javax.swing.JPanel;


class DrawingSurface_2p extends JPanel {
	   public Ball1_2p basket1[] = new Ball1_2p[1];
	   public Ball2_2p basket2[] = new Ball2_2p[1];
	   public Racket_key1 racket1[] = new Racket_key1[1];
	   public Racket_key2 racket2[] = new Racket_key2[1];
	   public Goal goal[] = new Goal[1];
	   private ImageIcon icon = new ImageIcon("image/ground.jpg");
	   private Image img = icon.getImage(); // 이미지 객체
	   
	   public DrawingSurface_2p() {
	      basket1[0] = new Ball1_2p(55);   //숫자로 공의 크기 조절
	      basket2[0] = new Ball2_2p(55);   //숫자로 공의 크기 조절
	      racket1[0] = new Racket_key1(30,100);  
	      racket2[0] = new Racket_key2(30,100);   //숫자로 1p바의 크기 조절
	      goal[0] = new Goal(170,170);
	   }
	    
	   public void paint(Graphics g) {
	      
	      super.paintComponent(g);
	      g.drawImage(img, 0, 0, getWidth(), getHeight(), this);
	      
	      
	      for (Ball1_2p b1 : basket1)
	      {
	         b1.paint(g);
	      }
	      for (Ball2_2p b2 : basket2)
	      {
	         b2.paint(g);
	      }
	      for (Racket_key1 r1 : racket1)
	      {
	         r1.paint(g);
	      }
	      for (Racket_key2 r2 : racket2)
	      {
	         r2.paint(g);
	      }
	      for (Goal goal : goal)
	      {
	         goal.paint(g);
	      }
	   }
	}