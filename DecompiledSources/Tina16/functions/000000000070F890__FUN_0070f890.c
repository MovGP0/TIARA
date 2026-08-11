/* Ghidra address: 0070f890 */
/* Ghidra symbol: FUN_0070f890 */


void FUN_0070f890(longlong param_1,undefined8 param_2,ulonglong *param_3,int param_4,char param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [32];
  int local_108;
  int local_100;
  int local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 local_d0 [16];
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  bool local_a9;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [16];
  longlong local_60;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  ulonglong uStack_40;
  longlong *local_38;
  longlong *local_30;
  
  local_c0 = auStack_128;
  local_60 = 0;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  if (param_4 < 0) {
    local_a9 = true;
  }
  else {
    local_a8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x588);
    local_a9 = *(int *)(*(longlong *)(local_a8 + 0x10) + 0x10) <= param_4;
  }
  puVar1 = auStack_128;
  if (local_a9 == false) {
    local_38 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    FUN_005ffb10(local_38,param_2);
    local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar2 = FUN_004230a0(&local_48);
    (**(code **)(*local_30 + 0x88))(local_30,uVar2);
    uVar2 = FUN_004230c0(&local_48);
    (**(code **)(*local_30 + 0x70))(local_30,uVar2);
    lVar4 = FUN_00609e10(local_30);
    (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x10))
              (*(longlong **)(lVar4 + 0x70),*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8));
    local_90 = (longlong *)FUN_00609e10(local_30);
    FUN_005fdcb0(local_90[0x10],0);
    if (param_5 == '\0') {
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 2) == 0) {
        FUN_005fdab0(local_90[0x10],*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 200));
      }
      else {
        uVar5 = FUN_00777cd0();
        uVar2 = FUN_00779380(uVar5,10);
        FUN_005fdab0(local_90[0x10],uVar2);
      }
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 1) == 0) {
        FUN_005fc860(local_90[0xe],
                     *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8) + 0x28));
      }
      else {
        uVar5 = FUN_00777cd0();
        uVar2 = FUN_007793a0(uVar5,0x16);
        FUN_005fc860(local_90[0xe],uVar2);
      }
    }
    else {
      FUN_005fdab0(local_90[0x10],0xff00000d);
      FUN_005fc860(local_90[0xe],0xff00000e);
    }
    uVar2 = (**(code **)(*local_30 + 0x60))(local_30);
    local_108 = (**(code **)(*local_30 + 0x48))(local_30);
    FUN_004238d0(local_d0,0,0,uVar2);
    (**(code **)(*local_90 + 0xa8))(local_90,local_d0);
    lVar4 = FUN_006a35d0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x588),param_4);
    if (*(int *)(lVar4 + 0x40) < 1) {
      local_4c = 5;
    }
    else {
      local_4c = *(int *)(lVar4 + 0x40) * 10 + 5;
    }
    uVar5 = FUN_00786090(param_1);
    local_78 = thunk_FUN_041b2403(uVar5,0x403,0,0);
    if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x568) == 0) {
      if (0 < local_78) {
        local_a0 = *(longlong *)(param_1 + 0x10);
        lVar4 = (longlong)local_78;
        thunk_FUN_0400423a(lVar4,&local_7c,&local_80);
        local_84 = thunk_FUN_041da135(lVar4);
        lVar4 = FUN_006a35d0(*(undefined8 *)(local_a0 + 0x588),param_4);
        local_74 = *(int *)(lVar4 + 0x30);
        if ((-1 < local_74) && (local_74 < local_84)) {
          local_50 = local_4c;
          iVar3 = (**(code **)(*local_30 + 0x48))(local_30);
          local_54 = iVar3 / 2 - local_80 / 2;
          if (local_54 < 0) {
            local_54 = 0;
          }
          uVar5 = FUN_00609e10(local_30,(longlong)local_80 % 2 & 0xffffffff);
          uVar5 = FUN_005ffa40(uVar5);
          local_108 = local_54;
          local_100 = local_7c;
          local_f8 = local_80;
          local_f0 = 0xffffffff;
          local_e8 = 0xffffffff;
          local_e0 = 0;
          thunk_FUN_0413e9f5((longlong)local_78,local_74,uVar5,local_50);
          local_4c = local_4c + local_7c + 5;
        }
      }
    }
    else {
      local_98 = *(longlong *)(param_1 + 0x10);
      local_50 = local_4c;
      iVar3 = (**(code **)(*local_30 + 0x48))(local_30);
      local_54 = iVar3 / 2 - *(int *)(*(longlong *)(local_98 + 0x568) + 0x90) / 2;
      if (local_54 < 0) {
        local_54 = 0;
      }
      lVar4 = FUN_006a35d0(*(undefined8 *)(local_98 + 0x588),param_4);
      if (-1 < *(int *)(lVar4 + 0x30)) {
        lVar4 = FUN_006a35d0(*(undefined8 *)(local_98 + 0x588),param_4);
        iVar3 = (**(code **)(**(longlong **)(local_98 + 0x568) + 0x90))
                          (*(longlong **)(local_98 + 0x568));
        if (*(int *)(lVar4 + 0x30) < iVar3) {
          uVar5 = FUN_00609e10(local_30);
          lVar4 = FUN_006a35d0(*(undefined8 *)(local_98 + 0x588),param_4);
          local_108 = *(int *)(lVar4 + 0x30);
          local_100 = CONCAT31(local_100._1_3_,1);
          FUN_007d6c70(*(undefined8 *)(local_98 + 0x568),uVar5,local_50,local_54);
        }
      }
      local_4c = local_4c + *(int *)(*(longlong *)(local_98 + 0x568) + 0x94) + 5;
    }
    uVar2 = (**(code **)(*local_30 + 0x60))(local_30);
    local_108 = (**(code **)(*local_30 + 0x48))(local_30);
    FUN_004238d0(local_70,local_4c,0,uVar2);
    lVar4 = FUN_00609e10(local_30);
    FUN_005fdcb0(*(undefined8 *)(lVar4 + 0x80),1);
    lVar4 = FUN_006a35d0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x588),param_4);
    FUN_00414b50(&local_60,*(undefined8 *)(lVar4 + 0x20));
    if (local_60 != 0) {
      uVar5 = FUN_00609e10(local_30);
      local_b8 = FUN_005ffa40(uVar5);
      local_b0 = 0;
      if (local_60 != 0) {
        local_b0 = *(undefined4 *)(local_60 + -4);
      }
      uVar5 = FUN_00416740(local_60);
      local_108 = 0x24;
      thunk_FUN_041a24be(local_b8,uVar5,local_b0,local_70);
    }
    (**(code **)(*local_38 + 0x88))(local_38,local_48 & 0xffffffff,local_48._4_4_,local_30);
    FUN_00410f20(local_30);
    FUN_005ffb10(local_38,0);
    FUN_00410f20(local_38);
    puVar1 = local_c0;
  }
  local_c0 = puVar1;
  FUN_00414480(&local_60);
  return;
}

