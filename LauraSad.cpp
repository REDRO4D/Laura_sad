//Hecho por: Bruno Rosales
#include<stdio.h>
#include<windows.h>
#include <conio.h>
//PlaySound(TEXT("Xxxtentacion_Jocelyn Flores.wav"),NULL,SND_ASYNC);

void gotoxy(int x, int y);
void Corazon();
void Linea_1();
void Linea_2();
void Linea_3();
void Linea_4();
void Linea_5();
void Linea_6();
void Linea_7();
void Linea_8();
void Linea_9();
void Linea_10();
void Linea_11();
void Linea_Todas();
void Animacion(char p);

int main (){
	char pregunta,p=37,q=168,n=165;
	system("color f3");
	Corazon();
	gotoxy(41,3);
	printf("BORRANDO MIS SENTIMIENTOS POR ELLA...\n");
	Linea_Todas();
	gotoxy(39,17);
	printf("%cESTAS SEGURO DE BORRARLOS?: [  ] SI / NO\b\b\b\b\b\b\b\b\b\b\b",q);
	scanf("%c",&pregunta);
	fflush(stdin);
	
	if(pregunta=='n' || pregunta=='N'){
		Corazon();
		Linea_Todas();
		gotoxy(39,17);
		system("color 4f");
		printf("DISPOSITIVO DA%cADO, RESTAURANDO CORAZON\a",n);
		Sleep(2000);
		Animacion(p);
	}else{
		Animacion(p);
	}
}

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void Corazon(){
	system("cls");
	gotoxy(45,5);
	printf("    ������      ������");
	gotoxy(45,6);
	printf("  ��      ��  ��      ��");
	gotoxy(45,7);
	printf("��          ��          ��");
	gotoxy(45,8);
	printf("��                      ��");//11
	gotoxy(45,9);
	printf("��                      ��");
	gotoxy(45,10);
	printf("  ��                  ��");
	gotoxy(45,11);
	printf("    ��              ��");
	gotoxy(45,12);
	printf("      ��          ��");
	gotoxy(45,13);
	printf("        ��      ��");
	gotoxy(45,14);
	printf("          ��  ��");
	gotoxy(45,15);
	printf("            ��");
}

void Linea_1(){
	gotoxy(47,7);
	printf("��");
	gotoxy(47,8);
	printf("��");
	gotoxy(47,9);
	printf("��");
}

