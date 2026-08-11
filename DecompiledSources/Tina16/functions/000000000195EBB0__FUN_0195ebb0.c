/* Ghidra address: 0195ebb0 */
/* Ghidra symbol: FUN_0195ebb0 */


void FUN_0195ebb0(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_0195a5c0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x2d8))) {
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  return;
}

