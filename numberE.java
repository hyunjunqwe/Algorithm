package boj;

import java.io.*;
import java.util.*;

public class numberE {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		
		int []card = new int[N+1];
		
		for(int i=0;i<=N;i++)
			card[i] = i;
		int[]result = new int[N+1];
		for(int j=1;j<N;j++) {
			result[j] = card[j];	//����ī�� result�� �Է�
			int tmp = card[j+1];	//���� �� ���� ù��° ī���ȣ �ӽ�����
			for(int k=j+1;k<N;k++) {	//ù��° ī�带 ���� ���������� ����
				card[k] = card[k+1];
			}
			card[N]=tmp;	//���� �������� ù��°ī�� ����
		}
		result[N] = card[N];
		for(int i=1;i<=N;i++)
			System.out.print(result[i] + " ");
	}
}