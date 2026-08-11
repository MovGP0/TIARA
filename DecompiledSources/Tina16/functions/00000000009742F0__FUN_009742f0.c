/* Ghidra address: 009742f0 */
/* Ghidra symbol: FUN_009742f0 */


void FUN_009742f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_004d2dc0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x80))) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}

