/* Ghidra address: 01479570 */
/* Ghidra symbol: FUN_01479570 */


undefined1
FUN_01479570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined1 local_21;
  longlong *local_20;
  
  local_60 = auStack_a8;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414b50(&local_40,local_res10);
  local_2c = FUN_01477a10(param_1,local_res10,local_res20);
  if (local_2c == -1) {
    FUN_0043e1a0(&local_68,local_res10);
    iVar1 = FUN_00416db0(local_68,L"output");
    if (iVar1 != 0) {
      FUN_0043e1a0(&local_70,local_res10);
      iVar1 = FUN_00416db0(local_70,L"output voltage");
      if (iVar1 != 0) goto LAB_014796de;
    }
    iVar1 = FUN_00416db0(local_res20,&DAT_01479904);
    if (iVar1 == 0) {
      FUN_00414b50(&local_40,L"v_out,vout");
    }
    iVar1 = FUN_00416db0(local_res20,&DAT_01479938);
    if (iVar1 == 0) {
      FUN_00414b50(&local_40,L"i_out,iout");
    }
  }
  else {
LAB_014796de:
    if (-1 < local_2c) {
      FUN_01479400(&local_40,param_1,local_2c);
    }
  }
  local_20 = (longlong *)FUN_01b21480(local_40);
  local_20 = (longlong *)FUN_01b21190(local_40,0x2c,0);
  local_49 = 0;
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_28 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_78,local_28);
      FUN_0043ea00(&local_res10,local_78);
      local_30 = FUN_01477cf0(param_1,local_res10,local_res18);
      if (-1 < local_2c) {
        local_88 = param_5;
        local_80 = param_6;
        FUN_01477e60(param_1,local_30,local_res10,local_res18);
        local_49 = 1;
        break;
      }
      local_28 = local_28 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_21 = local_49;
  FUN_00410f20(local_20);
  FUN_00414560(&local_78,3);
  FUN_00414560(&local_48,3);
  FUN_00414560(&local_res10,3);
  return local_21;
}

