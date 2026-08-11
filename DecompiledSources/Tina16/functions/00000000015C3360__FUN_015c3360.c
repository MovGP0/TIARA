/* Ghidra address: 015c3360 */
/* Ghidra symbol: FUN_015c3360 */


void FUN_015c3360(longlong param_1)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_015c2df0();
  local_c = 0;
  if (-1 < iVar1 + -1) {
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x82 + (longlong)local_c * 0x90) = 0;
      local_c = local_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

