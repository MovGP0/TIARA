/* Ghidra address: 014a3110 */
/* Ghidra symbol: FUN_014a3110 */


void FUN_014a3110(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_980;
  short local_978;
  undefined1 local_975 [1046];
  undefined2 local_55f;
  undefined8 local_55d;
  undefined8 local_555;
  longlong local_54d;
  undefined1 local_545;
  undefined2 local_3d;
  undefined8 local_3b;
  undefined8 local_33;
  undefined2 local_2b;
  undefined8 local_29;
  undefined8 local_21;
  undefined1 local_19;
  
  FUN_00417580(local_975,&DAT_01d0d0b8);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_975,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_975,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (local_54d == 0) {
      local_978 = 0;
    }
    else {
      local_978 = *(short *)(local_54d + 0x10);
    }
    FUN_01d31180(*param_1,0xf286,0x11,local_978 * 8 + 0x15);
    local_2b = local_55f;
    local_29 = local_55d;
    local_21 = local_555;
    local_19 = local_545;
    FUN_01d311c0(*param_1,&local_2b,0x13);
    FUN_01d311c0(*param_1,&local_978,2);
    iVar3 = (int)local_978;
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_980 = FUN_01d0f3b0(local_54d,iVar2);
        FUN_01d311c0(*param_1,&local_980,8);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    FUN_01d31180(*param_1,0xf286,0x10,0x12);
    local_3d = local_55f;
    local_3b = local_55d;
    local_33 = local_555;
    FUN_01d311c0(*param_1,&local_3d,0x12);
  }
  iVar2 = FUN_01d31a40(*param_1);
  if (iVar2 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_975,&DAT_01d0d0b8);
  return;
}

