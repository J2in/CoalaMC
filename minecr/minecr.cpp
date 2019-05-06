﻿// minecr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <CoalaMOD.h>
#pragma comment(lib,"CoalaMOD.lib")
int main()
{
	BlockID red = createBlock(BLOCK_BEDROCK);

	int sx, sy, sz, ex, ey, ez, x, y, z;

	scanf_s("%d %d %d %d %d %d", &sx, &sy, &sz, &ex, &ey, &ez);

	for (x = sx; x < ex + 1; x++)
	{
		locateBlock(red, x, sy, sz);
		locateBlock(red, x, ey, sz);
		locateBlock(red, x, sy, ez);
		locateBlock(red, x, ey, ez);
	}
	for (y = sy; y < ey + 1; y++)
	{
		locateBlock(red, ex, y, ez);
		locateBlock(red, ex, y, sz);
		locateBlock(red, sx, y, ez);
		locateBlock(red, sx, y, sz);
	}
	for (z = sz; z < ez + 1; z++)
	{
		locateBlock(red, ex, ey, z);
		locateBlock(red, ex, sy, z);
		locateBlock(red, sx, ey, z);
		locateBlock(red, sx, sy, z);
	}
	locateBlock(red, (sx + ex) / 2, (sy + ey) / 2, (sz + ez) / 2);
}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
