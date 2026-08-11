/* Ghidra address: 0084f9c0 */
/* Ghidra symbol: FUN_0084f9c0 */


void FUN_0084f9c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [12];
  longlong *local_60;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_90 = auStack_c8;
  if ((char)param_1[0xa6] == '\0') {
    puVar2 = auStack_c8;
    if ((*(byte *)(param_1 + 0x59) & 2) != 0) {
      cVar3 = FUN_00781870();
      puVar2 = local_90;
      if (cVar3 != '\0') goto LAB_008501c2;
    }
    local_90 = puVar2;
    (**(code **)(*param_1 + 0xe0))(param_1,local_44);
    local_20 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    FUN_005ffb10(local_20,param_2);
    local_88 = param_1[0x66];
    FUN_005fdab0(local_20[0x10],*(undefined4 *)(*(longlong *)(local_88 + 0x18) + 0x28));
    uVar4 = FUN_005ffa40(local_20);
    local_24 = thunk_FUN_03b57162(uVar4);
    uVar4 = FUN_005ffa40(local_20);
    local_a8 = CONCAT44(local_a8._4_4_,*(int *)((longlong)param_1 + 0x9c) + -2);
    thunk_FUN_041a27b3(uVar4,2,2,(int)param_1[0x13] + -2);
    (**(code **)(*local_20 + 0xa8))(local_20,local_44);
    thunk_FUN_0402759f(param_2,local_24);
    FUN_005ffb10(local_20,0);
    FUN_00410f20(local_20);
    goto LAB_008501c2;
  }
  local_90 = auStack_c8;
  FUN_00850580(param_1,&local_34);
  local_48 = 0;
  local_60 = (longlong *)FUN_00781840();
  if ((*(byte *)(param_1 + 0x59) & 2) == 0) {
LAB_0084fa39:
    (**(code **)(*param_1 + 0xe0))(param_1,local_44);
    local_20 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    FUN_005ffb10(local_20,param_2);
    uVar4 = FUN_005ffa40(local_20);
    local_24 = thunk_FUN_03b57162(uVar4);
    local_80 = param_1[0x66];
    FUN_005fdab0(local_20[0x10],*(undefined4 *)(*(longlong *)(local_80 + 0x18) + 0x28));
    (**(code **)(*local_20 + 0xa8))(local_20,local_44);
    uVar4 = FUN_005ffa40(local_20);
    thunk_FUN_0402759f(uVar4,local_24);
    FUN_005ffb10(local_20,0);
    FUN_00410f20(local_20);
  }
  else {
    cVar3 = FUN_00781870();
    if (cVar3 == '\0') goto LAB_0084fa39;
  }
  if ((char)param_1[0xa6] == '\x01') {
    cVar3 = (**(code **)(*local_60 + 0x98))(local_60);
    if (cVar3 == '\0') {
      if (*(char *)((longlong)param_1 + 0x53a) != '\0') {
        local_48 = 0x4000;
      }
      thunk_FUN_03998bad(param_2,&local_34,5,local_48 | 0x80f);
    }
    else {
      if (*(char *)((longlong)param_1 + 0x53a) == '\0') {
        if ((char)param_1[0xac] == '\0') {
          (**(code **)(*local_60 + 0x130))(local_60,local_6c,0x1e);
        }
        else {
          (**(code **)(*local_60 + 0x130))(local_60,local_6c,0x1f);
        }
      }
      else {
        (**(code **)(*local_60 + 0x130))(local_60,local_6c,0x20);
      }
      local_a8 = 0;
      local_a0 = 0;
      FUN_00778dc0(local_60,param_2,local_6c,&local_34);
    }
    local_50 = local_34 + ((uint)(local_2c - local_34) >> 1) +
               (uint)*(byte *)((longlong)param_1 + 0x53a) + -1;
    local_54 = local_30 + ((uint)(local_28 - local_30) >> 1) +
               (uint)*(byte *)((longlong)param_1 + 0x53a) + -1;
    local_4c = *(uint *)(param_1 + 0xa3) >> 3;
    if (local_4c == 0) {
      local_4c = 1;
    }
    cVar3 = (**(code **)(*local_60 + 0x98))(local_60);
    if (cVar3 != '\0') {
      cVar3 = FUN_00781870();
      if (cVar3 != '\0') {
        local_20 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
        FUN_005ffb10(local_20,param_2);
        if (*(char *)((longlong)param_1 + 0x53a) == '\0') {
          if ((char)param_1[0xac] == '\0') {
            (**(code **)(*local_60 + 200))(local_60,local_6c,2);
          }
          else {
            (**(code **)(*local_60 + 200))(local_60,local_6c,3);
          }
        }
        else {
          (**(code **)(*local_60 + 200))(local_60,local_6c,4);
        }
        cVar3 = FUN_007790b0(local_60,local_6c,2,&local_70);
        if (cVar3 == '\0') {
          local_70 = FUN_007793c0(local_60,0xff000012);
        }
        FUN_005fdab0(local_20[0x10],local_70);
        uVar4 = FUN_005ffa40(local_20);
        local_a8._0_4_ = local_4c;
        local_a0 = 0xf00021;
        thunk_FUN_04161b78(uVar4,local_50,local_54,local_4c);
        uVar4 = FUN_005ffa40(local_20);
        iVar1 = local_4c * 2;
        local_a8._0_4_ = local_4c;
        local_a0 = 0xf00021;
        thunk_FUN_04161b78(uVar4,local_50 + local_4c * -2,local_54,local_4c);
        uVar4 = FUN_005ffa40(local_20);
        local_a8 = CONCAT44(local_a8._4_4_,local_4c);
        local_a0 = 0xf00021;
        thunk_FUN_04161b78(uVar4,local_50 + iVar1,local_54,local_4c);
        FUN_005ffb10(local_20,0);
        FUN_00410f20(local_20);
        goto LAB_0085004f;
      }
    }
    local_a8._0_4_ = local_4c;
    local_a0 = 0x42;
    thunk_FUN_04161b78(param_2,local_50,local_54,local_4c);
    iVar1 = local_4c * 2;
    local_a8._0_4_ = local_4c;
    local_a0 = 0x42;
    thunk_FUN_04161b78(param_2,local_50 + local_4c * -2,local_54,local_4c);
    local_a8 = CONCAT44(local_a8._4_4_,local_4c);
    local_a0 = 0x42;
    thunk_FUN_04161b78(param_2,local_50 + iVar1,local_54,local_4c);
  }
  else if ((char)param_1[0xa6] == '\x02') {
    cVar3 = (**(code **)(*local_60 + 0x98))(local_60);
    if (cVar3 == '\0') {
      if (param_1[0xa5] == 0) {
        local_48 = 0x100;
      }
      else if (*(char *)((longlong)param_1 + 0x53a) != '\0') {
        local_48 = 0x4200;
      }
      thunk_FUN_03ea73e5(param_2,&local_34,3,local_48 | 5);
    }
    else {
      if (param_1[0xa1] == 0) {
LAB_0084fba3:
        local_74 = 0;
      }
      else {
        uVar4 = FUN_0065b870(param_1[0xa1]);
        cVar3 = FUN_00647eb0(uVar4);
        if (cVar3 == '\0') goto LAB_0084fba3;
        local_74 = (**(code **)(*(longlong *)param_1[0xa1] + 0x98))((longlong *)param_1[0xa1]);
      }
      if (param_1[0xa5] == 0) {
        (**(code **)(*local_60 + 0x130))(local_60,local_6c,0x1d);
      }
      else if (*(char *)((longlong)param_1 + 0x53a) == '\0') {
        if ((char)param_1[0xac] == '\0') {
          (**(code **)(*local_60 + 0x130))(local_60,local_6c,0x1a);
        }
        else {
          (**(code **)(*local_60 + 0x130))(local_60,local_6c,0x1b);
        }
      }
      else {
        (**(code **)(*local_60 + 0x130))(local_60,local_6c,0x1c);
      }
      local_a8 = 0;
      local_a0 = local_74;
      FUN_00778dc0(local_60,param_2,local_6c,&local_34);
    }
  }
LAB_0085004f:
  local_a8 = CONCAT44(local_a8._4_4_,local_28);
  thunk_FUN_041a27b3(param_2,local_34,local_30,local_2c);
LAB_008501c2:
  FUN_00657350(param_1,param_2);
  return;
}

