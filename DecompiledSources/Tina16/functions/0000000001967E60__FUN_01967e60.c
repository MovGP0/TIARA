/* Ghidra address: 01967e60 */
/* Ghidra symbol: FUN_01967e60 */


void FUN_01967e60(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_004d2dc0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x1a8))) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  return;
}

