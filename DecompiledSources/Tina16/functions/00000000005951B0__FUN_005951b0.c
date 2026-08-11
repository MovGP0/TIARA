/* Ghidra address: 005951b0 */
/* Ghidra symbol: FUN_005951b0 */


void FUN_005951b0(longlong *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 local_1a;
  
  if (*(uint *)(param_1 + 1) <= param_3) {
    FUN_00594f90();
  }
  if (param_1[4] == 0) {
    *(undefined2 *)(*param_1 + (longlong)(int)param_3 * 2) = *param_2;
  }
  else {
    local_1a = *(undefined2 *)(*param_1 + (longlong)(int)param_3 * 2);
    *(undefined2 *)(*param_1 + (longlong)(int)param_3 * 2) = *param_2;
    (*(code *)param_1[4])(param_1[3],&local_1a,5);
    (*(code *)param_1[4])(param_1[3],param_2,1);
  }
  return;
}

