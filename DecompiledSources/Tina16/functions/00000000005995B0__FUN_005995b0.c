/* Ghidra address: 005995b0 */
/* Ghidra symbol: FUN_005995b0 */


void FUN_005995b0(longlong *param_1,uint param_2,undefined4 param_3)

{
  undefined4 local_1c;
  
  if (*(uint *)(param_1 + 1) <= param_2) {
    FUN_00594f90();
  }
  local_1c = *(undefined4 *)(*param_1 + (longlong)(int)param_2 * 4);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (longlong)(int)(param_2 + 1) * 4,*param_1 + (longlong)(int)param_2 * 4,
                 (longlong)(int)((*(uint *)(param_1 + 1) - param_2) * 4));
  }
  *(undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4) = 0;
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],&local_1c,param_3);
  }
  return;
}

