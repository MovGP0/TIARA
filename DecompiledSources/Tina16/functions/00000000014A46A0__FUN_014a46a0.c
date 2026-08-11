/* Ghidra address: 014a46a0 */
/* Ghidra symbol: FUN_014a46a0 */


void FUN_014a46a0(longlong *param_1)

{
  int iVar1;
  undefined1 local_95e [2093];
  undefined8 local_131;
  undefined4 uStack_129;
  undefined2 uStack_125;
  undefined8 local_26;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  
  FUN_00417580(local_95e,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf291,0x10,0xe);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_95e,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_95e,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  local_26 = local_131;
  uStack_1e = uStack_129;
  uStack_1a = uStack_125;
  FUN_01d311c0(*param_1,&local_26,0xe);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_95e,&DAT_01d0d0b8);
  return;
}

