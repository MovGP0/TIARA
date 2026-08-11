/* Ghidra address: 00cb1ce0 */
/* Ghidra symbol: FUN_00cb1ce0 */


void FUN_00cb1ce0(longlong param_1,longlong param_2,char param_3)

{
  if ((param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x110))) {
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  FUN_00c8d5f0();
  return;
}

