/* Ghidra address: 00c21a70 */
/* Ghidra symbol: FUN_00c21a70 */


void FUN_00c21a70(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00c21c50(param_1,param_1 + 8);
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

