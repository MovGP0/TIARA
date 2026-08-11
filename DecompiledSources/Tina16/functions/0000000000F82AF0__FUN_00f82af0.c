/* Ghidra address: 00f82af0 */
/* Ghidra symbol: FUN_00f82af0 */


void FUN_00f82af0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(int *)(param_1 + 0x18) != 0) {
    thunk_FUN_0417aa68(*(int *)(param_1 + 0x18));
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    thunk_FUN_041d2921(*(longlong *)(param_1 + 0x20));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

