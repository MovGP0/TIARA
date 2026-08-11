/* Ghidra address: 014a4360 */
/* Ghidra symbol: FUN_014a4360 */


void FUN_014a4360(longlong *param_1)

{
  int iVar1;
  undefined1 local_942 [1986];
  undefined2 local_180;
  undefined2 local_a;
  
  FUN_00417580(local_942,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf28e,0x10,2);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_942,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_942,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  local_a = local_180;
  FUN_01d311c0(*param_1,&local_a,2);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_942,&DAT_01d0d0b8);
  return;
}

