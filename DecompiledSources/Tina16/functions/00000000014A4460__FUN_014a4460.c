/* Ghidra address: 014a4460 */
/* Ghidra symbol: FUN_014a4460 */


void FUN_014a4460(longlong *param_1)

{
  int iVar1;
  undefined1 local_960 [1970];
  undefined8 local_1ae;
  undefined8 uStack_1a6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_00417580(local_960,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf28f,0x10,0x10);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_960,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_960,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  local_28 = local_1ae;
  uStack_20 = uStack_1a6;
  FUN_01d311c0(*param_1,&local_28,0x10);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_960,&DAT_01d0d0b8);
  return;
}

