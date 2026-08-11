/* Ghidra address: 00abed90 */
/* Ghidra symbol: FUN_00abed90 */


void FUN_00abed90(longlong param_1)

{
  longlong lVar1;
  
  FUN_00ac3af0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (*(char *)(lVar1 + 0xa9) == '\0') {
    FUN_0064e6f0(lVar1);
  }
  else {
    FUN_0064e700(lVar1);
  }
  return;
}

