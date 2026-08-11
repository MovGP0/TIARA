/* Ghidra address: 014a3c40 */
/* Ghidra symbol: FUN_014a3c40 */


void FUN_014a3c40(longlong *param_1)

{
  int iVar1;
  undefined1 local_95a [1435];
  undefined8 local_3bf;
  undefined2 uStack_3b7;
  undefined8 local_22;
  undefined2 uStack_1a;
  
  FUN_00417580(local_95a,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf28a,0x11,10);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_95a,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_95a,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  local_22 = local_3bf;
  uStack_1a = uStack_3b7;
  FUN_01d311c0(*param_1,&local_22,10);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_95a,&DAT_01d0d0b8);
  return;
}

