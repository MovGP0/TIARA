/* Ghidra address: 00c8d5f0 */
/* Ghidra symbol: FUN_00c8d5f0 */


void FUN_00c8d5f0(longlong param_1,longlong param_2,char param_3)

{
  if ((param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0xe8))) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  FUN_004d2dc0();
  return;
}

