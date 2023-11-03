package member;

import javax.swing.*;

import game.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;

public class login_2p extends JFrame {
   private static JTextField id1_tf;
   private JPasswordField pw1_tf;
   private JTextField id2_tf;
   private JPasswordField pw2_tf;
   private JTextArea rank2pArea = new JTextArea();      
   private JTextArea rank1pArea = new JTextArea();
   
   ImageIcon back1 = new ImageIcon("image/2plog_back.png");
   ImageIcon logibtn = new ImageIcon("image/lobtn.png");
   ImageIcon logibtn_mouse = new ImageIcon("image/lobtnmouse.png");
   ImageIcon joibtn = new ImageIcon("image/jobtn.png");
   ImageIcon jogibtn_mouse = new ImageIcon("image/jobtnmouse.png");
   ImageIcon backbtn1 = new ImageIcon("image/backbtn.PNG");
   ImageIcon backbtn_mouse = new ImageIcon("image/backbtnmouse.PNG");
   
   loginDAO dao = new loginDAO();
   rankDAO Rdao = new rankDAO(); 
   ArrayList<Rank> datas = new ArrayList<Rank>(); 
   public static String id1;
   static String pw1;
   public static String id2;
   static String pw2;
   
	Font font = new Font("HY����B", Font.PLAIN, 15);
   public login_2p() {
      getContentPane().setLayout(null);
      
      JLabel backla1 = new JLabel(back1);
      backla1.setBounds(0, 0, 1000, 700);
      
      setTitle("2p �α���");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      
      Container c = getContentPane();
      
      setContentPane(backla1);
      

      
      id1_tf = new JTextField();
      id1_tf.setBounds(84, 236, 105, 31);
      backla1.add(id1_tf);
      id1_tf.setColumns(10);
      
      pw1_tf = new JPasswordField();
      pw1_tf.setBounds(84, 324, 105, 31);
      backla1.add(pw1_tf);
      pw1_tf.setColumns(10);
      
      id2_tf = new JTextField();
      id2_tf.setBounds(341, 236, 105, 31);
      backla1.add(id2_tf);
      id2_tf.setColumns(10);
      
      pw2_tf = new JPasswordField();
      pw2_tf.setBounds(341, 324, 105, 31);
      backla1.add(pw2_tf);
      pw2_tf.setColumns(10);   
      
      JButton joinbtn = new JButton(joibtn);
      joinbtn.setBounds(322, 521, 190, 93);
      joinbtn.setRolloverIcon(jogibtn_mouse);
      joinbtn.setBorderPainted(false);
         backla1.add(joinbtn);
         
       joinbtn.addActionListener(new ActionListener() {
       public void actionPerformed(ActionEvent arg0) {
       new joinmain();//ȸ������ Ŭ���� ȣ��
        }
       });
         
         JButton loginbtn = new JButton(logibtn);
         loginbtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent arg0) {
                String id1 = id1_tf.getText();
                String pw1 = "";                
                char[] getPw = pw1_tf.getPassword();
                for (int i = 0; i < getPw.length; i++) {
                pw1 += getPw[i]; }
                
                String id2 = id2_tf.getText();
                String pw2 = "";
                char[] getPw1 = pw2_tf.getPassword();
                for (int i = 0; i < getPw1.length; i++) {
                pw2 += getPw1[i]; }
                
                  //System.out.print("click");
                  //System.out.println(id1);
                  dao.IDPW1(id1);
                  dao.IDPW2(id2);
                  if(id1.equals(id2))
                  {
                  JOptionPane.showMessageDialog(null,"�ٸ� ID�� �Է��ϼ���","�α��� ����",JOptionPane.ERROR_MESSAGE);
                  }
                  else
                  {
                     if(pw1.equals(dao.IDPW1(id1).getPw())&&pw2.equals(dao.IDPW2(id2).getPw()))//�� �� �α��� ����
                     {
                        JOptionPane.showMessageDialog(null, "�α��μ���");
                        dispose();
                        new Select_Screen2();
                     }        
                     else if(pw1.equals(dao.IDPW1(id1).getPw()) && !pw2.equals(dao.IDPW2(id2).getPw()))//1p������
                     {
                        JOptionPane.showMessageDialog(null,"2p�� ������ Ȯ���ϼ���","�α��� ����",JOptionPane.ERROR_MESSAGE);
                     }
                     else if(!pw1.equals(dao.IDPW1(id1).getPw()) && pw2.equals(dao.IDPW2(id2).getPw()))//2p������
                     {
                        JOptionPane.showMessageDialog(null,"1p�� ������ Ȯ���ϼ���","�α��� ����",JOptionPane.ERROR_MESSAGE);
                     }
                     else 
                     {
                      JOptionPane.showMessageDialog(null,"ID / PW�� �ٽ� Ȯ���ϼ���","�α��� ����",JOptionPane.ERROR_MESSAGE);
                     }
                  }
               
            }
         });
         loginbtn.setBounds(65, 521, 190, 93);
         loginbtn.setRolloverIcon(logibtn_mouse);
         loginbtn.setBorderPainted(false);
         backla1.add(loginbtn);
         
        JButton backbtn = new JButton(backbtn1);
         backbtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent arg0) {
         }
         });
         backbtn.setBounds(0, 0, 50, 28);
         backbtn.setRolloverIcon(backbtn_mouse);
         backbtn.setBorderPainted(false);
         backla1.add(backbtn);
         
         backbtn.addActionListener(new ActionListener() {
             public void actionPerformed(ActionEvent arg0) {
                dispose();
                new first_screen();
             }
          });
         rank1pArea.setFont(font);
	      rank1pArea.setBounds(735, 85, 135, 146);
	      getContentPane().add(rank1pArea);
	      rank1p();//1p��� TOP3 ��ŷ ��� �޼ҵ� 
      
	      rank2pArea.setFont(font);
	      rank2pArea.setBounds(734, 462, 136, 151);
	      getContentPane().add(rank2pArea);
	      rank2p();
      
	      setSize(1000, 700);
      
	      Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
         // ��ü â 1/2 ���� ���� ��ġ
         int xPos = screenSize.width / 2 - getSize().width / 2;
         int yPos = screenSize.height / 2 - getSize().height / 2;
         setResizable(false); // ũ�� ���� �Ұ��ϵ��� ����
         setLocation(xPos, yPos);

         setVisible(true);
      
      
      
   }
   void rank1p(){
	   rank1pArea.setText("");
	   rank1pArea.append("  NIK  ID   1p����  ");
	   datas = Rdao.get1p();
	   
	   if(datas != null) { 
	         // ArrayList �� ��ü �����͸� ���Ŀ� ���� ��� 
	         for(Rank r : datas) { 
	            StringBuffer sb = new StringBuffer();
	            System.out.println("mem_nik:" +r.getnik());
	            System.out.println(r.getId());
	            System.out.println(r.getjumsu1());
	            
	            sb.append("\n   "+r.getnik()+"   ");
	            sb.append("   "+r.getId()+"   ");
	            sb.append("   "+r.getjumsu1()+"   \n");  
	            rank1pArea.append(sb.toString()); 
	         }
	   } 
	   else { 
	       	 	rank1pArea.append("\n\n��ϵ� ������ �����ϴ�. !!\n������ ����� �ּ��� !!"); 
	        } 
	         // ������, ������ �ʱ�ȭ
	   
   }
   void rank2p(){
	   rank2pArea.setText("");
	   rank2pArea.append("  NIK  ID   2p���� ");
	   datas = Rdao.get2p();
	   
	   if(datas != null) { 
	         // ArrayList �� ��ü �����͸� ���Ŀ� ���� ��� 
	         for(Rank r : datas) { 
	            StringBuffer sb = new StringBuffer();
	            System.out.println("mem_nik:" +r.getnik());
	            System.out.println(r.getId());
	            System.out.println(r.getjumsu1());
	            
	            sb.append("\n"+r.getnik()+"   ");
	            sb.append("   "+r.getId()+"   ");
	            sb.append("   "+r.getjumsu2()+"   \n");  
	            rank2pArea.append(sb.toString()); 
	         }
	   } 
	   else { 
	       	 	rank2pArea.append("\n\n��ϵ� ������ �����ϴ�. !!\n������ ����� �ּ��� !!"); 
	        } 
	         // ������, ������ �ʱ�ȭ
	   
   }
   public static void main(String[] args) {
      new login_2p();

   }
}