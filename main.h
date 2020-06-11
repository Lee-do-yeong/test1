#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>

enum Color  //�ֿܼ��� ����ϴ� ����
{
    BLACK, BLUE, GREEN, CYAN,
    RED, MAGENTA, BROWN, LIGHTGRAY,
    DARKGRAY, LIGHTBLUE, LIGHTGREEN, LIGHTCYAN,
    LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE
};

using namespace std;

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define CHOICE 13

void setColor(int back, int text);
void init();
void gotoxy(int x, int y);
void introGame(); // ���� ����ȭ�� �Լ�
int keyControl(); // ����Ű�� �޴� ���� �Լ�
int menuChoice(); // ����ȭ�� �޴� ���� �Լ�
void gameImage(); // ����ȭ�� �̹��� ��� �Լ�
void gameRule(); // ���� �� ȭ�� �Լ�
void player(int x, int y); // ��ǻ�� �÷��̾� �̹��� ��� �Լ�
void bettingNumber(); // ���� �޴� ���� �Լ�
int bettingMenuChoice(); // ���� �޴� �̸� ��� �Լ�
void victoryPrint(); // �¸� �� ȭ�� ���
void defeatPrint();  // �й� �� ȭ�� ���
