/* Ghidra address: 012edab0 */
/* Ghidra symbol: FUN_012edab0 */


undefined8
FUN_012edab0(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res20;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_50;
  undefined4 local_40;
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  local_30 = 0;
  FUN_00414b50(&local_38,local_res20);
  param_3 = param_3 + -1;
  local_2c = 1;
  if (0 < param_3) {
    do {
      iVar1 = FUN_004170c0(param_6,local_38,1);
      local_30 = local_30 + iVar1;
      uVar2 = FUN_004170c0(param_6,local_38,1);
      FUN_00416e20(&local_38,1,uVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00414480(local_20);
  FUN_00416dc0(local_20,local_res20,1,local_30);
  FUN_00414b50(&local_38,local_20[0]);
  FUN_00414480(local_20);
  local_40 = 0;
  if (local_res20 != 0) {
    local_40 = *(undefined4 *)(local_res20 + -4);
  }
  FUN_00414480(&local_28);
  FUN_00416dc0(&local_28,local_res20,local_30 + 2,local_40);
  local_68 = local_28;
  FUN_00416cd0(&local_38,3,local_38,param_5);
  FUN_00414480(&local_28);
  FUN_00414ad0(param_2,local_38);
  FUN_00414480(&local_38);
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res20,3);
  return param_2;
}

