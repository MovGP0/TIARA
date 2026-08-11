/* Ghidra address: 01242d80 */
/* Ghidra symbol: FUN_01242d80 */


void FUN_01242d80(undefined8 param_1,int *param_2,int *param_3,char param_4,char param_5,
                 undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  int *local_res10;
  int *local_res18;
  char local_res20;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  uint local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  short local_7c;
  short local_7a;
  undefined1 local_78 [60];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 local_1c;
  
  local_b0 = auStack_f8;
  local_c8 = 0;
  local_90 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(param_6);
  local_30 = thunk_FUN_040ef593(0);
  local_d8 = 1;
  FUN_00b95be0(local_c0,0,0,1);
  local_28 = (undefined8 *)FUN_01a976c0(0,&PTR_FUN_01a96ef0,local_30,local_c0);
  local_38 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414ad0(local_28 + 0x22,param_6);
  local_98 = local_28;
  if ((local_res20 == '\x01') || (local_res20 == '\x03')) {
    *(undefined4 *)(local_28 + 0x15) = 900;
  }
  else {
    *(undefined4 *)(local_28 + 0x15) = 0;
  }
  local_88 = thunk_FUN_041a15ee(local_28 + 0x14);
  FUN_01a9a6f0(local_98,local_98[0x29],local_88);
  thunk_FUN_04172119(local_98[0x29],local_78);
  (**(code **)(*(longlong *)local_98[0x35] + 0x60))((longlong *)local_98[0x35],local_res8);
  local_7c = 0;
  local_7a = 0;
  iVar1 = (**(code **)(*(longlong *)local_98[0x35] + 0x28))();
  local_3c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*(longlong *)local_98[0x35] + 0x18))
                ((longlong *)local_98[0x35],&local_c8,local_3c);
      FUN_00b0d0a0(&local_90,local_c8,*(undefined4 *)PTR_DAT_02004b18);
      local_a0 = 0;
      if (local_90 != 0) {
        local_a0 = *(uint *)(local_90 + -4) >> 1;
      }
      uVar2 = FUN_00415f70(local_90);
      local_1c = FUN_00b94d60(local_98[0x29],uVar2,local_a0);
      local_7c = FUN_00b905e0((longlong)local_7c,(longlong)(short)local_1c);
      local_7a = local_7a + local_1c._2_2_;
      local_3c = local_3c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_res20 == '\0') {
    if (param_5 != '\0') {
      *local_res10 = *local_res10 - (int)local_7c;
    }
  }
  else if (local_res20 == '\x01') {
    if (param_5 != '\0') {
      *local_res18 = *local_res18 + (int)local_7c;
    }
  }
  else if (local_res20 == '\x02') {
    if (param_5 == '\0') {
      *local_res10 = *local_res10 - (int)local_7c;
      *local_res18 = *local_res18 - (int)local_7a;
    }
    else {
      *local_res18 = *local_res18 - (int)local_7a;
    }
  }
  else if (local_res20 == '\x03') {
    if (param_5 == '\0') {
      *local_res18 = *local_res18 + (int)local_7c;
      *local_res10 = *local_res10 - (int)local_7a;
    }
    else {
      *local_res10 = *local_res10 - (int)local_7a;
    }
  }
  uVar2 = (**(code **)*local_28)(local_28);
  FUN_00418590(uVar2,&DAT_01a96ff8);
  thunk_FUN_041a9b5c(0,local_30);
  FUN_00410f20(local_38);
  FUN_00414480(&local_c8);
  FUN_00414520(&local_90);
  FUN_00414480(&local_res8);
  FUN_00414480(&param_6);
  return;
}

