package game;

import java.awt.*;
import java.awt.event.*;

import javax.swing.JComponent;


class Racket_key2 extends JComponent  { // (3)   //사용자 바 그리는 클래스
	   static int width, height;
	    
	   public Racket_key2(int w, int h) {
	      width = w;
	      height = h;
	   }
	    
	   public void paint(Graphics g) { // (1)-C, (2)
	   g.setColor(Color.RED);
	    
	   if(Main_2p_key.myKey2 < Main_2p_key.HEIGHT - height) 
	   {
		   g.fillRect(0, Main_2p_key.myKey2, width, height);
	   }
	   else
	      {
	         g.fillRect(0 , Main_2p_key.HEIGHT - height, width, height);
	      }
	   }
	}
