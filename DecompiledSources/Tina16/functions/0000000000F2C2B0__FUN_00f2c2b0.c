/* Ghidra address: 00f2c2b0 */
/* Ghidra symbol: FUN_00f2c2b0 */


longlong FUN_00f2c2b0(longlong param_1,char param_2,int param_3,undefined8 param_4,
                     undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *local_30;
  undefined1 *local_28;
  longlong local_20;
  
  local_40 = auStack_e8;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_res8 = param_1;
  puVar2 = auStack_e8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  FUN_00414480(local_res8 + 0x30);
  while (param_5 != (undefined8 *)0x0) {
    local_28 = (undefined1 *)*param_5;
    if ((local_28 == &LAB_00f256b8) && (iVar3 = FUN_00f33500(param_5), 0 < iVar3)) {
      iVar3 = FUN_00f33500(param_5);
      FUN_0043f750(&local_48,iVar3 + -1);
      local_c8 = local_48;
      local_c0 = &DAT_00f2c73c;
      FUN_00416cd0(local_res8 + 0x30,4,*(undefined8 *)(local_res8 + 0x30),&DAT_00f2c72c);
      iVar3 = FUN_00f33500(param_5);
      param_5 = (undefined8 *)FUN_00f33510(param_5,iVar3 + -1);
    }
    else {
      local_30 = (undefined1 *)*param_5;
      if ((local_30 == &LAB_00f23b78) && (iVar3 = FUN_00f30b90(param_5), 0 < iVar3)) {
        iVar3 = FUN_00f30b90(param_5);
        local_20 = FUN_00f30ba0(param_5,iVar3 + -1);
        if (*(longlong *)(local_res8 + 0x30) != 0) {
          FUN_00416ad0(local_res8 + 0x30,&DAT_00f2c74c);
        }
        plVar1 = *(longlong **)(local_20 + 0x10);
        if (plVar1 == (longlong *)0x0) {
          FUN_00416ad0(local_res8 + 0x30,L"<null>");
        }
        else {
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
          FUN_00416ad0(local_res8 + 0x30,local_50);
        }
        param_5 = *(undefined8 **)(local_20 + 0x18);
      }
      else {
        param_5 = (undefined8 *)0x0;
      }
    }
  }
  if (param_3 < 0) {
    *(int *)(local_res8 + 0x38) = -param_3;
  }
  else {
    *(int *)(local_res8 + 0x38) = param_3;
  }
  FUN_00f2e5f0(param_4,*(undefined4 *)(local_res8 + 0x38),local_res8 + 0x3c,local_res8 + 0x40);
  FUN_0041ddd0(&local_60,param_6);
  FUN_00442f70(&local_58,local_60,param_7,param_8);
  FUN_0041ddd0(&local_70,PTR_PTR_020030b8);
  local_b0 = *(undefined8 *)(local_res8 + 0x30);
  local_a8 = 0x11;
  local_a0 = *(undefined4 *)(local_res8 + 0x3c);
  local_98 = 0;
  local_90 = *(undefined4 *)(local_res8 + 0x40);
  local_88 = 0;
  local_80 = *(undefined4 *)(local_res8 + 0x38);
  local_78 = 0;
  FUN_00442f70(&local_68,local_70,&local_b0,3);
  FUN_00416ad0(&local_58,local_68);
  FUN_0044d490(local_res8,0,local_58);
  FUN_00414560(&local_70,6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

