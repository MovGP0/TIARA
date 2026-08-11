/* Ghidra address: 018715d0 */
/* Ghidra symbol: FUN_018715d0 */


undefined8 * FUN_018715d0(longlong param_1,undefined8 *param_2)

{
  if ((*(int *)(param_1 + 0x98) == 0) && (*(int *)(param_1 + 0x9c) == 0)) {
    FUN_0197c110(param_1,param_2);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x90);
    param_2[1] = *(undefined8 *)(param_1 + 0x98);
  }
  return param_2;
}

