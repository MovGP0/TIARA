/* Ghidra address: 018318a0 */
/* Ghidra symbol: FUN_018318a0 */


void FUN_018318a0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x88) == param_2) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else if (*(longlong *)(param_1 + 0x90) == param_2) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}

