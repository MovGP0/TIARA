/* Ghidra address: 00bd3d20 */
/* Ghidra symbol: FUN_00bd3d20 */


void FUN_00bd3d20(longlong param_1,int *param_2)

{
  if (*param_2 < 2) {
    FUN_004aee50(*(undefined8 *)(param_1 + 8),param_2,0);
    FUN_00410f20(*(undefined8 *)(param_2 + 2));
    FUN_004095f0(param_2);
  }
  else {
    *param_2 = *param_2 + -1;
  }
  return;
}

