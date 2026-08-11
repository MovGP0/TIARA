/* Ghidra address: 00edb3a0 */
/* Ghidra symbol: FUN_00edb3a0 */


undefined8 FUN_00edb3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_3);
  FUN_00414630(local_res20);
  FUN_00416880(&local_38,local_res18);
  FUN_00441820(&local_30,local_38);
  if ((local_30 == 0) && (local_res20 != 0)) {
    FUN_004423c0(&local_48);
    FUN_00441640(&local_40,local_48);
    FUN_00415dd0(local_20,local_40,0);
    FUN_00416880(&local_58,local_res20);
    FUN_00441640(&local_50,local_58);
    FUN_00415dd0(&local_28,local_50,0);
    iVar1 = FUN_00415a60(local_20[0],local_28);
    if (iVar1 != 0) {
      FUN_00416880(&local_60,local_28);
      FUN_004423e0(local_60);
    }
    FUN_00416880(&local_70,local_res18);
    FUN_00441b80(&local_68,local_70);
    FUN_00415dd0(param_2,local_68,0);
    if (iVar1 != 0) {
      FUN_00416880(&local_78,local_20[0]);
      FUN_004423e0(local_78);
    }
  }
  else {
    FUN_00416880(&local_88,local_res18);
    FUN_00441b80(&local_80,local_88);
    FUN_00415dd0(param_2,local_80,0);
  }
  FUN_00414560(&local_88,0xc);
  FUN_00414590(&local_28,2);
  FUN_00414590(&local_res18,2);
  return param_2;
}

