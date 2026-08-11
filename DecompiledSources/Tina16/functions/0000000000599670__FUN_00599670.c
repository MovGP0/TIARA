/* Ghidra address: 00599670 */
/* Ghidra symbol: FUN_00599670 */


void FUN_00599670(longlong *param_1,uint param_2,undefined4 param_3)

{
  undefined8 local_20;
  
  if (*(uint *)(param_1 + 1) <= param_2) {
    FUN_00594f90();
  }
  local_20 = *(undefined8 *)(*param_1 + (longlong)(int)param_2 * 8);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (longlong)(int)(param_2 + 1) * 8,*param_1 + (longlong)(int)param_2 * 8,
                 (longlong)(int)((*(uint *)(param_1 + 1) - param_2) * 8));
  }
  *(undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8) = 0;
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],&local_20,param_3);
  }
  return;
}

