/* Ghidra address: 01449410 */
/* Ghidra symbol: FUN_01449410 */


void FUN_01449410(undefined8 *param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_1;
  uStack_30 = param_1[1];
  local_48 = *param_2;
  local_40 = param_2[1];
  if (1e-100 <= local_48 * local_48 + local_40 * local_40) {
    FUN_00c44790(&local_38,&local_48,param_3);
  }
  else {
    FUN_00ef4260(0xd,param_4);
    FUN_01449400(param_3,0,0);
  }
  return;
}

