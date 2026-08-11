/* Ghidra address: 00cb9da0 */
/* Ghidra symbol: FUN_00cb9da0 */


void FUN_00cb9da0(longlong param_1,longlong param_2,char param_3)

{
  if ((param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x1a0))) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  FUN_00cac300();
  return;
}

