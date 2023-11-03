package member;

import java.awt.*;
import java.awt.event.*;
import java.sql.SQLException;

import javax.swing.*;

class nikPanel extends JPanel {

	private JPasswordField nowpw = new JPasswordField();
	private JTextField newnik1 = new JTextField();
	private JTextField newnik2 = new JTextField();

	private JLabel nowla = new JLabel();
	private JLabel newla1 = new JLabel();
	private JLabel newla2 = new JLabel();

	private JButton okbtn = new JButton();
	private JButton eqbtn = new JButton();
	private JButton changebtn = new JButton();

	Font font = new Font("HY나무B", Font.PLAIN, 20);

	loginDAO dao = new loginDAO();

	boolean sw1 = false;
	boolean sw2 = false;

	changeDAO CHdao = new changeDAO();
	joinDAO JOdao = new joinDAO();
	String realnik;
	String regno;

	public nikPanel() {

		setLayout(null);

		setBackground(Color.ORANGE);
		nowla = new JLabel("현재 비밀번호 : ");
		nowla.setFont(font);
		nowla.setBounds(20, 150, 150, 20);//20,50
		add(nowla);

		nowpw.setBounds(175, 147, 100, 30);//175,47
		add(nowpw);
		nowpw.setColumns(13);

		okbtn = new JButton("확인");
		okbtn.setFont(font);
		okbtn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				login_1p player1 = new login_1p();
				player1.dispose();
				
				String pw1 = "";
				char[] getPw = nowpw.getPassword();
				for (int i = 0; i < getPw.length; i++) {
					pw1 += getPw[i];
				}

				if (pw1.equals(dao.IDPW1(player1.id1).getPw())) 
				{
					JOptionPane.showMessageDialog(null, "올바른 비밀번호입니다");
					
					regno = dao.IDPW1(player1.id1).getRegno();
					
					sw1=true;
					
					if(sw1==true && sw2==true) {
						//비밀번호를 확인하고 중복을 확인해야 닉네임 변경 가능
						changebtn.setEnabled(true);
					}
				}
				else 
				{
					JOptionPane.showMessageDialog(null, "PW를 다시 확인하세요", "실패", JOptionPane.ERROR_MESSAGE);
				}
			}
		});

		okbtn.setBounds(290, 147, 100, 30);  //290,147
		add(okbtn);

		newla1 = new JLabel("바꿀 닉네임 : ");
		newla1.setFont(font);
		newla1.setBounds(20, 253, 150, 20);//20,153
		add(newla1);
		
		
		newnik1.setColumns(13);
		newnik1.setBounds(175, 250, 100, 30);//175,150
		add(newnik1);
		
		eqbtn = new JButton("중복 확인");
		eqbtn.setFont(new Font("HY나무B", Font.PLAIN, 15));
		eqbtn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				realnik = newnik1.getText();
				JOdao.NIKcheck(realnik);
				try {
					if (JOdao.rs.next()) {

						System.out.println("중복");
						JOptionPane.showMessageDialog(null, "중복된 닉네임입니다", "닉네임 중복", JOptionPane.ERROR_MESSAGE);
					} else {
						System.out.println("중복아님");
						JOptionPane.showMessageDialog(null, "사용 가능한 닉네임 입니다");
						
						sw2=true;
						if(sw1==true && sw2==true) {
							//비밀번호를 확인하고 중복을 확인해야 닉네임 변경 가능
							changebtn.setEnabled(true);
						}
					}
				} catch (SQLException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
			}
		});
		eqbtn.setBounds(290, 250, 100, 30);
		add(eqbtn);
		

		changebtn = new JButton("변경");
		changebtn.setFont(font);
		changebtn.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				// 비밀번호 정보변경
				if (CHdao.NIKchange(realnik, regno)) {
					JOptionPane.showMessageDialog(null, "닉네임 변경 성공");
				} else {
					JOptionPane.showMessageDialog(null, "닉네임 변경이 실패하였습니다", "닉네임 변경 실패", JOptionPane.ERROR_MESSAGE);
				}

			}
		});
		changebtn.setBounds(175, 350, 100, 30);

		changebtn.setEnabled(false);
		add(changebtn);
		
	}

}