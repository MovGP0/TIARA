/* Ghidra address: 00595af0 */
/* Ghidra symbol: FUN_00595af0 */


void FUN_00595af0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(uint *)(param_1 + 1) <= param_3) {
    FUN_00594f90();
  }
  if (param_1[4] == 0) {
    FUN_00414bf0(*param_1 + (longlong)(int)param_3 * 8,*param_2);
  }
  else {
    FUN_00414c70(local_20,*(undefined8 *)(*param_1 + (longlong)(int)param_3 * 8));
    FUN_00414bf0(*param_1 + (longlong)(int)param_3 * 8,*param_2);
    (*(code *)param_1[4])(param_1[3],local_20,5);
    (*(code *)param_1[4])(param_1[3],param_2,1);
  }
  FUN_004144d0(local_20);
  return;
}

