/* Ghidra address: 017c5020 */
/* Ghidra symbol: FUN_017c5020 */


void FUN_017c5020(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x10));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

