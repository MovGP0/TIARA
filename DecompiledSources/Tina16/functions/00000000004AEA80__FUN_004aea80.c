/* Ghidra address: 004aea80 */
/* Ghidra symbol: FUN_004aea80 */


undefined8 * FUN_004aea80(undefined8 *param_1)

{
  if (*(int *)(param_1 + 2) == *(int *)((longlong)param_1 + 0x14)) {
    (**(code **)*param_1)(param_1);
  }
  return param_1;
}

