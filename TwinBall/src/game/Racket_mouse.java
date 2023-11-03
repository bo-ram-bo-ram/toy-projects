package game;

import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JComponent;


class Racket_mouse extends JComponent { // (3)   //사용자 바 그리는 클래스
	   static int width, height;
	    
	   public Racket_mouse(int w, int h) {
	      width = w;
	      height = h;
	   }
	    
	   public void paint(Graphics g) { // (1)-C, (2)
	   g.setColor(Color.BLUE);
	    
	      if(Main_1p.myMouse < Main_1p.HEIGHT - height)
	      {
	         g.fillRect(Main_1p.WIDTH - width, Main_1p.myMouse, width, height);   //사용자 마우스 위치로 이동
	      }
	      else
	      {
	         g.fillRect(Main_1p.WIDTH - width, Main_1p.HEIGHT - height, width, height);
	      }
	   }
	}