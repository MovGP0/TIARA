/* Ghidra address: 017ae490 */
/* Ghidra symbol: FUN_017ae490 */


void FUN_017ae490(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    thunk_FUN_0416f828(*(longlong *)(param_1 + 0x90));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

