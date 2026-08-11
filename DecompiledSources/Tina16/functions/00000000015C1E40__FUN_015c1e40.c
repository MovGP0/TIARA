/* Ghidra address: 015c1e40 */
/* Ghidra symbol: FUN_015c1e40 */


void FUN_015c1e40(longlong param_1,longlong param_2)

{
  if (param_2 < 0x10000) {
    *(undefined8 *)(param_1 + 0x20) = 0x10000;
  }
  else {
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  return;
}

