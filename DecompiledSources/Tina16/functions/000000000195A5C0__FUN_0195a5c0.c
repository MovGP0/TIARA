/* Ghidra address: 0195a5c0 */
/* Ghidra symbol: FUN_0195a5c0 */


void FUN_0195a5c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_004d2dc0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x1b0))) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  return;
}

