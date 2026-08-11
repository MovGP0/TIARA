/* Ghidra address: 00599430 */
/* Ghidra symbol: FUN_00599430 */


void FUN_00599430(longlong *param_1,uint param_2,undefined4 param_3)

{
  undefined1 local_19;
  
  if (*(uint *)(param_1 + 1) <= param_2) {
    FUN_00594f90();
  }
  local_19 = *(undefined1 *)(*param_1 + (longlong)(int)param_2);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (longlong)(int)(param_2 + 1),*param_1 + (longlong)(int)param_2,
                 (longlong)(int)(*(uint *)(param_1 + 1) - param_2));
  }
  *(undefined1 *)(*param_1 + (longlong)(int)param_1[1]) = 0;
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],&local_19,param_3);
  }
  return;
}

