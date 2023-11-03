package game;

import java.awt.*;
import javax.swing.*;

import game.DrawingSurface_1p;

import java.awt.event.*;
 
public class Main_1p extends JFrame implements Runnable, MouseMotionListener { 
   public static final int WIDTH = 1400;	//â�� ����ũ��
   public static final int HEIGHT = 850;	//â�� ����ũ��
   static int myMouse = 0;  //���� ��ġ�� ������ ���� ����
   private DrawingSurface_1p screen;
   static  boolean onsw = false; //������ ���� ���� ����  
   static Thread th = new Thread(new Main_1p()); //����ȭ�� ������ ����
   
   public Main_1p() {
      setTitle(" Twin Ball 1p��� - ��ǻ�Ϳ� �Բ�");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);   //������ ���� ���
      
      Container c = getContentPane();   //�������� �����̳� ��������
      c.setLayout(new BorderLayout());   //�����̳ʿ� FlowLayout ��ġ������ ����
      
      c.setBackground(Color.ORANGE);   
      
      screen = new DrawingSurface_1p();
      
      c.add(new NorthPanel(), BorderLayout.NORTH);   //���� ������ �� Ÿ�̸� ������
      c.add(screen, BorderLayout.CENTER);   //����
      addMouseMotionListener(this);   
         
      setSize(WIDTH +20 , HEIGHT + 150 );
      setVisible(true);
  
   }

    
   public void run() {
      while ( onsw != true) {
         try {
        	 th.sleep(20);
         } catch (InterruptedException e) {
         }
         repaint(); // ���ο� �������� �׸���.
      }

   }
    
   public static void main(String[] args) {
      th.start();
      
   }
    
   @Override
   public void mouseDragged(MouseEvent e) {
   
   }
    
   @Override
   public void mouseMoved(MouseEvent e1) {
      myMouse = e1.getY() - 100;
   }
  
}