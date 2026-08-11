/* Ghidra address: 006149b0 */
/* Ghidra symbol: FUN_006149b0 */


void FUN_006149b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00614650(*(longlong *)(param_1 + 8),param_1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

