/* Ghidra address: 004b5360 */
/* Ghidra symbol: FUN_004b5360 */


void FUN_004b5360(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x32) & 8) == 0) {
    FUN_0043e420(param_2,param_3);
  }
  else {
    FUN_0043e6d0(param_2,param_3);
  }
  return;
}

