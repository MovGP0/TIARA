/* Ghidra address: 004b5450 */
/* Ghidra symbol: FUN_004b5450 */


void FUN_004b5450(longlong *param_1,int param_2,longlong param_3)

{
  int local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  if (param_3 == 0) {
    if (-1 < param_2) {
      (**(code **)(*param_1 + 0x98))(param_1,param_2);
    }
  }
  else {
    local_3c = param_2;
    if (param_2 < 0) {
      local_3c = (**(code **)(*param_1 + 0x78))(param_1,0);
    }
    FUN_004b3cf0(param_1,&local_28,local_3c);
    FUN_00416780(&local_30,(short)param_1[6]);
    FUN_00416cd0(local_20,3,local_28,local_30,param_3);
    (**(code **)(*param_1 + 0x40))(param_1,local_3c,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  return;
}

