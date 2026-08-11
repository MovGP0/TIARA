/* Ghidra address: 017f5560 */
/* Ghidra symbol: FUN_017f5560 */


void FUN_017f5560(undefined8 param_1,char param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  
  local_138 = 0;
  local_150 = 0;
  local_140 = 0;
  local_148 = 0;
  local_108 = 0;
  local_130 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_50 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_30 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*PTR_DAT_020052b8 == '\0') goto code_r0x017f5ec9;
  thunk_FUN_03e0f7b4(0x30,0,local_28,0);
  if (param_2 == '\x01') {
LAB_017f574b:
    bVar3 = false;
  }
  else {
    cVar5 = FUN_01b1d9d0(L"pcb.exe",0);
    if (cVar5 == '\0') goto LAB_017f574b;
    bVar3 = true;
  }
  if (param_2 == '\x02') {
LAB_017f576d:
    bVar4 = false;
  }
  else {
    cVar5 = FUN_01b1d9d0(L"pcbviewer.exe",0);
    if (cVar5 == '\0') goto LAB_017f576d;
    bVar4 = true;
  }
  if ((bool)(bVar4 & bVar3)) {
    uVar2 = (longlong)local_20 / 2;
    uVar7 = (longlong)local_1c / 2;
    FUN_00806af0(*(undefined8 *)PTR_DAT_02004e40,uVar2 & 0xffffffff);
    FUN_00806b40(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_0064cbf0(*(undefined8 *)PTR_DAT_02004e40,uVar2 & 0xffffffff);
    FUN_0064cc50(*(undefined8 *)PTR_DAT_02004e40,uVar7 & 0xffffffff);
    FUN_0064e1d0(*(undefined8 *)PTR_DAT_02004e40);
    FUN_0043f750(&local_38,uVar2 & 0xffffffff);
    FUN_0043f750(&local_40,uVar7 & 0xffffffff);
    FUN_00416cd0(&local_30,5,L"SetWindow(0,0,",local_38,&DAT_017f60bc,local_40,&DAT_017f60cc);
    FUN_00415dd0(&local_48,local_30,0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_48,1,1);
    FUN_0043f750(&local_58,uVar7 & 0xffffffff);
    FUN_0043f750(&local_60,uVar2 & 0xffffffff);
    FUN_0043f750(&local_68,uVar7 & 0xffffffff);
    FUN_00416cd0(&local_50,7,L"SetWindow(0,",local_58,&DAT_017f60bc,local_60,&DAT_017f60bc,local_68,
                 &DAT_017f60cc);
    FUN_00415dd0(&local_70,local_50,0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_70,2,1);
    FUN_0043f750(&local_80,uVar2 & 0xffffffff);
    FUN_0043f750(&local_88,uVar7 & 0xffffffff);
    FUN_0043f750(&local_90,uVar2 & 0xffffffff);
    FUN_0043f750(&local_98,uVar7 & 0xffffffff);
    FUN_00416cd0(&local_78,9,L"SetWindow(",local_80,&DAT_017f60bc,local_88,&DAT_017f60bc,local_90,
                 &DAT_017f60bc,local_98,&DAT_017f60cc);
    FUN_01b1e860(local_78,0);
    FUN_01359c40(param_1);
  }
  else if (bVar3) {
    uVar2 = (longlong)local_20 / 2;
    lVar1 = (longlong)local_1c;
    uVar7 = lVar1 / 2 & 0xffffffff;
    FUN_00806af0(*(undefined8 *)PTR_DAT_02004e40,uVar2 & 0xffffffff);
    FUN_00806b40(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_0064cbf0(*(undefined8 *)PTR_DAT_02004e40,uVar2 & 0xffffffff);
    FUN_0064cc50(*(undefined8 *)PTR_DAT_02004e40,uVar7);
    FUN_0043f750(&local_a8,uVar2 & 0xffffffff);
    FUN_0043f750(&local_b0,local_1c);
    FUN_00416cd0(&local_a0,5,L"SetWindow(0,0,",local_a8,&DAT_017f60bc,local_b0,&DAT_017f60cc);
    FUN_00415dd0(&local_b8,local_a0,0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_b8,1,1);
    FUN_0043f750(&local_c8,uVar2 & 0xffffffff);
    FUN_0043f750(&local_d0,lVar1 / 2 & 0xffffffff);
    FUN_0043f750(&local_d8,uVar2 & 0xffffffff);
    FUN_0043f750(&local_e0,uVar7);
    FUN_00416cd0(&local_c0,9,L"SetWindow(",local_c8,&DAT_017f60bc,local_d0,&DAT_017f60bc,local_d8,
                 &DAT_017f60bc,local_e0,&DAT_017f60cc);
    FUN_01b1e860(local_c0,0);
    FUN_01359c40(param_1);
  }
  else if (bVar4) {
    uVar2 = (longlong)local_20 / 2;
    lVar1 = (longlong)local_1c;
    uVar7 = lVar1 / 2 & 0xffffffff;
    FUN_00806af0(*(undefined8 *)PTR_DAT_02004e40,uVar2 & 0xffffffff);
    FUN_00806b40(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_0064cbf0(*(undefined8 *)PTR_DAT_02004e40,uVar2 & 0xffffffff);
    FUN_0064cc50(*(undefined8 *)PTR_DAT_02004e40,uVar7);
    FUN_0043f750(&local_f0,uVar2 & 0xffffffff);
    FUN_0043f750(&local_f8,local_1c);
    FUN_00416cd0(&local_e8,5,L"SetWindow(0,0,",local_f0,&DAT_017f60bc,local_f8,&DAT_017f60cc);
    FUN_00415dd0(&local_100,local_e8,0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_100,1,1);
    FUN_0043f750(&local_110,uVar2 & 0xffffffff);
    FUN_0043f750(&local_118,lVar1 / 2 & 0xffffffff);
    FUN_0043f750(&local_120,uVar2 & 0xffffffff);
    FUN_0043f750(&local_128,uVar7);
    FUN_00416cd0(&local_108,9,L"SetWindow(",local_110,&DAT_017f60bc,local_118,&DAT_017f60bc,
                 local_120,&DAT_017f60bc,local_128,&DAT_017f60cc);
    FUN_00415dd0(&local_130,local_108,0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_130,2,1);
    FUN_01359c40(param_1);
  }
  else {
    iVar6 = thunk_FUN_03f3ed25(local_20,0x37,100);
    FUN_00806af0(*(undefined8 *)PTR_DAT_02004e40,iVar6);
    FUN_00806b40(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_0064cbf0(*(undefined8 *)PTR_DAT_02004e40,local_20 - iVar6);
    FUN_0064cc50(*(undefined8 *)PTR_DAT_02004e40,local_1c);
    FUN_0064e1d0(*(undefined8 *)PTR_DAT_02004e40);
    FUN_0043f750(&local_140,iVar6);
    FUN_0043f750(&local_148,local_1c);
    FUN_00416cd0(&local_138,5,L"SetWindow(0,0,",local_140,&DAT_017f60bc,local_148,&DAT_017f60cc);
    FUN_00415dd0(&local_150,local_138,0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_150,1,1);
    FUN_01359c40(param_1);
  }
code_r0x017f5ec9:
  FUN_004144d0(&local_150);
  FUN_00414560(&local_148,3);
  FUN_004144d0(&local_130);
  FUN_00414560(&local_128,5);
  FUN_004144d0(&local_100);
  FUN_00414560(&local_f8,8);
  FUN_004144d0(&local_b8);
  FUN_00414560(&local_b0,8);
  FUN_004144d0(&local_70);
  FUN_00414560(&local_68,4);
  FUN_004144d0(&local_48);
  FUN_00414560(&local_40,3);
  return;
}

