package member;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class first_screen extends JFrame {
	ImageIcon background = new ImageIcon("image/firstbackground1.png"); // 버튼이미지로 사용할 3개의 이미지를 로딩한다
	ImageIcon img1p = new ImageIcon("image/1p.png");
	ImageIcon img1p_mouse = new ImageIcon("image/1p_mouse.png");
	ImageIcon img2p = new ImageIcon("image/2p.png");
	ImageIcon img2p_mouse = new ImageIcon("image/2p_mouse.png");

	public first_screen() {

		setTitle("Twin Ball");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		Container c = getContentPane();

		JLabel backla = new JLabel(background);
		setBounds(0, 0, 790, 590);
		setContentPane(backla);

		setSize(790, 590);

		JButton btn1p = new JButton(img1p);
		btn1p.setBounds(175, 168, 170, 170);
		btn1p.setRolloverIcon(img1p_mouse);
		btn1p.setBorderPainted(false);
		
		btn1p.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				dispose();
				new login_1p();
			}
		});

		JButton btn2p = new JButton(img2p);
		btn2p.setBounds(446, 168, 170, 170);
		btn2p.setRolloverIcon(img2p_mouse);
		btn2p.setBorderPainted(false);

		btn2p.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
			dispose();
			new login_2p();	
			}
		});
		
		backla.add(btn1p);
		backla.add(btn2p);

		Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
		// 전체 창 1/2 나눈 곳에 위치
		int xPos = screenSize.width / 2 - getSize().width / 2;
		int yPos = screenSize.height / 2 - getSize().height / 2;
		setResizable(false); // 크기 조정 불가하도록 설정
		setLocation(xPos, yPos);
		setVisible(true);

	}

	public static void main(String[] args) {
		new first_screen();

	}
}