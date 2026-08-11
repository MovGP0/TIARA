/* Ghidra address: 005994f0 */
/* Ghidra symbol: FUN_005994f0 */


void FUN_005994f0(longlong *param_1,uint param_2,undefined4 param_3)

{
  undefined2 local_1a;
  
  if (*(uint *)(param_1 + 1) <= param_2) {
    FUN_00594f90();
  }
  local_1a = *(undefined2 *)(*param_1 + (longlong)(int)param_2 * 2);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (longlong)(int)(param_2 + 1) * 2,*param_1 + (longlong)(int)param_2 * 2,
                 (longlong)(int)((*(uint *)(param_1 + 1) - param_2) * 2));
  }
  *(undefined2 *)(*param_1 + (longlong)(int)param_1[1] * 2) = 0;
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],&local_1a,param_3);
  }
  return;
}

