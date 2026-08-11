/* Ghidra address: 00b10e00 */
/* Ghidra symbol: FUN_00b10e00 */


void FUN_00b10e00(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60c) = param_2;
  if (*(longlong *)(param_1 + 0x628) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x628) + 0x534) = param_2;
  }
  return;
}

