/* Ghidra address: 0055b9e0 */
/* Ghidra symbol: FUN_0055b9e0 */


void FUN_0055b9e0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_0055b820(*(longlong *)(param_1 + 8));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

