/* Ghidra address: 01854d60 */
/* Ghidra symbol: FUN_01854d60 */


void FUN_01854d60(longlong *param_1,undefined8 *param_2,longlong *param_3,byte param_4,char param_5,
                 byte param_6,undefined4 param_7,longlong *param_8)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  byte local_90;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  byte local_31;
  longlong *local_30;
  
  local_70 = auStack_b8;
  local_58 = *param_2;
  local_50 = param_2[1];
  FUN_005fdab0(param_1[0x10],0xffffff);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_005f86c8);
  if (cVar1 == '\0') {
    if (param_4 == 0) {
      if (param_6 != 0) {
        cVar1 = FUN_004113d0(param_3,&PTR_FUN_005f92e8);
        if (cVar1 == '\0') goto LAB_01854ea1;
      }
      if (param_5 == '\0') goto LAB_01854e2d;
    }
LAB_01854ea1:
    local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_40 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    uVar4 = FUN_00609e10(local_30);
    FUN_005fdf10(uVar4);
    if ((param_8 == (longlong *)0x0) || (cVar1 = FUN_00609f90(param_8), cVar1 != '\x01')) {
      local_31 = 1;
    }
    else {
      local_31 = 0;
    }
    (**(code **)(*local_30 + 0xf8))(local_30,0);
    if ((param_4 == 0) || (param_6 != 0)) {
      FUN_0060bbf0(local_30,6);
    }
    else {
      FUN_0060bbf0(local_30,7);
    }
    uVar3 = (**(code **)(*param_3 + 0x60))(param_3);
    (**(code **)(*local_30 + 0x88))(local_30,uVar3);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    (**(code **)(*local_30 + 0x70))(local_30,uVar3);
    if (param_6 != 0) {
      lVar5 = FUN_00609e10(local_30);
      local_5c = FUN_005fdaa0(*(undefined8 *)(lVar5 + 0x80));
      lVar5 = FUN_00609e10(local_30);
      uVar3 = FUN_005fbf20(param_7);
      FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),uVar3);
      plVar6 = (longlong *)FUN_00609e10(local_30);
      uVar3 = (**(code **)(*local_30 + 0x60))(local_30);
      local_98 = (**(code **)(*local_30 + 0x48))(local_30);
      FUN_00498350(local_80,0,0,uVar3);
      (**(code **)(*plVar6 + 0xa8))(plVar6,local_80);
      lVar5 = FUN_00609e10(local_30);
      FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),local_5c);
    }
    plVar6 = (longlong *)FUN_00609e10(local_30);
    (**(code **)(*plVar6 + 0x88))(plVar6,0,0,param_3);
    if ((param_4 & param_6) != 0) {
      if (local_31 == 0) {
        local_40 = param_8;
      }
      else {
        local_40 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        (**(code **)(*local_40 + 0xf8))(local_40,0);
        FUN_0060bbf0(local_40,1);
        if (param_8 == (longlong *)0x0) {
          uVar3 = (**(code **)(*param_3 + 0x60))(param_3);
          (**(code **)(*local_40 + 0x88))(local_40,uVar3);
          uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
          (**(code **)(*local_40 + 0x70))(local_40,uVar3);
        }
        else {
          (**(code **)(*local_40 + 0x88))(local_40,(int)local_50 - (int)local_58);
          (**(code **)(*local_40 + 0x70))(local_40,local_50._4_4_ - local_58._4_4_);
          local_48 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          FUN_0060bbf0(local_48,3);
          (**(code **)(*local_48 + 0x88))(local_48,(int)local_50 - (int)local_58);
          (**(code **)(*local_48 + 0x70))(local_48,local_50._4_4_ - local_58._4_4_);
          (**(code **)(*local_48 + 0xf8))(local_48,0);
          lVar5 = FUN_00609e10(local_48);
          uVar3 = FUN_005fbf20(param_7);
          FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),uVar3);
          plVar6 = (longlong *)FUN_00609e10(local_48);
          uVar3 = (**(code **)(*local_48 + 0x60))(local_48);
          local_98 = (**(code **)(*local_48 + 0x48))(local_48);
          FUN_00498350(local_80,0,0,uVar3);
          (**(code **)(*plVar6 + 0x110))(plVar6,local_80,param_8);
          FUN_01854510(local_48);
        }
      }
      lVar5 = FUN_00609e10(local_40);
      uVar3 = FUN_005fbf20(param_7);
      FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),uVar3);
      if ((local_31 & param_8 != (longlong *)0x0) == 0) {
        uVar3 = FUN_005fbf20(param_7);
        FUN_01853bc0(local_40,local_30,uVar3,0);
      }
      else {
        uVar3 = FUN_005fbf20(0);
        FUN_01853bc0(local_40,local_48,uVar3,0);
      }
    }
    if (param_6 == 0) {
      if (param_4 == 0) {
        uVar4 = FUN_005ffa40(param_1);
        FUN_01853a30(uVar4,&local_58,local_30);
      }
      else {
        uVar4 = FUN_005ffa40(param_1);
        FUN_018537d0(uVar4,&local_58,local_30);
      }
    }
    else {
      local_98 = param_7;
      local_90 = param_4;
      FUN_01854900(param_1,&local_58,local_30,local_40);
    }
    uVar4 = FUN_00609e10(local_30);
    FUN_005fe090(uVar4);
    FUN_00410f20(local_30);
    if (local_31 != 0) {
      FUN_00410f20(local_40);
      FUN_00410f20(local_48);
    }
    return;
  }
LAB_01854e2d:
  bVar2 = FUN_004113d0(param_3,&PTR_FUN_005f92e8);
  if ((param_6 & bVar2) != 0) {
    local_98 = param_7;
    local_90 = 0;
    FUN_01854900(param_1,&local_58,param_3,param_8);
    return;
  }
  (**(code **)(*param_1 + 0x110))(param_1,&local_58,param_3);
  return;
}

