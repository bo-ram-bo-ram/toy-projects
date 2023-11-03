package game;

import java.awt.*;
import javax.swing.*;

import game.DrawingSurface_2p;

import java.awt.event.*;

public class Main_2p_key extends JFrame implements Runnable { // (2)
	public static final int WIDTH = 1400;//창의 가로크기 지정
	public static final int HEIGHT = 850;//창의 세로크기 지정
	static int myKey1 = 0;  //1p의 위치값 저장할 변수 선언
	static int myKey2 = 0;  //2p의 위치값 저장할 변수 선언
	private DrawingSurface_2p screen2;
	static  boolean onsw2 = false;	//화면 스레드 제어할 변수 선언
	static Thread th = new Thread(new Main_2p_key());	//화면 스레드 정의
	
	public Main_2p_key() {
		setTitle(" Twin Ball 2p모드 - 친구와 함께");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // 프레임 종료 기능

		Container c = getContentPane(); // 프레임의 컨테이너 가져오기
		c.setLayout(new BorderLayout(0,0)); // 컨테이너에 FlowLayout 배치관리자 설정

		c.setBackground(Color.ORANGE);

		screen2 = new DrawingSurface_2p();

		c.add(new NorthPanel2(), BorderLayout.NORTH); //점수 스레드 및 타이머 스레드
		c.add(screen2, BorderLayout.CENTER); // 게임화면 스레드
		
		addKeyListener(new KeyListener() {

			public void keyPressed(KeyEvent e) {
				int keycode = e.getKeyCode();

				if (keycode == KeyEvent.VK_W) {
					myKey2 -= 50;//w키 입력할 경우 1p 위로
				} else if (keycode == KeyEvent.VK_S) {
					myKey2 += 50;//s키 입력할 경우 1p 아래로
				}
				if (keycode == KeyEvent.VK_UP) {
					myKey1 -= 50;//위키 입력할 경우 2p 위로
				} else if (keycode == KeyEvent.VK_DOWN) {
					myKey1 += 50;//아래키 입력할 경우 2p 아래로
				}
				repaint();
			}

			@Override
			public void keyReleased(KeyEvent e) {
			}

			@Override
			public void keyTyped(KeyEvent e) {
				// TODO Auto-generated method stub
				
			}
		});

	    setSize(WIDTH +20 , HEIGHT + 150 );
		setVisible(true);

		requestFocus();
		setFocusable(true);
	}

	public void run() {
		while (onsw2 != true) {
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

}