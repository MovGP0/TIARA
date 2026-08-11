/* Ghidra address: 00cb3540 */
/* Ghidra symbol: FUN_00cb3540 */


void FUN_00cb3540(longlong param_1,undefined8 param_2)

{
  FUN_00414ad0(param_1 + 0x138,param_2);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_00414ad0(*(longlong *)(param_1 + 0x128) + 0x160,param_2);
  }
  return;
}

