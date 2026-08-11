/* Ghidra address: 00bc52e0 */
/* Ghidra symbol: FUN_00bc52e0 */


void FUN_00bc52e0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x180));
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x188));
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 400));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

