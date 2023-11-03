package game;

import javax.swing.*;

import member.*;

import java.awt.*;
import java.awt.event.*;


public class Select_Screen2 extends JFrame {

   ImageIcon my = new ImageIcon("image/mymouse.png");
   ImageIcon my_mouse = new ImageIcon("image/my.png");
   ImageIcon play = new ImageIcon("image/play.png");
   ImageIcon play_mouse = new ImageIcon("image/playmouse.png");

   JButton infobtn = new JButton(my);
   JButton gamebtn = new JButton(play);

   public Select_Screen2() {

      setTitle("Twin Ball");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

      Container c = getContentPane();
      c.setLayout(null);
      c.setBackground(Color.ORANGE);

      
      gamebtn.setRolloverIcon(play_mouse);
      gamebtn.setBorderPainted(false);
      gamebtn.setBounds(610, 0, 632, 715);

      c.add(gamebtn);
      
      gamebtn.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent arg0) {
    	  
    	  new Main_2p_key();
      }
      });
      
      ToolTipManager m = ToolTipManager.sharedInstance();
      m.setEnabled(true);
      gamebtn.setToolTipText("��ǻ�Ϳ� ���� 60�ʰ��� ����! 60�ʰ� ��ǥ���� ���߼���!");
      m.setInitialDelay(700);
      m.setDismissDelay(10000);
      
      infobtn.setRolloverIcon(my_mouse);
      infobtn.setBorderPainted(false);
      infobtn.setBounds(0, 0, 610, 715);
      c.add(infobtn);
      
      infobtn.addActionListener(new ActionListener() {

		public void actionPerformed(ActionEvent arg0) {
			new MyPage(Select_Screen2.this , "MyPage");
          }
          });

      setSize(1220, 740);
      
      Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
      // ��ü â 1/2 ���� ���� ��ġ
      int xPos = screenSize.width / 2 - getSize().width / 2;
      int yPos = screenSize.height / 2 - getSize().height / 2;
      setResizable(false); // ũ�� ���� �Ұ��ϵ��� ����
      setLocation(xPos, yPos);
      setVisible(true);

   }

   public static void main(String[] args) {
      new Select_Screen();

   }
}