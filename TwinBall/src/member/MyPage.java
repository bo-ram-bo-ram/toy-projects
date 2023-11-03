package member;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MyPage extends JDialog {

	Font font = new Font("HY����B", Font.PLAIN, 20);
	
	public MyPage(JFrame frame, String title) {
		super(frame, title, true); // ��� ���̾�α� ���� => ��� â ����� ���� ����

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
		pane.addTab("PW ����", new pwPanel());
		pane.addTab("NIKNAME ����", new nikPanel());
		pane.addTab("���� ���� Ȯ��", new rankPanel());
		return pane;

	}

}
