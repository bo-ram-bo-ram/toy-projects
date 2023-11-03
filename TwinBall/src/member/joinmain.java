package member;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

public class joinmain extends JFrame implements ActionListener {
	JTextField textId, nikText, birthdayText1, birthdayText2, birthdayText3, phoneText1, phoneText2, phoneText3,
			regnoText1;
	JPasswordField textPw, textRpw, regnoText2;

	joinDAO dao = new joinDAO();
	Member member;

	JLabel ml = new JLabel("HELLO"); // 메시지 출력을 위한 라벨
	String la = "test";

	JButton btnOk = new JButton("가입하기");
	JButton btnCancel = new JButton("가입취소");
	JButton idOk = new JButton("중복 확인");
	JButton nikOk = new JButton("중복 확인");
	JButton pwOk = new JButton("PW 확인");

	Boolean sw1 = false;
	Boolean sw2 = false;
	Boolean sw3 = false;

	public joinmain() {
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setTitle("회원가입");

		Container c = getContentPane();

		ml.setBounds(50, 20, 300, 20);
		add(ml);

		JLabel logo = new JLabel("회 원 가 입");
		logo.setBounds(210, 40, 200, 20);
		c.add(logo);

		JLabel idla = new JLabel("* 아  이  디");
		idla.setBounds(50, 90, 180, 20);
		c.add(idla);

		textId = new JTextField();
		textId.setBounds(180, 90, 150, 20);
		c.add(textId);

		JLabel pwla = new JLabel("* 비밀번호");
		pwla.setBounds(50, 140, 180, 20);
		c.add(pwla);

		textPw = new JPasswordField();
		textPw.setBounds(180, 140, 150, 20);
		c.add(textPw);

		JLabel rpwla = new JLabel("비밀번호확인");
		rpwla.setBounds(50, 190, 150, 20);
		c.add(rpwla);

		textRpw = new JPasswordField();
		textRpw.setBounds(180, 190, 150, 20);
		c.add(textRpw);

		JLabel nikla = new JLabel("* 닉 네 임");
		nikla.setBounds(50, 240, 150, 20);
		c.add(nikla);

		nikText = new JTextField();
		nikText.setBounds(180, 240, 150, 20);
		c.add(nikText);

		JLabel birthdayla = new JLabel("생 년 월 일");
		birthdayla.setBounds(50, 290, 150, 20);
		c.add(birthdayla);

		JLabel b1 = new JLabel("년");
		JLabel b2 = new JLabel("월");
		JLabel b3 = new JLabel("일");
		b1.setBounds(222, 290, 40, 20);
		c.add(b1);
		b2.setBounds(277, 290, 40, 20);
		c.add(b2);
		b3.setBounds(330, 290, 40, 20);
		c.add(b3);
		birthdayText1 = new JTextField();
		birthdayText2 = new JTextField();
		birthdayText3 = new JTextField();
		birthdayText1.setBounds(180, 290, 40, 20);
		birthdayText2.setBounds(235, 290, 40, 20);
		birthdayText3.setBounds(290, 290, 40, 20);

		c.add(birthdayText1);
		c.add(birthdayText2);
		c.add(birthdayText3);

		JLabel phone = new JLabel("핸 드 폰");
		phone.setBounds(50, 340, 150, 20);
		c.add(phone);

		JLabel c1 = new JLabel("-");
		JLabel c2 = new JLabel("-");
		c1.setBounds(225, 340, 40, 20);
		c.add(c1);
		c2.setBounds(280, 340, 40, 20);
		c.add(c2);

		phoneText1 = new JTextField();
		phoneText2 = new JTextField();
		phoneText3 = new JTextField();
		phoneText1.setBounds(180, 340, 40, 20);
		phoneText2.setBounds(235, 340, 40, 20);
		phoneText3.setBounds(290, 340, 40, 20);

		c.add(phoneText1);
		c.add(phoneText2);
		c.add(phoneText3);

		JLabel regno = new JLabel("주민등록번호");
		regno.setBounds(50, 390, 150, 20);
		c.add(regno);

		JLabel r1 = new JLabel("-");
		r1.setBounds(255, 390, 40, 20);
		c.add(r1);

		regnoText1 = new JTextField();
		regnoText2 = new JPasswordField();
		regnoText1.setBounds(180, 390, 70, 20);
		regnoText2.setBounds(265, 390, 70, 20);

		c.add(regnoText1);
		c.add(regnoText2);

		btnOk.setBounds(120, 440, 100, 20);
		c.add(btnOk);
		btnOk.setEnabled(false);
		btnOk.addActionListener(this);

		btnCancel.setBounds(240, 440, 100, 20);
		c.add(btnCancel);
		btnCancel.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) { // 반드시 ActionListener메소드 오버라이딩
				dispose();
			}
		});

		idOk.setBounds(350, 90, 100, 20);
		c.add(idOk);
		idOk.addActionListener(this);

		nikOk.setBounds(350, 240, 100, 20);
		c.add(nikOk);
		nikOk.addActionListener(this);

		pwOk.setBounds(350, 140, 100, 20);
		c.add(pwOk);
		pwOk.addActionListener(this);

		c.setLayout(null);
		c.setBackground(Color.ORANGE);

		setSize(500, 600);
		setLocation(400, 300);
		setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		Object cmd = e.getSource();

		String id = textId.getText();
		String nik = nikText.getText();
		String birthday1 = birthdayText1.getText();
		String birthday2 = birthdayText2.getText();
		String birthday3 = birthdayText3.getText();
		int birthday = Integer.parseInt(birthday1 + birthday2 + birthday3);
		String phone1 = phoneText1.getText();
		String phone2 = phoneText2.getText();
		String phone3 = phoneText3.getText();
		int phone = Integer.parseInt(phone1 + phone2 + phone3);

		String pw = "";
		String rpw = "";

		char[] getPw = textPw.getPassword();
		for (int i = 0; i < getPw.length; i++) {
			pw += getPw[i];
		}

		char[] getRpw = textRpw.getPassword();
		for (int i = 0; i < getRpw.length; i++) {
			rpw += getRpw[i];
		}

		String regno1 = regnoText1.getText();
		String regno2 = "";
		char[] getReg = regnoText2.getPassword();
		for (int i = 0; i < getReg.length; i++) {
			regno2 += getReg[i];
		}


		char sex = 'A';	
		char sexchar = 'A';	
		for (int i = 0; i < 1; i++) {
			sexchar = getReg[0]; // 주민번호 뒷자리의 첫번째 글자를 받아 sexchar에 저장
		}
		switch(sexchar)	//성별에 따라 pk인 mem_regno의 시작 문자가 정해짐, 남자면 M, 여자면 W
		{
			case '1': sex = 'M';	//2000년대 이전 출생 남자
					  break;
			case '2': sex = 'W';	//2000년대 이전 출생 여자
			          break;
			case '3': sex = 'M';	//2000년대 이후 출생 남자
	                  break;
			case '4': sex = 'W';	//2000년대 이후 출생 여자
	                  break;
			case '5': sex = 'M';	//외국인 남자
					  break;
			case '6': sex = 'W';	//외국인 여자
					  break;
			default :
				sex ='Z';	//사용자가 잘못된 주민번호를 입력하면 성별은 Z로 취급
		}
		String regno = sex + regno1 + regno2;
		
		System.out.println("sex : "+sex);
		System.out.println("sexchar : "+sexchar);
		System.out.println("regno : "+regno);
		
		// 가입 눌렀을때
		if (cmd == btnOk) {

			member = new Member();
			member.setId(id);
			member.setPw(pw);
			member.setnik(nik);
			member.setbir(birthday);
			member.setPhone(phone);
			member.setRegno(regno);
			System.out.println(id + "\n" + pw + "\n" + nik + "\n" + birthday + "\n" + phone + "\n" + regno);

			if (dao.newMember(member)) {
				ml.setText(nik + "님 회원가입을 축하드려요!!");
				JOptionPane.showMessageDialog(null, "회원가입완료");
				dispose();
			} else {
				ml.setText("이미 아이디가 있습니다!");
			}

		}

		// 아이디 중복확인 눌렀을 때
		else if (cmd == idOk) {

			dao.IDcheck(id);
			try {
				if (dao.rs.next()) {
					System.out.println("중복");
					la = "아이디가 있습니다!";
					JOptionPane.showMessageDialog(null, la, "ID 중복 확인", JOptionPane.ERROR_MESSAGE);
				} else {
					System.out.println("중복아님");
					la = "사용 가능한 아이디입니다";
					sw1 = true;
					JOptionPane.showMessageDialog(null, la);
				}
			} catch (SQLException e1) {
				e1.printStackTrace();
			}

		}
		// PW 일치 확인
		else if (cmd == pwOk) {
			if (!pw.equals(rpw)) {
				JOptionPane.showMessageDialog(null, "pw를 다시 확인하세요", "PW 불일치", JOptionPane.ERROR_MESSAGE);
			} else {
				JOptionPane.showMessageDialog(null, "PW 일치");
				sw2 = true;
			}
		}
		// 닉네임 중복 확인
		if (cmd == nikOk) {
			dao.NIKcheck(nik);
			try {
				if (dao.rs.next()) {

					System.out.println("중복");
					la = "닉네임이 있습니다!";
					JOptionPane.showMessageDialog(null, la, "닉네임 중복 확인", JOptionPane.ERROR_MESSAGE);
				} else {
					System.out.println("중복아님");
					sw3 = true;
					la = "사용 가능한 닉네임 입니다";
					JOptionPane.showMessageDialog(null, la);
				}
			} catch (SQLException e1) {
				// TODO Auto-generated catch block
				e1.printStackTrace();
			}
			//dao.NIKcheck(nik);
		}

		if (sw1 == true && sw2 == true && sw3 == true) {
			// 아이디중복확인과 닉네임중복확인을 했을 때 가입하기 활성화 됨
			btnOk.setEnabled(true);
		}

	}

	public static void main(String[] args) {
		new joinmain();

	}
}