/* Ghidra address: 00595110 */
/* Ghidra symbol: FUN_00595110 */


void FUN_00595110(longlong *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 local_19;
  
  if (*(uint *)(param_1 + 1) <= param_3) {
    FUN_00594f90();
  }
  if (param_1[4] == 0) {
    *(undefined1 *)(*param_1 + (longlong)(int)param_3) = *param_2;
  }
  else {
    local_19 = *(undefined1 *)(*param_1 + (longlong)(int)param_3);
    *(undefined1 *)(*param_1 + (longlong)(int)param_3) = *param_2;
    (*(code *)param_1[4])(param_1[3],&local_19,5);
    (*(code *)param_1[4])(param_1[3],param_2,1);
  }
  return;
}

