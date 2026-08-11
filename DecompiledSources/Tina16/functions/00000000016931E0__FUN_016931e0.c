/* Ghidra address: 016931e0 */
/* Ghidra symbol: FUN_016931e0 */


undefined1
FUN_016931e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_78;
  local_28 = 0;
  local_30 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_11 = 1;
  FUN_0043e130(&local_28,local_res18);
  FUN_00415dd0(&local_30,local_28,0);
  local_58 = local_res20;
  local_48 = param_6;
  local_50 = param_2;
  local_10 = FUN_016a6a40(&DAT_016a2760,1,local_30,param_5);
  uVar1 = FUN_016a9290(local_10);
  *param_7 = uVar1;
  FUN_00410f20(local_10);
  FUN_004144d0(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res18);
  return local_11;
}

