package game;

import java.awt.*;
import javax.swing.*;

import game.DrawingSurface_1p;

import java.awt.event.*;
 
public class Main_1p extends JFrame implements Runnable, MouseMotionListener { 
   public static final int WIDTH = 1400;	//창의 가로크기
   public static final int HEIGHT = 850;	//창의 세로크기
   static int myMouse = 0;  //바의 위치를 저장할 변수 선언
   private DrawingSurface_1p screen;
   static  boolean onsw = false; //스레드 멈춤 제어 변수  
   static Thread th = new Thread(new Main_1p()); //게임화면 스레드 정의
   
   public Main_1p() {
      setTitle(" Twin Ball 1p모드 - 컴퓨터와 함께");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);   //프레임 종료 기능
      
      Container c = getContentPane();   //프레임의 컨테이너 가져오기
      c.setLayout(new BorderLayout());   //컨테이너에 FlowLayout 배치관리자 설정
      
      c.setBackground(Color.ORANGE);   
      
      screen = new DrawingSurface_1p();
      
      c.add(new NorthPanel(), BorderLayout.NORTH);   //점스 스레드 및 타이머 스레드
      c.add(screen, BorderLayout.CENTER);   //게임
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
         repaint(); // 새로운 프레임을 그린다.
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