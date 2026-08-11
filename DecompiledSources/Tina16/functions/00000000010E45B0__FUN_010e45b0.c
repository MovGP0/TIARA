/* Ghidra address: 010e45b0 */
/* Ghidra symbol: FUN_010e45b0 */


bool FUN_010e45b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x880);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = lVar1;
  }
  return lVar1 == 0;
}

