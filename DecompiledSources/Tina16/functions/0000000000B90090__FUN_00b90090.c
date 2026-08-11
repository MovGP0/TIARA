/* Ghidra address: 00b90090 */
/* Ghidra symbol: FUN_00b90090 */


undefined8 FUN_00b90090(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  double local_28;
  undefined8 local_20;
  
  local_30 = auStack_b8;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = 0;
  local_60 = 0;
  local_38 = 0;
  FUN_0064dd90(param_1,&local_38);
  local_28 = (double)FUN_00b8f030(local_38);
  if ((local_28 < -1e+50) || (1e+50 < local_28)) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_48,0x132);
    FUN_0064dd90(param_1,&local_60);
    local_58 = local_60;
    local_50 = 0x11;
    FUN_00442f70(&local_40,local_48,&local_58,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_40);
    FUN_004134c0(uVar2);
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    cVar1 = (**(code **)(param_1 + 0x500))(*(undefined8 *)(param_1 + 0x508),param_1,local_28);
    if (cVar1 == '\0') {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_70,0x133);
      FUN_0064dd90(param_1,&local_78);
      local_58 = local_78;
      local_50 = 0x11;
      FUN_00442f70(&local_68,local_70,&local_58,0);
      uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_68);
      FUN_004134c0(uVar2);
    }
  }
  *(double *)(param_1 + 0x4d8) = local_28;
  local_20 = *(undefined8 *)(param_1 + 0x4d8);
  FUN_00414480(&local_90);
  FUN_00414560(&local_88,2);
  FUN_00414480(&local_78);
  FUN_00414560(&local_70,2);
  FUN_00414480(&local_60);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_38);
  return local_20;
}

