/* Ghidra address: 0104fe00 */
/* Ghidra symbol: FUN_0104fe00 */


void FUN_0104fe00(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00414ad0(param_1 + 0x9b0,L"PIC16F877");
  *(undefined8 *)(param_1 + 0x9b8) = 0x412e848000000000;
  *(undefined4 *)(param_1 + 0x9a4) = 0x20;
  *PTR_DAT_02002068 = 1;
  PTR_DAT_02002068[1] = 1;
  PTR_DAT_02002068[2] = 1;
  PTR_DAT_02002068[3] = 0;
  *(undefined4 *)(PTR_DAT_02002068 + 4) = 0xc6c68c;
  *(undefined4 *)(PTR_DAT_02002068 + 0xc) = 0x17ffff;
  *(undefined4 *)(PTR_DAT_02002068 + 8) = 0x6c6c37;
  *(undefined4 *)(PTR_DAT_02002068 + 0x10) = 0;
  *(undefined4 *)(PTR_DAT_02002068 + 0x14) = 0xdcdcdc;
  *(undefined4 *)(PTR_DAT_02002068 + 0x18) = 0xff;
  *(undefined8 *)(PTR_DAT_02002068 + 0x20) = 0x3ffb333333333333;
  *(undefined4 *)(PTR_DAT_02002068 + 0x28) = 2;
  *(undefined4 *)(PTR_DAT_02002068 + 0x30) = 2;
  *(undefined4 *)(PTR_DAT_02002068 + 0x2c) = 1;
  *(undefined4 *)(PTR_DAT_02002068 + 0x34) = 3;
  *(undefined4 *)(PTR_DAT_02002068 + 0x38) = 8;
  *(undefined4 *)(PTR_DAT_02002068 + 0x3c) = 8;
  *(undefined4 *)(PTR_DAT_02002068 + 0x40) = 10;
  *(undefined4 *)(PTR_DAT_02002068 + 0x44) = 10;
  FUN_00414ad0(PTR_DAT_02002068 + 0x48,L"test1");
  *(undefined8 *)(param_1 + 0x998) = 0;
  FUN_00414ad0(param_1 + 0x8d0,L"noname");
  FUN_00414480(param_1 + 0x8d8);
  *(undefined4 *)PTR_DAT_02004378 = 0xffffffff;
  FUN_00414480(PTR_DAT_02005370);
  FUN_00416ba0(&local_20,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  cVar1 = FUN_00440b00(local_20,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_18,*(undefined8 *)PTR_DAT_020049a0,L"\\Edison5\\Examples");
  }
  else {
    FUN_00414b50(&local_18,local_20);
  }
  FUN_00414ad0(*(longlong *)(param_1 + 0x718) + 0xe0,L"TINA Flowchart file (*.tfc)|*.tfc");
  FUN_00414ad0(*(longlong *)(param_1 + 0x718) + 0x100,&DAT_0105032c);
  FUN_00724420(*(undefined8 *)(param_1 + 0x718),local_18);
  FUN_00724380(*(undefined8 *)(param_1 + 0x718),0);
  FUN_00414ad0(*(longlong *)(param_1 + 0x710) + 0xe0,L"TINA Flowchart file (*.tfc)|*.tfc");
  FUN_00414ad0(*(longlong *)(param_1 + 0x710) + 0x100,&DAT_0105032c);
  FUN_00724420(*(undefined8 *)(param_1 + 0x710),local_18);
  FUN_00724380(*(undefined8 *)(param_1 + 0x710),0);
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x988) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x990) = uVar3;
  uVar3 = FUN_00410e60(&DAT_00f76448,1);
  *(undefined8 *)(param_1 + 0x978) = uVar3;
  FUN_00f76670(uVar3,*(undefined8 *)(param_1 + 0x988),*(undefined8 *)(param_1 + 0x990));
  uVar3 = FUN_00f627f0(&DAT_00f613b8,1);
  *(undefined8 *)(param_1 + 0x980) = uVar3;
  FUN_00f76680(*(undefined8 *)(param_1 + 0x978),uVar3);
  *(longlong *)(*(longlong *)(param_1 + 0x980) + 8) = param_1;
  *(undefined8 *)(param_1 + 0x900) = 0x3fe6666666666666;
  uVar3 = FUN_00f62a70(*(undefined8 *)(param_1 + 0x980));
  uVar2 = FUN_00f74a00(uVar3);
  *(undefined4 *)(param_1 + 0x90c) = uVar2;
  uVar3 = FUN_00f62a70(*(undefined8 *)(param_1 + 0x980));
  uVar2 = FUN_00f74a70(uVar3);
  *(undefined4 *)(param_1 + 0x908) = uVar2;
  FUN_0104fc70();
  FUN_01051360(param_1);
  FUN_01051600(param_1);
  *(undefined8 *)(param_1 + 0x948) = 0x3f50624dd2f1a9fc;
  FUN_00414560(&local_20,3);
  return;
}

