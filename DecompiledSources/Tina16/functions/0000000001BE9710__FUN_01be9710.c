/* Ghidra address: 01be9710 */
/* Ghidra symbol: FUN_01be9710 */


void FUN_01be9710(longlong param_1,longlong param_2)

{
  *(bool *)(param_1 + 0x628) = *(short *)(param_2 + 8) == 0x12;
  FUN_01be4bd0();
  return;
}

