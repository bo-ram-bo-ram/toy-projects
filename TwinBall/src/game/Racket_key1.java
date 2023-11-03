package game;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

import javax.swing.JComponent;


class Racket_key1 extends JComponent  { // (3)   //사용자 바 그리는 클래스
	   static int width, height;
	    
	   public Racket_key1(int w, int h) {
	      width = w;
	      height = h;
	   }
	    
	   public void paint(Graphics g) { // (1)-C, (2)
	   g.setColor(Color.BLUE);
	    
	   if(Main_2p_key.myKey1 < Main_2p_key.HEIGHT - height) 
	   {
		   g.fillRect(Main_2p_key.WIDTH - width, Main_2p_key.myKey1, width, height);
	   }
	   else
	      {
	         g.fillRect(Main_2p_key.WIDTH - width, Main_2p_key.HEIGHT - height, width, height);
	      }

	   }
	}
