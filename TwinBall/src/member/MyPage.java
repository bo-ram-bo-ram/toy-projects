package member;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MyPage extends JDialog {

	Font font = new Font("HY나무B", Font.PLAIN, 20);
	
	public MyPage(JFrame frame, String title) {
		super(frame, title, true); // 모달 다이어로그 설정 => 띄운 창 말고는 접근 못함

		Container c = getContentPane();

		JTabbedPane pane = createTbbedPane();
		c.add(pane);

		c.setBackground(Color.WHITE);

		setSize(600, 500);
		setVisible(true);
	}

	private JTabbedPane createTbbedPane() {
		JTabbedPane pane = new JTabbedPane(JTabbedPane.LEFT);
		pane.setFont(font);
		pane.addTab("PW 변경", new pwPanel());
		pane.addTab("NIKNAME 변경", new nikPanel());
		pane.addTab("나의 점수 확인", new rankPanel());
		return pane;

	}

}
