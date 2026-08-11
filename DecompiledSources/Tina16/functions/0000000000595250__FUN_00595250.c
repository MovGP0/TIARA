/* Ghidra address: 00595250 */
/* Ghidra symbol: FUN_00595250 */


void FUN_00595250(longlong *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 local_1c;
  
  if (*(uint *)(param_1 + 1) <= param_3) {
    FUN_00594f90();
  }
  if (param_1[4] == 0) {
    *(undefined4 *)(*param_1 + (longlong)(int)param_3 * 4) = *param_2;
  }
  else {
    local_1c = *(undefined4 *)(*param_1 + (longlong)(int)param_3 * 4);
    *(undefined4 *)(*param_1 + (longlong)(int)param_3 * 4) = *param_2;
    (*(code *)param_1[4])(param_1[3],&local_1c,5);
    (*(code *)param_1[4])(param_1[3],param_2,1);
  }
  return;
}

