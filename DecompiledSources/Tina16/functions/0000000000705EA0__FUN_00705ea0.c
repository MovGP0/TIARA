/* Ghidra address: 00705ea0 */
/* Ghidra symbol: FUN_00705ea0 */


void FUN_00705ea0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x540) != param_2) {
    *(char *)(param_1 + 0x540) = param_2;
    FUN_00705d00();
  }
  return;
}

