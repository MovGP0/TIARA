/* Ghidra address: 00d449d0 */
/* Ghidra symbol: FUN_00d449d0 */


void FUN_00d449d0(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x80) == 0) && (*(short *)(param_2 + 8) == 1)) {
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x10);
  }
  else if ((*(longlong *)(param_1 + 0x88) == 0) && (*(short *)(param_2 + 8) == 1)) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}

