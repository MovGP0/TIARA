/* Ghidra address: 0135af50 */
/* Ghidra symbol: FUN_0135af50 */


void FUN_0135af50(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_2);
  FUN_00414630(local_res18);
  FUN_00414630(local_res20);
  if (param_5 < 1) {
    FUN_004155b0(&local_res18,local_res20);
  }
  else {
    FUN_00415b50(&local_res18,param_5,param_6);
    FUN_00415bd0(local_res20,&local_res18,param_5);
  }
  FUN_00416880(local_30,local_res10);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                    (*(longlong **)(param_1 + 8),local_30[0]);
  if (iVar1 < 0) {
    iVar1 = 0;
    if (local_res18 != 0) {
      iVar1 = *(int *)(local_res18 + -4);
    }
    local_20[0] = FUN_00409570((longlong)(iVar1 + 1));
    FUN_004425e0(local_20[0],local_res18);
    FUN_00416880(&local_38,local_res10);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
              (*(longlong **)(param_1 + 8),local_38,local_20[0]);
  }
  else {
    local_20[0] = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),iVar1);
    iVar2 = 0;
    if (local_res18 != 0) {
      iVar2 = *(int *)(local_res18 + -4);
    }
    FUN_00409620(local_20,(longlong)(iVar2 + 1));
    FUN_004425e0(local_20[0],local_res18);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
              (*(longlong **)(param_1 + 8),iVar1,local_20[0]);
  }
  FUN_00414560(&local_38,2);
  FUN_00414590(&local_res10,3);
  return;
}

