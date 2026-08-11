/* Ghidra address: 01244970 */
/* Ghidra symbol: FUN_01244970 */


void FUN_01244970(longlong *param_1,int *param_2,int *param_3,char param_4,char param_5,char param_6
                 ,double param_7,undefined4 param_8,undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_358 [32];
  int local_338;
  int local_330;
  int local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2f0 [16];
  undefined1 *local_2e0;
  undefined4 local_2cc;
  undefined8 *local_2c8;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  undefined1 local_2ac [512];
  byte abStack_ac [51];
  byte local_79;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c [8];
  int local_64;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 local_1c;
  
  local_2e0 = auStack_358;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_30 = thunk_FUN_040ef593(0);
  local_338 = 1;
  FUN_00b95be0(local_2f0,0,0,1);
  local_28 = (undefined8 *)FUN_01a976c0(0,&PTR_FUN_01a96ef0,local_30,local_2f0);
  iVar2 = FUN_0040c770(param_7 * 11.0);
  *(int *)(local_28 + 0x14) = -iVar2;
  local_2c8 = local_28;
  if ((param_4 == '\x01') || (param_4 == '\x03')) {
    *(undefined4 *)(local_28 + 0x15) = 900;
  }
  else {
    *(undefined4 *)(local_28 + 0x15) = 0;
  }
  local_78 = thunk_FUN_041a15ee(local_28 + 0x14);
  FUN_01a9a6f0(local_2c8,local_2c8[0x29],local_78);
  FUN_01cfb2c0(*param_1,abStack_ac + 1,&local_79);
  FUN_01cfb3a0(param_1);
  thunk_FUN_04172119(local_2c8[0x29],local_6c);
  local_2cc = 0;
  if (*param_1 != 0) {
    local_2cc = *(undefined4 *)(*param_1 + -4);
  }
  uVar3 = FUN_00416740(*param_1);
  local_1c = FUN_00b94cd0(local_2c8[0x29],uVar3,local_2cc);
  local_70 = local_1c;
  uVar1 = local_70;
  local_70._0_2_ = (short)local_1c;
  local_70._2_2_ = (short)((uint)local_1c >> 0x10);
  if (param_4 == '\0') {
    if (param_5 == '\x01') {
      *param_2 = *param_2 - (int)(short)local_70 / 2;
    }
    else if (param_5 == '\x02') {
      *param_2 = *param_2 - (int)(short)local_70;
    }
    if (param_6 == '\x01') {
      *param_3 = *param_3 - (int)local_70._2_2_ / 2;
    }
    else if (param_6 == '\x02') {
      *param_3 = *param_3 - (int)local_70._2_2_;
    }
  }
  else if (param_4 == '\x01') {
    if (param_5 == '\0') {
      *param_3 = *param_3 + (int)(short)local_70;
    }
    else if (param_5 == '\x01') {
      *param_3 = *param_3 + (int)(short)local_70 / 2;
    }
    if (param_6 == '\0') {
      *param_2 = *param_2 - (int)local_70._2_2_;
    }
    else if (param_6 == '\x01') {
      *param_2 = *param_2 - (int)local_70._2_2_ / 2;
    }
  }
  else if (param_4 == '\x02') {
    if (param_5 == '\0') {
      *param_2 = *param_2 - (int)(short)local_70;
    }
    else if (param_5 == '\x01') {
      *param_2 = *param_2 - (int)(short)local_70 / 2;
    }
    if (param_6 == '\0') {
      *param_3 = *param_3 - (int)local_70._2_2_;
    }
    else if (param_6 == '\x01') {
      *param_3 = *param_3 - (int)local_70._2_2_ / 2;
    }
  }
  else if (param_4 == '\x03') {
    if (param_5 == '\x01') {
      *param_3 = *param_3 + (int)(short)local_70 / 2;
    }
    else if (param_5 == '\x02') {
      *param_3 = *param_3 + (int)(short)local_70;
    }
    if (param_6 == '\x01') {
      *param_2 = *param_2 - (int)local_70._2_2_ / 2;
    }
    else if (param_6 == '\x02') {
      *param_2 = *param_2 - (int)local_70._2_2_;
    }
  }
  *param_3 = *param_3 + 1;
  local_70 = uVar1;
  if ((local_79 != 0) && ((uint)local_79 % 2 == 0)) {
    local_64 = 2;
    for (local_2b0 = 1; local_2b0 <= (int)(uint)local_79; local_2b0 = local_2b0 + 2) {
      lVar4 = (longlong)local_2b0;
      FUN_00416dc0(&local_2f8,*param_1,1,abStack_ac[lVar4] - 1);
      FUN_00442620(local_2ac,local_2f8);
      local_1c = FUN_00b94cd0(local_2c8[0x29],local_2ac,abStack_ac[lVar4] - 1);
      local_70 = local_1c;
      uVar1 = local_70;
      if ((int)(abStack_ac[lVar4] - 1) < 1) {
        if (param_4 == '\0') {
LAB_01244f9b:
          local_2b4 = *param_2;
          local_2b8 = *param_3 - local_64;
        }
        else {
          if (param_4 != '\x01') {
            if (param_4 == '\x02') goto LAB_01244f9b;
            if (param_4 != '\x03') goto LAB_01244fe5;
          }
          local_2b4 = *param_2 - local_64;
          local_2b8 = *param_3;
        }
      }
      else {
        local_70._0_2_ = (short)local_1c;
        if (param_4 == '\0') {
LAB_01244f14:
          local_2b4 = *param_2 + (int)(short)local_70;
          local_2b8 = *param_3 - local_64;
        }
        else if (param_4 == '\x01') {
LAB_01244f47:
          local_2b4 = *param_2 - local_64;
          local_2b8 = *param_3 - (int)(short)local_70;
        }
        else {
          if (param_4 == '\x02') goto LAB_01244f14;
          if (param_4 == '\x03') goto LAB_01244f47;
        }
      }
LAB_01244fe5:
      iVar2 = local_2b0 + 1;
      local_70 = uVar1;
      FUN_00416dc0(&local_300,*param_1,1,abStack_ac[iVar2]);
      FUN_00442620(local_2ac,local_300);
      local_70 = FUN_00b94cd0(local_2c8[0x29],local_2ac,abStack_ac[iVar2]);
      if (param_4 == '\0') {
LAB_0124507c:
        local_2bc = *param_2 + (int)(short)local_70;
        local_2c0 = local_2b8;
      }
      else if (param_4 == '\x01') {
LAB_012450a3:
        local_2bc = local_2b4;
        local_2c0 = *param_3 - (int)(short)local_70;
      }
      else {
        if (param_4 == '\x02') goto LAB_0124507c;
        if (param_4 == '\x03') goto LAB_012450a3;
      }
      local_338 = local_2b8;
      local_330 = local_2bc;
      local_328 = local_2c0;
      local_320 = 1;
      local_318 = param_8;
      local_1c = local_70;
      FUN_01243890(&local_308,param_9,param_10,local_2b4);
    }
  }
  uVar3 = (**(code **)*local_28)(local_28);
  FUN_00418590(uVar3,&DAT_01a96ff8);
  thunk_FUN_041a9b5c(0,local_30);
  FUN_0041b800(&local_308);
  FUN_00414560(&local_300,2);
  return;
}

