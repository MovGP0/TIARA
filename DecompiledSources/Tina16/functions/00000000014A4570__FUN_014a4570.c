/* Ghidra address: 014a4570 */
/* Ghidra symbol: FUN_014a4570 */


void FUN_014a4570(longlong *param_1)

{
  int iVar1;
  undefined1 local_947 [1991];
  undefined2 local_180;
  undefined2 local_17e;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined2 local_f;
  undefined2 local_d;
  undefined2 local_b;
  undefined1 local_9;
  
  FUN_00417580(local_947,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf290,0x10,7);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_947,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_947,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  local_f = local_180;
  local_d = local_17e;
  local_b = local_17c;
  local_9 = local_17a;
  FUN_01d311c0(*param_1,&local_f,7);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_947,&DAT_01d0d0b8);
  return;
}

