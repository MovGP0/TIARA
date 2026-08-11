/* Ghidra address: 007222b0 */
/* Ghidra symbol: FUN_007222b0 */


void FUN_007222b0(longlong param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  *(undefined4 *)(param_2 + 8) = 0x90000000;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x498);
  return;
}

