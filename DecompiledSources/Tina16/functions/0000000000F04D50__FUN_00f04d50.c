/* Ghidra address: 00f04d50 */
/* Ghidra symbol: FUN_00f04d50 */


undefined4 FUN_00f04d50(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  int local_18;
  undefined4 local_14;
  
  local_20 = auStack_88;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_30 = 0;
  local_38 = 0;
  local_50 = 0;
  local_28 = 0;
  FUN_0064dd90(param_1,&local_28);
  local_18 = FUN_0043fc00(local_28);
  if ((local_18 < *(int *)(param_1 + 0x4dc)) || (*(int *)(param_1 + 0x4e0) < local_18)) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_38,0x132);
    FUN_0064dd90(param_1,&local_50);
    local_48 = local_50;
    local_40 = 0x11;
    FUN_00442f70(&local_30,local_38,&local_48,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_30);
    FUN_004134c0(uVar1);
  }
  *(int *)(param_1 + 0x4d8) = local_18;
  local_14 = *(undefined4 *)(param_1 + 0x4d8);
  FUN_00414480(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_28);
  return local_14;
}

