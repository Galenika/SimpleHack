#include <iostream>
#include <string>
#include <Windows.h>
#include <WinBase.h>
#include <TlHelp32.h>
#include <vector>
#include "menu.h"

void c_menu::printMenu() { //prints menu stuff
	using namespace std;

	system("cls"); // clears all lines
	cout << "TOM external!" << "\n ----- " << endl;
	cout << "С����1 ͸��(������) / ";
	if (glow == true) {
		cout << " ����!\n";
	}
	else {
		cout << " �ر�!\n";
	}

	cout << "\nС����2 ���� / ";
	if (bhop == true) {
		cout << " ����!\n";
	}
	else {
		cout << " �ر�!\n";
	}

	cout << "\nС����3 �Զ���� / ";
	if (trigger == true) {
		cout << " ����!\n";
	}
	else {
		cout << " �ر�!\n";
	}

	cout << "\nС����4 ����Ұ / ";
	if (fov == true) {
		cout << " ����!\n";
	}
	else {
		cout << " �ر�!\n";
	}

	cout << "\nС����5 ͸��(�Լ�ר��) / ";
	if (glow2 == true) {
		cout << " ����!\n";
	}
	else {
		cout << " �ر�!\n";
	}

	cout << "\nС����6 �������� / ";
	if (noflash == true) {
		cout << " ����!\n";
	}
	else {
		cout << " �ر�!\n";
	}

	cout << "\nС����7 ���ӳ� / ";
	if (fakelag == true) {
		cout << " ����!\n";
	}
	else {
		cout << " �ر�!\n";
	}

	cout << "\n�������ڲ��԰汾�׶�,��Щ���ܲ�������.";
}

void c_menu::main() { // main menu func
	using namespace std;


	if (GetAsyncKeyState(VK_NUMPAD1)) { // toggles glow w/ f1
		glow = !glow; // reverses current state
		printMenu();
		Beep(1000, 200);
		Sleep(100);
	}

	if (GetAsyncKeyState(VK_NUMPAD2)) { // toggles bhop w/ f2
		bhop = !bhop; // reverses current state
		printMenu();
		Beep(1000, 200);
		Sleep(100);
	}

	if (GetAsyncKeyState(VK_NUMPAD3)) {
		trigger = !trigger;
		printMenu();
		Beep(1000, 200);
		Sleep(100);
	}

	if (GetAsyncKeyState(VK_NUMPAD4)) {
		fov = !fov;
		printMenu();
		Beep(1000, 200);
		Sleep(100);
	}

	if (GetAsyncKeyState(VK_NUMPAD5)) {
		glow2 = !glow2;
		printMenu();
		Beep(1000, 200);
		Sleep(100);
	}

	if (GetAsyncKeyState(VK_NUMPAD6)) {
		noflash = !noflash;
		printMenu();
		Beep(1000, 200);
		Sleep(100);
	}

	if (GetAsyncKeyState(VK_NUMPAD7)) {
		fakelag = !fakelag;
		printMenu();
		Beep(1000, 200);
		Sleep(100);
	}
}

