/* Ghidra address: 004b9bd0 */
/* Ghidra symbol: FUN_004b9bd0 */


void FUN_004b9bd0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != -1) {
    thunk_FUN_041d2921(*(longlong *)(param_1 + 8));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

