package member;

import java.sql.*;

public class changeDAO {

	String drivers = "org.postgresql.Driver"; // Postgresql�� JDBC ���� Ŭ���� �̸�
	String url = "jdbc:postgresql://localhost:5432/TwinBall"; // JDBC �����ͺ��̽� ����
	String username = "postgres";
	String password = "1234";
	Connection conn;

	PreparedStatement pstmt;
	ResultSet rs;
	String sql;

	//��й�ȣ ���� �޼ҵ�
	public boolean PWChange(String newPW, String regno) {
		connectDB();

		String sql = "UPDATE member SET mem_pw = '" + newPW + "' WHERE mem_regno = '" + regno + "';  COMMIT;";
		try {
				pstmt = conn.prepareStatement(sql);
				pstmt.executeUpdate();
				System.out.println(newPW);
				System.out.println(regno);
		} catch (SQLException e) {
			e.printStackTrace();
			return false;
		} finally {
			closeDB();
		}
		System.out.println("���漺��");
		return true;
	}
	//�г��� ���� �޼ҵ�
	public boolean NIKchange(String newNIK, String regno) {
		connectDB();

		String sql = "UPDATE member SET mem_nik = '" + newNIK + "' WHERE mem_regno = '" + regno + "';  COMMIT;";
		try {
				pstmt = conn.prepareStatement(sql);
				pstmt.executeUpdate();
				System.out.println(newNIK);
				System.out.println(regno);
		} catch (SQLException e) {
			e.printStackTrace();
			return false;
		} finally {
			closeDB();
		}
		System.out.println("���漺��");
		return true;
		
	}
	
	
	// DB���� �޼���
	public void connectDB() {
		try {
			Class.forName(drivers);
			System.out.println("����̹� �ε� ����");
			conn = DriverManager.getConnection(url, username, password);
			System.out.println("���� ����");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	// DB ���� ���� �޼���
	public void closeDB() {
		try {
			pstmt.close();
			conn.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

}
