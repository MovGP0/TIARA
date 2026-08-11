/* Ghidra address: 01be9730 */
/* Ghidra symbol: FUN_01be9730 */


void FUN_01be9730(longlong param_1,longlong param_2)

{
  *(bool *)(param_1 + 0x628) = *(short *)(param_2 + 8) == 0x12;
  FUN_00659a00();
  return;
}

