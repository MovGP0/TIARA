/* Ghidra address: 005952e0 */
/* Ghidra symbol: FUN_005952e0 */


void FUN_005952e0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 local_20;
  
  if (*(uint *)(param_1 + 1) <= param_3) {
    FUN_00594f90();
  }
  if (param_1[4] == 0) {
    *(undefined8 *)(*param_1 + (longlong)(int)param_3 * 8) = *param_2;
  }
  else {
    local_20 = *(undefined8 *)(*param_1 + (longlong)(int)param_3 * 8);
    *(undefined8 *)(*param_1 + (longlong)(int)param_3 * 8) = *param_2;
    (*(code *)param_1[4])(param_1[3],&local_20,5);
    (*(code *)param_1[4])(param_1[3],param_2,1);
  }
  return;
}

