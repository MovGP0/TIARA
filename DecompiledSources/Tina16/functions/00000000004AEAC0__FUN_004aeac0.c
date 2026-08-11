/* Ghidra address: 004aeac0 */
/* Ghidra symbol: FUN_004aeac0 */


undefined8 FUN_004aeac0(undefined8 *param_1,uint param_2)

{
  if (*(uint *)(param_1 + 2) <= param_2) {
    FUN_004ae960(*param_1,PTR_PTR_02004940,(longlong)(int)param_2);
  }
  return *(undefined8 *)(param_1[1] + (longlong)(int)param_2 * 8);
}

