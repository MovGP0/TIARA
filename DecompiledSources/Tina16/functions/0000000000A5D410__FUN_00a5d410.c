/* Ghidra address: 00a5d410 */
/* Ghidra symbol: FUN_00a5d410 */


void FUN_00a5d410(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5,uint param_6,uint param_7,uint param_8,char param_9,
                 undefined4 param_10,undefined1 param_11,undefined4 param_12,undefined4 param_13)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  param_1[0x11] = (longlong)(double)param_4;
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00414ad0(lVar1 + 0x28,param_2);
  FUN_00468a10(lVar1 + 0x78,param_2);
  FUN_00468530(lVar1 + 0x90,param_4,0xfffffffffffffffc);
  FUN_00468a10(lVar1 + 0xa8,L"none");
  FUN_00468a10(lVar1 + 0xc0,L"normal");
  FUN_00468a10(lVar1 + 0xd8,L"left");
  FUN_00468a10(lVar1 + 0xf0,L"none");
  FUN_00468530(lVar1 + 0x600,0,1);
  FUN_00468a10(lVar1 + 0x618,L"normal");
  FUN_00468a10(lVar1 + 0x6a8,L"normal");
  FUN_00468a10(lVar1 + 0x630,L"normal");
  FUN_00468530(lVar1 + 0x120,param_5,0xfffffffffffffffc);
  FUN_00468530(lVar1 + 0x228,param_12,0xfffffffffffffffc);
  FUN_00468530(lVar1 + 600,param_12,0xfffffffffffffffc);
  FUN_00468530(lVar1 + 0x270,param_13,0xfffffffffffffffc);
  FUN_00468530(lVar1 + 0x240,param_13,0xfffffffffffffffc);
  FUN_00468530(lVar1 + 0x4c8,2,1);
  FUN_00468530(lVar1 + 0x108,0,1);
  FUN_00468530(lVar1 + 0x210,0,1);
  FUN_00a53800(lVar1,param_10);
  *(undefined1 *)(lVar1 + 0x6c) = param_11;
  (**(code **)(*param_1 + 0x80))(param_1,L"default",lVar1);
  param_1[0x10] = lVar1;
  if ((char)param_1[0x12] != '\0') {
    lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
    FUN_00468860(lVar1 + 0x90,(double)param_4);
    FUN_00468a10(lVar1 + 0xa8,L"none");
    FUN_00468a10(lVar1 + 0xc0,L"normal");
    FUN_00468530(lVar1 + 0x120,param_5,0xfffffffffffffffc);
    (**(code **)(*param_1 + 0x80))(param_1,&PTR_DAT_00a5e510,lVar1);
    uVar2 = FUN_00a5d220(param_1,L"table",lVar1);
    lVar1 = FUN_00a5d220(param_1,&DAT_00a5e53c,uVar2);
    FUN_00468a10(lVar1 + 0xc0,L"bold");
  }
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468530(lVar1 + 0x120,param_6 | *(uint *)PTR_DAT_02005078,0xfffffffffffffffc);
  if (param_9 == '\0') {
    FUN_00468a10(lVar1 + 0xf0,L"none");
  }
  else {
    FUN_00468a10(lVar1 + 0xf0,L"underline");
  }
  (**(code **)(*param_1 + 0x80))(param_1,L"::link",lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468530(lVar1 + 0x120,param_7 | *(uint *)PTR_DAT_02005078,0xfffffffffffffffc);
  (**(code **)(*param_1 + 0x80))(param_1,L"::visited",lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468530(lVar1 + 0x120,param_8 | *(uint *)PTR_DAT_02005078,0xfffffffffffffffc);
  (**(code **)(*param_1 + 0x80))(param_1,L"::hover",lVar1);
  uVar2 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  (**(code **)(*param_1 + 0x80))(param_1,L"null",uVar2);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0x78,param_3);
  FUN_00468860(lVar1 + 0x90,((double)param_4 * 10.0) / 12.0);
  FUN_00468a10(lVar1 + 0xa8,L"none");
  FUN_00468a10(lVar1 + 0xc0,L"normal");
  FUN_00468a10(lVar1 + 0xf0,L"none");
  FUN_00468a10(lVar1 + 0x6a8,&DAT_00a5e5f8);
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e5f8,lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468530(lVar1 + 0x228,0xff4392a2,0xfffffffffffffffc);
  FUN_00468530(lVar1 + 600,0xff4392a2,0xfffffffffffffffc);
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e60c,lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468530(lVar1 + 0x228,0,1);
  (**(code **)(*param_1 + 0x80))(param_1,L"p 11pre",lVar1);
  bVar3 = 0;
  ppuVar5 = &PTR_PTR_01e75998;
  do {
    lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
    if (bVar3 < 4) {
      FUN_00468a10(lVar1 + 0x540,L"blank");
      FUN_00468530(lVar1 + 0x228,0xff4392a2,0xfffffffffffffffc);
      FUN_00468530(lVar1 + 600,0xff4392a2,0xfffffffffffffffc);
      FUN_00468530(lVar1 + 0x270,0xff439eb2,0xfffffffffffffffc);
      FUN_00468530(lVar1 + 0x2d0,0x28,1);
    }
    else if (bVar3 == 4) {
      FUN_00468a10(lVar1 + 0x540,L"none");
      FUN_00468530(lVar1 + 0x270,0,1);
      FUN_00468530(lVar1 + 0x228,0,1);
      FUN_00468530(lVar1 + 600,0,1);
      FUN_00468530(lVar1 + 0x270,0,1);
    }
    else if (bVar3 == 5) {
      FUN_00468530(lVar1 + 0x228,0,1);
      FUN_00468530(lVar1 + 600,0,1);
      FUN_00468530(lVar1 + 0x270,0x28,1);
    }
    else if (bVar3 == 6) {
      FUN_00468530(lVar1 + 0x228,0xff4392a2,0xfffffffffffffffc);
      FUN_00468530(lVar1 + 600,0xe,1);
      FUN_00468530(lVar1 + 0x270,0x28,1);
    }
    (**(code **)(*param_1 + 0x80))(param_1,*ppuVar5,lVar1);
    bVar3 = bVar3 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (bVar3 != 7);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0x78,param_3);
  FUN_00468a10(lVar1 + 0x90,L"0.83em");
  (**(code **)(*param_1 + 0x80))(param_1,L"code",lVar1);
  FUN_00a5d220(param_1,&PTR_DAT_00a5e684,lVar1);
  FUN_00a5d220(param_1,&DAT_00a5e698,lVar1);
  FUN_00a5d220(param_1,L"samp",lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0xc0,L"bold");
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e6c4,lVar1);
  FUN_00a5d220(param_1,L"strong",lVar1);
  if ((char)param_1[0x12] == '\0') {
    FUN_00a5d220(param_1,&DAT_00a5e53c,lVar1);
    lVar1 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
    FUN_00468a10(lVar1 + 0xd8,L"none");
    (**(code **)(*param_1 + 0x80))(param_1,L"table",lVar1);
  }
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0x90,L"0.83em");
  FUN_00468a10(lVar1 + 0x4f8,L"super");
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e708,lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0x90,L"0.83em");
  FUN_00468a10(lVar1 + 0x4f8,&DAT_00a5e71c);
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e71c,lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0x90,L"1.17em");
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e74c,lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0x90,L"0.83em");
  (**(code **)(*param_1 + 0x80))(param_1,L"small",lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0xa8,L"italic");
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e794,lVar1);
  FUN_00a5d220(param_1,&PTR_DAT_00a5e7a4,lVar1);
  FUN_00a5d220(param_1,L"cite",lVar1);
  FUN_00a5d220(param_1,&DAT_00a5e7d0,lVar1);
  FUN_00a5d220(param_1,&DAT_00a5e7e4,lVar1);
  FUN_00a5d220(param_1,L"address",lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0xf0,L"underline");
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e814,lVar1);
  FUN_00a5d220(param_1,&DAT_00a5e824,lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0xf0,L"line-through");
  (**(code **)(*param_1 + 0x80))(param_1,&DAT_00a5e860,lVar1);
  FUN_00a5d220(param_1,L"strike",lVar1);
  FUN_00a5d220(param_1,&DAT_00a5e88c,lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0xd8,L"center");
  (**(code **)(*param_1 + 0x80))(param_1,L"center",lVar1);
  FUN_00a5d220(param_1,L"caption",lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0x78,L"Arial Unicode MS, Arial");
  FUN_00468a10(lVar1 + 0x90,L"10pt");
  FUN_00468a10(lVar1 + 0xa8,L"none");
  FUN_00468a10(lVar1 + 0xc0,L"normal");
  FUN_00468a10(lVar1 + 0xd8,L"left");
  FUN_00468a10(lVar1 + 0xf0,L"none");
  FUN_00468530(lVar1 + 0x120,param_5,0xfffffffffffffffc);
  (**(code **)(*param_1 + 0x80))(param_1,L"input",lVar1);
  FUN_00a5d220(param_1,L"select",lVar1);
  lVar1 = FUN_00a5d220(param_1,L"textarea",lVar1);
  if (*PTR_DAT_02004eb0 == '\0') {
    FUN_00468a10(lVar1 + 0x78,param_3);
  }
  else {
    FUN_00468a10(lVar1 + 0x78,L"Arial Unicode MS, Arial");
  }
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468530(lVar1 + 0x270,0,1);
  FUN_00468530(lVar1 + 0x240,0,1);
  FUN_00468530(lVar1 + 0x228,10,1);
  FUN_00468530(lVar1 + 600,10,1);
  (**(code **)(*param_1 + 0x80))(param_1,&PTR_s_uiredHRB_00a5e980,lVar1);
  iVar4 = 1;
  do {
    lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
    if (iVar4 == 1) {
      FUN_00468a10(lVar1 + 0x90,&DAT_00a5e994);
    }
    else if (iVar4 == 2) {
      FUN_00468a10(lVar1 + 0x90,L"1.5em");
    }
    else if (iVar4 == 3) {
      FUN_00468a10(lVar1 + 0x90,L"1.17em");
    }
    else {
      FUN_00468a10(lVar1 + 0x90,&DAT_00a5e9c0);
    }
    if (iVar4 == 4) {
      FUN_00468a10(lVar1 + 0x228,L"1.67em");
    }
    else if (iVar4 == 5) {
      FUN_00468a10(lVar1 + 0x228,L"1.5em");
    }
    else if (iVar4 == 6) {
      FUN_00468a10(lVar1 + 0x228,L"1.12em");
    }
    else {
      FUN_00468530(lVar1 + 0x228,0x13,1);
    }
    FUN_00461840(lVar1 + 600,lVar1 + 0x228);
    FUN_00468a10(lVar1 + 0xc0,L"bolder");
    FUN_0043f750(&local_40,iVar4);
    FUN_00416ba0(&local_38,&DAT_00a5ea28,local_40);
    FUN_009ec420(local_30,local_38);
    (**(code **)(*param_1 + 0x80))(param_1,local_30[0],lVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 7);
  lVar1 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
  FUN_00468a10(lVar1 + 0xa8,L"none");
  FUN_00468530(lVar1 + 0x138,0xffff,2);
  FUN_00468530(lVar1 + 0x120,0,1);
  (**(code **)(*param_1 + 0x80))(param_1,L"mark",lVar1);
  lVar1 = FUN_00a525d0(&PTR_FUN_00a4ffc0,1,(char)param_1[0x12]);
  FUN_00468a10(lVar1 + 0x3d8,L"dotted");
  FUN_00468a10(lVar1 + 0x318,&DAT_00a5ea6c);
  (**(code **)(*param_1 + 0x80))(param_1,L"abbr",lVar1);
  FUN_00a5d220(param_1,L"acronym",lVar1);
  FUN_00414560(&local_40,3);
  return;
}

