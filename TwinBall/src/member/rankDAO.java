package member;

import java.sql.*;
import java.util.*;

public class rankDAO {

	String drivers = "org.postgresql.Driver"; // Postgresql의 JDBC 메인 클래스 이름
	String url = "jdbc:postgresql://localhost:5432/TwinBall"; // JDBC 데이터베이스 정보
	String username = "postgres";
	String password = "1234";
	Connection conn;

	PreparedStatement pstmt;
	ResultSet rs;
	String sql;
	
	int jumsu1;
	int jumsu2;
	//1p점수 조회 메소드
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
	//2p점수 조회 메소드
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
	 //1p모드 TO3랭킹 불러오는 메소드
	   public ArrayList<Rank> get1p() { 
		      connectDB();
		      
		      sql ="SELECT	member.mem_nik	,\r\n" + 
		    		  "	member.mem_id	,\r\n" + 
		    		  "	game.game_1p\r\n" + 
		    		  "FROM	member,	game \r\n" + 
		    		  "WHERE	member.mem_regno = game.game_regno\r\n" + 
		    		  "ORDER BY game.game_1p DESC;";
		      //전체 검색 데이터를 전달하기 위한 ArrayList  
		      ArrayList<Rank> datas = new ArrayList<Rank>(); 
		      // 관리코드 콤보박스 데이터를 위한 벡터 초기화 
		      Vector<Rank> rank = new Vector<Rank>();
		      

		      try {
		         pstmt = conn.prepareStatement(sql);
		         rs = pstmt.executeQuery(); // 검색된 데이터수 만큼 루프를 돌며 Product 객체를 만들고 이를 다시 ArrayList 에 추가함.
		        for(int i=0; i<3;i++)	//top3의 랭킹만 조회
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
	
//2p모드 TO3랭킹 불러오는 메소드
	   public ArrayList<Rank> get2p() { 
		      connectDB();
		      
		      sql ="SELECT	member.mem_nik	,\r\n" + 
		    		  "	member.mem_id	,\r\n" + 
		    		  "	game.game_2p\r\n" + 
		    		  "FROM	member,	game \r\n" + 
		    		  "WHERE	member.mem_regno = game.game_regno\r\n" + 
		    		  "ORDER BY game.game_2p DESC;";
		      
		      //전체 검색 데이터를 전달하기 위한 ArrayList  
		      ArrayList<Rank> datas = new ArrayList<Rank>(); 
		      // 관리코드 콤보박스 데이터를 위한 벡터 초기화 
		      Vector<Rank> rank = new Vector<Rank>();
		      

		      try {
		         pstmt = conn.prepareStatement(sql);
		         rs = pstmt.executeQuery(); // 검색된 데이터수 만큼 루프를 돌며 Product 객체를 만들고 이를 다시 ArrayList 에 추가함.
		        for(int i=0; i<3;i++)	//top3의 랭킹만 조회
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
//1p최고점수 업데이트 메소드	   
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
			System.out.println("변경성공");  
	   }
//2p최고점수 업데이트 메소드	   
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
			System.out.println("변경성공");  
	   }
	// DB연결 메서드
	public void connectDB() {
		try {
			Class.forName(drivers);
			System.out.println("드라이버 로딩 성공");
			conn = DriverManager.getConnection(url, username, password);
			System.out.println("연결 성공");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	// DB 연결 종료 메서드
	public void closeDB() {
		try {
			System.out.println("연결종료");
			pstmt.close();
			conn.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

}
