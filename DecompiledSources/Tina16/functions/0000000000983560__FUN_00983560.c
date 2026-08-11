/* Ghidra address: 00983560 */
/* Ghidra symbol: FUN_00983560 */


undefined8 FUN_00983560(longlong *param_1,longlong param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_a8;
  local_38 = 0;
  local_28 = 0;
  puVar1 = auStack_a8;
  if (param_2 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Filename not specified.");
    FUN_004134c0(uVar2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
  FUN_008fe690(&local_38,param_2,0);
  FUN_004168e0(&local_28,local_38);
  local_88 = local_28;
  local_80 = (undefined4)param_1[0x11];
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 1;
  local_70 = param_3;
  local_10 = FUN_00960500(&PTR_FUN_00915170,1,local_18,0);
  local_20 = (**(code **)(*param_1 + 0xb8))(param_1,local_10);
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414480(&local_38);
  FUN_00414520(&local_28);
  return local_20;
}

