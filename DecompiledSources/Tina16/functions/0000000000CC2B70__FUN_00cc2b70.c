/* Ghidra address: 00cc2b70 */
/* Ghidra symbol: FUN_00cc2b70 */


void FUN_00cc2b70(longlong param_1,longlong param_2,char param_3)

{
  if ((param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0xf0))) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  FUN_00c8d5f0();
  return;
}

