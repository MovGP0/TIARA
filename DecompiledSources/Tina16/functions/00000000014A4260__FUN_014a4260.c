/* Ghidra address: 014a4260 */
/* Ghidra symbol: FUN_014a4260 */


void FUN_014a4260(longlong *param_1)

{
  int iVar1;
  undefined1 local_941 [1969];
  undefined1 local_190;
  undefined1 local_9;
  
  FUN_00417580(local_941,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf28d,0x10,1);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_941,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_941,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  local_9 = local_190;
  FUN_01d311c0(*param_1,&local_9,1);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_941,&DAT_01d0d0b8);
  return;
}

