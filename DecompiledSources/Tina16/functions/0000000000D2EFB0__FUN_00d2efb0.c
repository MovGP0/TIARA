/* Ghidra address: 00d2efb0 */
/* Ghidra symbol: FUN_00d2efb0 */


void FUN_00d2efb0(void)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 uVar5;
  undefined8 local_8040;
  undefined8 local_8038;
  undefined8 local_8030;
  undefined8 local_8028;
  undefined1 local_801c [4];
  undefined1 local_8018 [6];
  undefined1 local_8012 [2];
  undefined2 local_8010;
  undefined2 local_800e;
  undefined2 local_800c;
  undefined2 local_800a;
  undefined1 local_8008 [28672];
  undefined1 auStack_1008 [4096];
  ulonglong uVar4;
  
  uVar4 = 0xf70;
  do {
    uVar3 = uVar4 - 0x1000;
    auStack_1008[uVar4] = (char)uVar3;
    uVar4 = uVar3;
  } while (0xffffffffffff7f70 < uVar3);
  local_8040 = 0;
  local_8038 = 0;
  local_8030 = 0;
  local_8028 = 0;
  FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_8030);
  FUN_00441640(&local_8028,local_8030);
  local_800a = 0x8439;
  local_800c = 0x4b74;
  local_800e = 0xbb31;
  local_8010 = 0xbb74;
  FUN_00416ba0(&local_8038,local_8028,L"\\Rockey4ND_X64.dll");
  cVar1 = FUN_00440a20(local_8038,1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_8040,local_8028,L"\\Rockey4ND_X64.dll");
    uVar5 = FUN_00416740(local_8040);
    DAT_0201a0f8 = thunk_FUN_04163be6(uVar5);
  }
  if (DAT_0201a0f8 != 0) {
    DAT_0201a0e8 = (code *)FUN_00427c10(DAT_0201a0f8,L"Rockey");
    sVar2 = (*DAT_0201a0e8)(1,local_8012,local_8018,local_801c,&local_800a,&local_800c,&local_800e,
                            &local_8010,local_8008);
    if (sVar2 == 0) {
      DAT_0201a0d8 = 3;
    }
  }
  FUN_00414560(&local_8040,4);
  return;
}

