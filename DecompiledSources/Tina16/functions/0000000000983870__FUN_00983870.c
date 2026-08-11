/* Ghidra address: 00983870 */
/* Ghidra symbol: FUN_00983870 */


undefined8
FUN_00983870(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_a8;
  local_38 = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414650(&local_res18);
  FUN_00414650(&local_res20);
  local_18 = (**(code **)(*(longlong *)param_1[0xf] + 0xf8))
                       ((longlong *)param_1[0xf],param_2,&local_res18,&local_res20);
  if (local_18 == 0) {
    uVar1 = FUN_0044d490(&PTR_FUN_00901a10,1,L"No input specified.");
    FUN_004134c0(uVar1);
  }
  FUN_008fdec0(param_2,local_res20,&local_28);
  FUN_004168b0(&local_38,param_5);
  local_88 = local_28;
  local_80 = 0x1000;
  local_78 = local_38;
  local_70 = param_6;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 1;
  local_10 = FUN_00960500(&PTR_FUN_00915170,1,local_18,local_res18);
  local_20 = (**(code **)(*param_1 + 0xb8))(param_1,local_10);
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414480(&local_38);
  FUN_00414520(&local_28);
  FUN_004145c0(&local_res18,2);
  return local_20;
}

