/* Ghidra address: 00d04670 */
/* Ghidra symbol: FUN_00d04670 */


void FUN_00d04670(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0xe8));
  return;
}

