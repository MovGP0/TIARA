/* Ghidra address: 00a412b0 */
/* Ghidra symbol: FUN_00a412b0 */


void FUN_00a412b0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00a415d0(param_1,param_1 + 8);
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

