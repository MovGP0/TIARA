/* Ghidra address: 014a2d70 */
/* Ghidra symbol: FUN_014a2d70 */


void FUN_014a2d70(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_963 [981];
  undefined8 local_58e;
  undefined8 uStack_586;
  undefined2 uStack_57e;
  byte bStack_57c;
  undefined8 local_2b;
  undefined8 uStack_23;
  undefined2 uStack_1b;
  byte local_19;
  
  FUN_00417580(local_963,&DAT_01d0d0b8);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_963,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_963,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_01d31180(*param_1,0xf284,0x12,0x13);
    local_2b = local_58e;
    uStack_23 = uStack_586;
    uStack_1b = uStack_57e;
    local_19 = bStack_57c;
    FUN_01d311c0(*param_1,&local_2b,0x13);
  }
  else {
    FUN_01d31180(*param_1,0xf284,0x11,0x13);
    local_2b = local_58e;
    uStack_23 = uStack_586;
    uStack_1b = uStack_57e;
    local_19 = bStack_57c;
    if (*(char *)(*param_1 + 0x78) == '\x01') {
      local_19 = FUN_00b905e0(0,bStack_57c - 1);
    }
    FUN_01d311c0(*param_1,&local_2b,0x13);
  }
  iVar2 = FUN_01d31a40(*param_1);
  if (iVar2 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_963,&DAT_01d0d0b8);
  return;
}

