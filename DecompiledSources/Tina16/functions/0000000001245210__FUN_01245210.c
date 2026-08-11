/* Ghidra address: 01245210 */
/* Ghidra symbol: FUN_01245210 */


void FUN_01245210(longlong param_1,int *param_2,int *param_3,char param_4,char param_5,char param_6,
                 double param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res8;
  int *local_res10;
  int *local_res18;
  char local_res20;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c [60];
  undefined8 local_20;
  undefined8 *local_18;
  undefined4 local_c;
  
  local_90 = auStack_d8;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  local_20 = thunk_FUN_040ef593(0);
  local_b8 = 1;
  FUN_00b95be0(local_a0,0,0,1);
  local_18 = (undefined8 *)FUN_01a976c0(0,&PTR_FUN_01a96ef0,local_20,local_a0);
  iVar1 = FUN_0040c770(param_7 * 11.0);
  *(int *)(local_18 + 0x14) = -iVar1;
  local_80 = local_18;
  if ((local_res20 == '\x01') || (local_res20 == '\x03')) {
    *(undefined4 *)(local_18 + 0x15) = 900;
  }
  else {
    *(undefined4 *)(local_18 + 0x15) = 0;
  }
  local_68 = thunk_FUN_041a15ee(local_18 + 0x14);
  FUN_01a9a6f0(local_80,local_80[0x29],local_68);
  FUN_01cfb3a0(&local_res8);
  thunk_FUN_04172119(local_80[0x29],local_5c);
  local_84 = 0;
  if (local_res8 != 0) {
    local_84 = *(undefined4 *)(local_res8 + -4);
  }
  uVar2 = FUN_00416740(local_res8);
  local_c = FUN_00b94cd0(local_80[0x29],uVar2,local_84);
  local_60._0_2_ = (short)local_c;
  local_60._2_2_ = (short)((uint)local_c >> 0x10);
  if (local_res20 == '\0') {
    if (param_5 == '\x01') {
      *local_res10 = *local_res10 + (int)(short)local_60 / 2;
    }
    else if (param_5 == '\x02') {
      *local_res10 = *local_res10 + (int)(short)local_60;
    }
    if (param_6 == '\x01') {
      *local_res18 = *local_res18 + (int)local_60._2_2_ / 2;
    }
    else if (param_6 == '\x02') {
      *local_res18 = *local_res18 + (int)local_60._2_2_;
    }
  }
  else if (local_res20 == '\x01') {
    if (param_5 == '\0') {
      *local_res18 = *local_res18 - (int)(short)local_60;
    }
    else if (param_5 == '\x01') {
      *local_res18 = *local_res18 - (int)(short)local_60 / 2;
    }
    if (param_6 == '\0') {
      *local_res10 = *local_res10 + (int)local_60._2_2_;
    }
    else if (param_6 == '\x01') {
      *local_res10 = *local_res10 + (int)local_60._2_2_ / 2;
    }
  }
  else if (local_res20 == '\x02') {
    if (param_5 == '\0') {
      *local_res10 = *local_res10 + (int)(short)local_60;
    }
    else if (param_5 == '\x01') {
      *local_res10 = *local_res10 + (int)(short)local_60 / 2;
    }
    if (param_6 == '\0') {
      *local_res18 = *local_res18 + (int)local_60._2_2_;
    }
    else if (param_6 == '\x01') {
      *local_res18 = *local_res18 + (int)local_60._2_2_ / 2;
    }
  }
  else if (local_res20 == '\x03') {
    if (param_5 == '\x01') {
      *local_res18 = *local_res18 - (int)(short)local_60 / 2;
    }
    else if (param_5 == '\x02') {
      *local_res18 = *local_res18 - (int)(short)local_60;
    }
    if (param_6 == '\x01') {
      *local_res10 = *local_res10 + (int)local_60._2_2_ / 2;
    }
    else if (param_6 == '\x02') {
      *local_res10 = *local_res10 + (int)local_60._2_2_;
    }
  }
  *local_res18 = *local_res18 + -1;
  local_60 = local_c;
  uVar2 = (**(code **)*local_18)(local_18);
  FUN_00418590(uVar2,&DAT_01a96ff8);
  thunk_FUN_041a9b5c(0,local_20);
  FUN_00414480(&local_res8);
  return;
}

