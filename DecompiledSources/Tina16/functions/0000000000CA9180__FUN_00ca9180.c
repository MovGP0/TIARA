/* Ghidra address: 00ca9180 */
/* Ghidra symbol: FUN_00ca9180 */


void FUN_00ca9180(longlong param_1,longlong param_2,char param_3)

{
  if ((param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x80))) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  FUN_004d2dc0();
  return;
}

