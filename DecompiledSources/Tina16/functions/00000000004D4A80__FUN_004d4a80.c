/* Ghidra address: 004d4a80 */
/* Ghidra symbol: FUN_004d4a80 */


void FUN_004d4a80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (param_2 != lVar1) {
    if (lVar1 != 0) {
      FUN_004d4ed0(lVar1,param_1);
    }
    *(longlong *)(param_1 + 0x18) = param_2;
    if (param_2 != 0) {
      FUN_004d4ea0(param_2,param_1);
    }
  }
  return;
}

