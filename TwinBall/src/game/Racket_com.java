package game;

import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JComponent;


class Racket_com extends JComponent { // (3)   COM ��
	   int width, height;
	    
	   public Racket_com(int w, int h) {
	   width = w;
	   height = h;
	   }
	    
	   public void paint(Graphics g) { // (1)-B
	      g.setColor(Color.RED);
	       
	      if (Ball1.y < Main_1p.HEIGHT - height || Ball2.y < Main_1p.HEIGHT - height)    //��ǻ���� �ٰ� ���� ���󰡵���
	      {
	         g.fillRect(0, Ball1.y, width, height);   //Ball1�� Y��ǥ�� �޾� COM�� �� �̵�
	         g.fillRect(0, Ball2.y, width, height);   //Ball2Y��ǥ�� �޾� COM�� �� �̵�
	      } 
	      else 
	      {
	         g.fillRect(0, Main_1p.HEIGHT - height, width, height);
	      }
	      

	   }
	}