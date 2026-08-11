/* Ghidra address: 00f8a3b0 */
/* Ghidra symbol: FUN_00f8a3b0 */


void FUN_00f8a3b0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x50),*(int *)(param_1 + 0x34) * 4);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x58),*(int *)(param_1 + 0x3c) * 8);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