void Linea_2(){
	gotoxy(49,6);
	printf("��");
	gotoxy(49,7);
	printf("��");
	gotoxy(49,8);
	printf("��");
	gotoxy(49,9);
	printf("��");
	gotoxy(49,10);
	printf("��");
}
void Linea_3(){
	gotoxy(51,6);
	printf("��");
	gotoxy(51,7);
	printf("��");
	gotoxy(51,8);
	printf("��");
	gotoxy(51,9);
	printf("��");
	gotoxy(51,10);
	printf("��");
	gotoxy(51,11);
	printf("��");
}
void Linea_4(){
	gotoxy(53,6);
	printf("��");
	gotoxy(53,7);
	printf("��");
	gotoxy(53,8);
	printf("��");
	gotoxy(53,9);
	printf("��");
	gotoxy(53,10);
	printf("��");
	gotoxy(53,11);
	printf("��");
	gotoxy(53,12);
	printf("��");
}
void Linea_5(){
	gotoxy(55,7);
	printf("��");
	gotoxy(55,8);
	printf("��");
	gotoxy(55,9);
	printf("��");
	gotoxy(55,10);
	printf("��");
	gotoxy(55,11);
	printf("��");
	gotoxy(55,12);
	printf("��");
	gotoxy(55,13);
	printf("��");
}
void Linea_6(){
	gotoxy(57,8);
	printf("��");
	gotoxy(57,9);
	printf("��");
	gotoxy(57,10);
	printf("��");
	gotoxy(57,11);
	printf("��");
	gotoxy(57,12);
	printf("��");
	gotoxy(57,13);
	printf("��");
	gotoxy(57,14);
	printf("��");
}
void Linea_7(){
	gotoxy(59,6);
	printf("��");
	gotoxy(59,7);
	printf("��");
	gotoxy(59,8);
	printf("��");
	gotoxy(59,9);
	printf("��");
	gotoxy(59,10);
	printf("��");
	gotoxy(59,11);
	printf("��");
	gotoxy(59,12);
	printf("��");
	gotoxy(59,13);
	printf("��");
}
void Linea_8(){
	gotoxy(61,5);
	printf("��");
	gotoxy(61,6);
	printf("��");
	gotoxy(61,7);
	printf("��");
	gotoxy(61,8);
	printf("��");
	gotoxy(61,9);
	printf("��");
	gotoxy(61,10);
	printf("��");
	gotoxy(61,11);
	printf("��");
	gotoxy(61,12);
	printf("��");
}
void Linea_9(){
	gotoxy(63,5);
	printf("��");
	gotoxy(63,6);
	printf("��");
	gotoxy(63,7);
	printf("��");
	gotoxy(63,8);
	printf("��");
	gotoxy(63,9);
	printf("��");
	gotoxy(63,10);
	printf("��");
	gotoxy(63,11);
	printf("��");
}
void Linea_10(){
	gotoxy(65,5);
	printf("��");
	gotoxy(65,6);
	printf("��");
	gotoxy(65,7);
	printf("��");
	gotoxy(65,8);
	printf("��");
	gotoxy(65,9);
	printf("��");
	gotoxy(65,10);
	printf("��");
}
void Linea_11(){
	gotoxy(67,7);
	printf("��");
	gotoxy(67,8);
	printf("��");
	gotoxy(67,9);
	printf("��");
}
void Linea_Todas(){
	Linea_1();
	Linea_2();
	Linea_3();
	Linea_4();
	Linea_5();
	Linea_6();
	Linea_7();
	Linea_8();
	Linea_9();
	Linea_10();
	Linea_11();
}
void Animacion(char p){
	PlaySound(TEXT("Xxxtentacion_Jocelyn Flores.wav"),NULL,SND_ASYNC);
	Sleep(1000);
	system("color f0");
	Corazon();
	Linea_Todas();
	gotoxy(52,17);
	printf("BORRANDO 0%c",p);
	Corazon();
	Linea_1();
	Linea_2();
	Linea_3();
	Linea_4();
	Linea_5();
	Linea_6();
	Linea_7();
	Linea_8();
	Linea_9();
	Linea_10();
	gotoxy(52,17);
	printf("BORRANDO 10%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	Linea_2();
	Linea_3();
	Linea_4();
	Linea_5();
	Linea_6();
	Linea_7();
	Linea_8();
	Linea_9();
	gotoxy(52,17);
	printf("BORRANDO 20%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	Linea_2();
	Linea_3();
	Linea_4();
	Linea_5();
	Linea_6();
	Linea_7();
	Linea_8();
	gotoxy(52,17);
	printf("BORRANDO 30%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	Linea_2();
	Linea_3();
	Linea_4();
	Linea_5();
	Linea_6();
	Linea_7();
	gotoxy(52,17);
	printf("BORRANDO 40%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	Linea_2();
	Linea_3();
	Linea_4();
	Linea_5();
	Linea_6();
	gotoxy(52,17);
	printf("BORRANDO 50%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	Linea_2();
	Linea_3();
	Linea_4();
	Linea_5();
	gotoxy(52,17);
	printf("BORRANDO 60%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	Linea_2();
	Linea_3();
	Linea_4();
	gotoxy(52,17);
	printf("BORRANDO 70%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	Linea_2();
	Linea_3();
	gotoxy(52,17);
	printf("BORRANDO 80%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	Linea_2();
	gotoxy(52,17);
	printf("BORRANDO 90%c",p);
	Sleep(1000);
	Corazon();
	Linea_1();
	gotoxy(52,17);
	printf("BORRANDO 99%c",p);
	Sleep(2070);
	system("cls");
	system("color f4");
	gotoxy(30,3);
	printf("      ��         ��  ������  ����    ����    ������  ����    ��");
	gotoxy(30,4);
	printf("     ����            ��      ��  ��  ��  ��  ��  ��  ��  ��  ��");
	gotoxy(30,5);
	printf("    ��  ��       ��  ��      ��  ��  ��  ��  ��  ��  ��  ��  ��");
	gotoxy(30,6);
	printf("   ��  � ��      ��  ������  ����    ����    ��  ��  ����    ��");
	gotoxy(30,7);
	printf("  ��   �  ��     ��  ��      ��  ��  ��  ��  ��  ��  ��  ��  ��");
	gotoxy(30,8);
	printf(" ��    o   ��    ��  ��      ��  ��  ��  ��  ��  ��  ��  ��    ");
	gotoxy(30,9);
	printf("��������������   ��  ������  ��  ��  ��  ��  ������  ��  ��  ��");
	gotoxy(47,11);
	printf("EL ARCHIVO ES DEMASIADO GRANDE...");
	gotoxy(26,13);
	printf("CIERRE LA APLICACION PARA CANCELAR LA OPERACION Y REINTENTAR MAS TARDE");
	gotoxy(59,15);
	Sleep(102500);
}

