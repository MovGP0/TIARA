/* Ghidra address: 00f810e0 */
/* Ghidra symbol: FUN_00f810e0 */


void FUN_00f810e0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x20));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

