/* Ghidra address: 004194b0 */
/* Ghidra symbol: FUN_004194b0 */


void FUN_004194b0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  if ((param_2 == 0) || (-1 < *(int *)(param_2 + -0xc))) {
    FUN_00419500(param_2);
    FUN_00419430(param_1,param_3);
    *param_1 = param_2;
  }
  else {
    FUN_004192a0(param_1,param_2,param_3);
  }
  return;
}

