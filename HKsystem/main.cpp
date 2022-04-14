#include<iostream>
#include<Windows.h>
#include<graphics.h>
#include<stdio.h>
using namespace std;

int main(void) {


	/*
	加载界面
	*/
	initgraph(600, 340);
	//加载图片
	loadimage(0, _T("bg.jpg"));
	//设置字体
	settextstyle(30, 0, _T("微软雅黑"));
	settextcolor(RGB(255, 255, 0));
	//矩形框
	rectangle(300, 40, 550, 80);
	//在矩形中打印文本
	outtextxy(310, 45, _T("1-网站 404攻击"));

	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, _T("2-网站篡改攻击"));

	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, _T("3-网站攻击记录"));

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, _T("4-DNS攻击"));

	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, _T("5-退出"));


	system("pause");
	closegraph();
	return 0;
}