#include<iostream>
#include<Windows.h>
#include<graphics.h>
#include<stdio.h>
using namespace std;

int main(void) {


	/*
	���ؽ���
	*/
	initgraph(600, 340);
	//����ͼƬ
	loadimage(0, _T("bg.jpg"));
	//��������
	settextstyle(30, 0, _T("΢���ź�"));
	settextcolor(RGB(255, 255, 0));
	//���ο�
	rectangle(300, 40, 550, 80);
	//�ھ����д�ӡ�ı�
	outtextxy(310, 45, _T("1-��վ 404����"));

	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, _T("2-��վ�۸Ĺ���"));

	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, _T("3-��վ������¼"));

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, _T("4-DNS����"));

	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, _T("5-�˳�"));


	system("pause");
	closegraph();
	return 0;
}