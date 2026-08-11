/* Ghidra address: 012e2230 */
/* Ghidra symbol: FUN_012e2230 */


undefined8
FUN_012e2230(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,char param_5
            )

{
  longlong local_res20;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_14 = FUN_004170c0(local_res20,*param_3,1);
  local_14 = local_14 + -1;
  if (local_14 < 1) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,*param_3,1,local_14);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
    FUN_004579e0(param_2,&local_28);
    FUN_00414ad0(param_2,local_28);
    FUN_00457b10(param_2,&local_30);
    FUN_00414ad0(param_2,local_30);
    if (param_5 != '\0') {
      local_18 = 0;
      if (local_res20 != 0) {
        local_18 = *(int *)(local_res20 + -4);
      }
      FUN_00416e20(param_3,1,local_14 + local_18);
    }
  }
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res20);
  return param_2;
}

