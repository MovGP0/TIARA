/* Ghidra address: 00d2ede0 */
/* Ghidra symbol: FUN_00d2ede0 */


void FUN_00d2ede0(void)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar5;
  undefined8 local_8040;
  undefined8 local_8038;
  undefined8 local_8030 [2];
  undefined8 local_8020;
  undefined1 local_8014 [4];
  undefined2 local_8010;
  undefined2 local_800e;
  undefined2 local_800c;
  undefined2 local_800a;
  undefined1 local_8008 [28672];
  undefined1 auStack_1008 [4096];
  ulonglong uVar4;
  
  uVar4 = 0xf80;
  do {
    uVar3 = uVar4 - 0x1000;
    auStack_1008[uVar4] = (char)uVar3;
    uVar4 = uVar3;
  } while (0xffffffffffff7f80 < uVar3);
  local_8040 = 0;
  local_8038 = 0;
  local_8030[0] = 0;
  local_8020 = 0;
  FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,local_8030);
  FUN_00441640(&local_8020,local_8030[0]);
  local_800a = 0x5715;
  local_800c = 0x7656;
  local_800e = 0x4ff7;
  local_8010 = 0x5f53;
  FUN_00416ba0(&local_8038,local_8020,L"\\sparkey.dll");
  cVar1 = FUN_00440a20(local_8038,1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_8040,local_8020,L"\\sparkey.dll");
    uVar5 = FUN_00416740(local_8040);
    DAT_0201a0f0 = thunk_FUN_04163be6(uVar5);
    if (DAT_0201a0f0 != 0) {
      DAT_0201a0e0 = (code *)FUN_00427c10(DAT_0201a0f0,L"SparKey");
      iVar2 = (*DAT_0201a0e0)(1,&local_800a,&local_800c,&local_800e,&local_8010,local_8008,0,
                              local_8014);
      if (iVar2 == 0) {
        DAT_0201a0d8 = 2;
      }
    }
  }
  FUN_00414560(&local_8040,3);
  FUN_00414480(&local_8020);
  return;
}

