/* Ghidra address: 00a33890 */
/* Ghidra symbol: FUN_00a33890 */


void FUN_00a33890(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x18),*(int *)(param_1 + 0x10) * 8);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

