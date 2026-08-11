/* Ghidra address: 0065b4d0 */
/* Ghidra symbol: FUN_0065b4d0 */


void FUN_0065b4d0(longlong param_1)

{
  longlong lVar1;
  
  do {
    lVar1 = param_1;
    param_1 = *(longlong *)(lVar1 + 0x78);
  } while (param_1 != 0);
  if (*(longlong *)(lVar1 + 0x358) == 0) {
    FUN_0065b870();
  }
  return;
}

