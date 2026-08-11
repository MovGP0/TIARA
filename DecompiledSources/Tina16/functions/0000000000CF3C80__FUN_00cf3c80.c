/* Ghidra address: 00cf3c80 */
/* Ghidra symbol: FUN_00cf3c80 */


undefined8 FUN_00cf3c80(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_74;
  longlong local_70;
  int local_64;
  longlong local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined8 local_28;
  undefined8 *local_20;
  
  local_80 = auStack_e8;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_28 = 0;
  FUN_00414480(param_2);
  FUN_00419430(&local_28,&DAT_0086e978);
  if ((int)param_1[1] == 1) {
    FUN_008b0310(&local_88);
    FUN_00414ad0(param_1 + 6,local_88);
    FUN_00cf3010(&local_90,param_1[7],param_1[6]);
    FUN_00416ba0(param_2,L"NTLM ",local_90);
  }
  else if ((int)param_1[1] == 2) {
    local_60 = param_1[5];
    local_64 = 0;
    if (local_60 != 0) {
      local_64 = *(int *)(local_60 + -4);
    }
    if (local_64 == 0) {
      FUN_00cdda50(param_1,&local_98,L"NTLM");
      FUN_00414ad0(param_1 + 5,local_98);
      local_c8 = CONCAT71(local_c8._1_7_,1);
      FUN_00874ee0(&local_a0,param_1 + 5,&LAB_00cf3ff0,1);
    }
    local_70 = param_1[5];
    local_74 = 0;
    if (local_70 != 0) {
      local_74 = *(int *)(local_70 + -4);
    }
    if (local_74 == 0) {
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_0044d440();
    }
    local_20 = (undefined8 *)FUN_00882920(&PTR_FUN_00cdca40,1);
    FUN_00cdac40(*local_20,&local_28,param_1[5]);
    FUN_00410f20(local_20);
    FUN_00878790(local_28,local_58,0x30);
    FUN_00878310(&local_28,local_40,8);
    FUN_00cddba0(param_1,&local_b0);
    local_c8 = local_b0;
    local_c0 = local_28;
    FUN_00cf3270(&local_a8,param_1[7],param_1[6],param_1[8]);
    FUN_00416ba0(param_2,L"NTLM ",local_a8);
    *(undefined4 *)(param_1 + 1) = 2;
  }
  FUN_00414560(&local_b0,6);
  FUN_00419430(&local_28,&DAT_0086e978);
  return param_2;
}

