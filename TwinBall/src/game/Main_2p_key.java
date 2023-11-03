package game;

import java.awt.*;
import javax.swing.*;

import game.DrawingSurface_2p;

import java.awt.event.*;

public class Main_2p_key extends JFrame implements Runnable { // (2)
	public static final int WIDTH = 1400;//â�� ����ũ�� ����
	public static final int HEIGHT = 850;//â�� ����ũ�� ����
	static int myKey1 = 0;  //1p�� ��ġ�� ������ ���� ����
	static int myKey2 = 0;  //2p�� ��ġ�� ������ ���� ����
	private DrawingSurface_2p screen2;
	static  boolean onsw2 = false;	//ȭ�� ������ ������ ���� ����
	static Thread th = new Thread(new Main_2p_key());	//ȭ�� ������ ����
	
	public Main_2p_key() {
		setTitle(" Twin Ball 2p��� - ģ���� �Բ�");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // ������ ���� ���

		Container c = getContentPane(); // �������� �����̳� ��������
		c.setLayout(new BorderLayout(0,0)); // �����̳ʿ� FlowLayout ��ġ������ ����

		c.setBackground(Color.ORANGE);

		screen2 = new DrawingSurface_2p();

		c.add(new NorthPanel2(), BorderLayout.NORTH); //���� ������ �� Ÿ�̸� ������
		c.add(screen2, BorderLayout.CENTER); // ����ȭ�� ������
		
		addKeyListener(new KeyListener() {

			public void keyPressed(KeyEvent e) {
				int keycode = e.getKeyCode();

				if (keycode == KeyEvent.VK_W) {
					myKey2 -= 50;//wŰ �Է��� ��� 1p ����
				} else if (keycode == KeyEvent.VK_S) {
					myKey2 += 50;//sŰ �Է��� ��� 1p �Ʒ���
				}
				if (keycode == KeyEvent.VK_UP) {
					myKey1 -= 50;//��Ű �Է��� ��� 2p ����
				} else if (keycode == KeyEvent.VK_DOWN) {
					myKey1 += 50;//�Ʒ�Ű �Է��� ��� 2p �Ʒ���
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
			repaint(); // ���ο� �������� �׸���.
		}
		
	}

	public static void main(String[] args) {
		th.start();

	}

}