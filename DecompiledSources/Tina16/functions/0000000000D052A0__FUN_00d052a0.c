/* Ghidra address: 00d052a0 */
/* Ghidra symbol: FUN_00d052a0 */


void FUN_00d052a0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0xa8));
  return;
}

