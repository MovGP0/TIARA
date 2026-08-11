/* Ghidra address: 01c04a20 */
/* Ghidra symbol: FUN_01c04a20 */


void FUN_01c04a20(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  uint local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 *local_80;
  longlong local_70;
  longlong local_68;
  undefined4 local_5c;
  undefined4 uStack_58;
  byte local_51;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_80 = auStack_f8;
  local_40 = *param_2;
  cVar2 = FUN_01c06f30(param_1);
  if (cVar2 != '\0') {
    uVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
    cVar2 = FUN_004113d0(uVar5,&PTR_FUN_0061c2b8);
    if (cVar2 != '\0') {
      local_50 = (**(code **)(*param_1 + 0x220))
                           (param_1,1,&local_51,*(undefined4 *)(param_1[100] + 0xa0));
      local_5c = 0x20;
      uStack_58 = 0x20;
      local_48 = 0x2000000020;
      local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_38 + 0x88))(local_38,*(undefined4 *)(local_50 + 0x94));
      (**(code **)(*local_38 + 0x70))(local_38,*(undefined4 *)(local_50 + 0x90));
      lVar6 = FUN_00609e10(local_38);
      FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0xffffff);
      cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar2 == '\0') {
        plVar7 = (longlong *)FUN_00609e10(local_38);
        plVar9 = (longlong *)FUN_00609e10(local_30);
        (**(code **)(*plVar9 + 0x20))(plVar9,local_90);
        (**(code **)(*plVar7 + 0xa8))(plVar7,local_90);
      }
      else {
        uVar5 = FUN_00609e10(local_38);
        uVar3 = (**(code **)(*local_38 + 0x60))(local_38);
        uVar4 = (**(code **)(*local_38 + 0x48))(local_38);
        local_d8 = CONCAT44(local_d8._4_4_,uVar4);
        FUN_004238d0(local_90,0,0,uVar3);
        plVar7 = (longlong *)FUN_00609e10(local_38);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_a0);
        FUN_005fead0(uVar5,local_90,param_1[0x62],local_a0);
      }
      uVar5 = FUN_007d56e0(local_50);
      uVar8 = FUN_00609e10(local_38);
      uVar8 = FUN_005ffa40(uVar8);
      local_d8 = local_d8 & 0xffffffff00000000;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0xffffffff;
      local_b8 = 0xffffffff;
      local_b0 = 1;
      thunk_FUN_0413e9f5(uVar5,*(undefined4 *)(param_1[100] + 0xa0),uVar8,0);
      uVar1 = local_48;
      (**(code **)(*local_30 + 0x88))(local_30,local_48 & 0xffffffff);
      uVar3 = local_48._4_4_;
      (**(code **)(*local_30 + 0x70))(local_30,local_48._4_4_);
      plVar7 = (longlong *)FUN_00609e10(local_30);
      local_d8._0_4_ = uVar3;
      FUN_004238d0(local_90,0,0,uVar1 & 0xffffffff);
      (**(code **)(*plVar7 + 0x110))(plVar7,local_90,local_38);
      FUN_0060be30(local_30,0xffffff);
      (**(code **)(*local_30 + 0x80))(local_30,1);
      (**(code **)(*local_38 + 0x88))(local_38,uVar1 & 0xffffffff);
      (**(code **)(*local_38 + 0x70))(local_38,uVar3);
      local_70 = FUN_00609e10(local_38);
      local_68 = *(longlong *)(param_1[0x62] + 0x80);
      FUN_005fdab0(*(undefined8 *)(local_70 + 0x80),
                   *(undefined4 *)(*(longlong *)(local_68 + 0x18) + 0x28));
      plVar7 = (longlong *)FUN_00609e10(local_38);
      plVar9 = (longlong *)FUN_00609e10(local_38);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_90);
      (**(code **)(*plVar7 + 0xa8))(plVar7,local_90);
      plVar7 = (longlong *)FUN_00609e10(local_38);
      (**(code **)(*plVar7 + 0x88))(plVar7,0,0,local_30);
      cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
      if ((cVar2 == '\0') && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
        uVar5 = FUN_005ffa40(param_1[0x62]);
        uVar8 = FUN_005fdb10(*(undefined8 *)(param_1[0x62] + 0x80));
        uVar10 = (**(code **)(*local_30 + 0xe8))(local_30);
        local_d8 = 0;
        local_d0 = (int)local_40;
        local_c8 = local_40._4_4_;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = *(uint *)(&DAT_01fe3c18 + (ulonglong)local_51 * 4) | 4;
        thunk_FUN_03abf120(uVar5,uVar8,0,uVar10);
      }
      else {
        uVar5 = FUN_01bfaa40(param_1[100]);
        cVar2 = FUN_01bfab60(uVar5);
        if (cVar2 == '\0') {
          local_d8 = CONCAT44(local_d8._4_4_,local_40._4_4_ + local_48._4_4_);
          FUN_004238d0(local_90,local_40 & 0xffffffff,local_40._4_4_,(int)local_40 + (int)local_48);
          (**(code **)(*(longlong *)param_1[0x62] + 0x110))
                    ((longlong *)param_1[0x62],local_90,local_38);
        }
        else {
          local_d8 = CONCAT44(local_d8._4_4_,local_40._4_4_ + local_48._4_4_);
          FUN_004238d0(local_90,local_40 & 0xffffffff,local_40._4_4_,(int)local_40 + (int)local_48);
          (**(code **)(*(longlong *)param_1[0x62] + 0x110))
                    ((longlong *)param_1[0x62],local_90,local_30);
        }
      }
      FUN_00410f20(local_30);
      FUN_00410f20(local_38);
    }
  }
  return;
}

