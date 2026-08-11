/* Ghidra address: 00595380 */
/* Ghidra symbol: FUN_00595380 */


void FUN_00595380(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(uint *)(param_1 + 1) <= param_3) {
    FUN_00594f90();
  }
  if (param_1[4] == 0) {
    FUN_0041b840(*param_1 + (longlong)(int)param_3 * 8,*param_2);
  }
  else {
    FUN_0041b840(local_20,*(undefined8 *)(*param_1 + (longlong)(int)param_3 * 8));
    FUN_0041b840(*param_1 + (longlong)(int)param_3 * 8,*param_2);
    (*(code *)param_1[4])(param_1[3],local_20,5);
    (*(code *)param_1[4])(param_1[3],param_2,1);
  }
  FUN_0041b800(local_20);
  return;
}

