package member;

import java.sql.*;
import java.util.*;

public class rankDAO {

	String drivers = "org.postgresql.Driver"; // Postgresql�� JDBC ���� Ŭ���� �̸�
	String url = "jdbc:postgresql://localhost:5432/TwinBall"; // JDBC �����ͺ��̽� ����
	String username = "postgres";
	String password = "1234";
	Connection conn;

	PreparedStatement pstmt;
	ResultSet rs;
	String sql;
	
	int jumsu1;
	int jumsu2;
	//1p���� ��ȸ �޼ҵ�
	public int jumsu1LOOK(String regno) {
	      connectDB();
	     
	      String sql = "SELECT  game_1p FROM game WHERE game_regno = '"+regno+"';";
	      try {
	            pstmt = conn.prepareStatement(sql);

	            rs = pstmt.executeQuery(); 
	            rs.next();
	            
	            jumsu1= rs.getInt("game_1p");

	            System.out.println("regno : "+ regno);
	            System.out.println("jumsu1 : "+ jumsu1);
	            
	      } catch (SQLException e) {
	         e.printStackTrace();
	      } finally {
	      }
          
		return jumsu1;  
}
	//2p���� ��ȸ �޼ҵ�
	public int jumsu2LOOK(String regno) {
	      connectDB();
	     
	      String sql = "SELECT  game_2p FROM game WHERE game_regno = '"+regno+"';";
	      try {
	            pstmt = conn.prepareStatement(sql);

	            rs = pstmt.executeQuery(); 
	            rs.next();
	            
	            jumsu2= rs.getInt("game_2p");
	            
	            System.out.println("regno : "+ regno);
	            System.out.println("jumsu2 : "+ jumsu2);
	            
	            
	            
	      } catch (SQLException e) {
	         e.printStackTrace();
	      } finally {
	      }
        
		return jumsu2;  
}
	 //1p��� TO3��ŷ �ҷ����� �޼ҵ�
	   public ArrayList<Rank> get1p() { 
		      connectDB();
		      
		      sql ="SELECT	member.mem_nik	,\r\n" + 
		    		  "	member.mem_id	,\r\n" + 
		    		  "	game.game_1p\r\n" + 
		    		  "FROM	member,	game \r\n" + 
		    		  "WHERE	member.mem_regno = game.game_regno\r\n" + 
		    		  "ORDER BY game.game_1p DESC;";
		      //��ü �˻� �����͸� �����ϱ� ���� ArrayList  
		      ArrayList<Rank> datas = new ArrayList<Rank>(); 
		      // �����ڵ� �޺��ڽ� �����͸� ���� ���� �ʱ�ȭ 
		      Vector<Rank> rank = new Vector<Rank>();
		      

		      try {
		         pstmt = conn.prepareStatement(sql);
		         rs = pstmt.executeQuery(); // �˻��� �����ͼ� ��ŭ ������ ���� Product ��ü�� ����� �̸� �ٽ� ArrayList �� �߰���.
		        for(int i=0; i<3;i++)	//top3�� ��ŷ�� ��ȸ
		        {
		        	rs.next();
		            Rank r = new Rank();
		            
		            System.out.println("mem_nik:" +rs.getString("mem_nik"));
		            System.out.println(rs.getString("mem_id"));
		            System.out.println(rs.getString("game_1p"));
		            
		            r.setnik(rs.getString("mem_nik"));
		            r.setId(rs.getString("mem_id")); 
		            r.setjumsu1(rs.getInt("game_1p"));
		            
		            datas.add(r);
		        }
		      } catch(SQLException e) {
		         e.printStackTrace();
		         return null; 
		         } finally { 
		            closeDB();
		         } 
		      return datas;
		   }
	
//2p��� TO3��ŷ �ҷ����� �޼ҵ�
	   public ArrayList<Rank> get2p() { 
		      connectDB();
		      
		      sql ="SELECT	member.mem_nik	,\r\n" + 
		    		  "	member.mem_id	,\r\n" + 
		    		  "	game.game_2p\r\n" + 
		    		  "FROM	member,	game \r\n" + 
		    		  "WHERE	member.mem_regno = game.game_regno\r\n" + 
		    		  "ORDER BY game.game_2p DESC;";
		      
		      //��ü �˻� �����͸� �����ϱ� ���� ArrayList  
		      ArrayList<Rank> datas = new ArrayList<Rank>(); 
		      // �����ڵ� �޺��ڽ� �����͸� ���� ���� �ʱ�ȭ 
		      Vector<Rank> rank = new Vector<Rank>();
		      

		      try {
		         pstmt = conn.prepareStatement(sql);
		         rs = pstmt.executeQuery(); // �˻��� �����ͼ� ��ŭ ������ ���� Product ��ü�� ����� �̸� �ٽ� ArrayList �� �߰���.
		        for(int i=0; i<3;i++)	//top3�� ��ŷ�� ��ȸ
		        {
		        	rs.next();
		            Rank r = new Rank(); 

		            r.setnik(rs.getString("mem_nik"));
		            r.setId(rs.getString("mem_id")); 
		            r.setjumsu2(rs.getInt("game_2p"));
		            datas.add(r);
		        }
		      } catch(SQLException e) {
		         e.printStackTrace();
		         return null; 
		         } finally { 
		            closeDB();
		         } 
		      return datas;
		   } 
//1p�ְ����� ������Ʈ �޼ҵ�	   
	   public void save(String regno, int jumsu1) {
		      connectDB();
		      sql = "UPDATE game SET game_1p = "+jumsu1+" WHERE game_regno = '"+regno+"'AND game_1p<"+jumsu1+";";
		      
		      try {
					pstmt = conn.prepareStatement(sql);
					pstmt.executeUpdate();
			} catch (SQLException e) {
				e.printStackTrace();
			} finally {
				closeDB();
			}
			System.out.println("���漺��");  
	   }
//2p�ְ����� ������Ʈ �޼ҵ�	   
	   public void save2(String regno, int jumsu2) {
		      connectDB();
		      sql = "UPDATE game SET game_2p = "+jumsu2+" WHERE game_regno = '"+regno+"'AND game_1p<"+jumsu2+";";
		      
		      try {
		    	  System.out.println(jumsu1);
					pstmt = conn.prepareStatement(sql);
					pstmt.executeUpdate();
			} catch (SQLException e) {
				e.printStackTrace();
			} finally {
				closeDB();
			}
			System.out.println("���漺��");  
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
			System.out.println("��������");
			pstmt.close();
			conn.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

}
