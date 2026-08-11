/* Ghidra address: 01a7e760 */
/* Ghidra symbol: FUN_01a7e760 */


void FUN_01a7e760(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  uint local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_39;
  longlong *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_b0 = auStack_108;
  local_b8 = 0;
  FUN_01aee720(&local_b8,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFCopyMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_b8);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
    goto LAB_01a7ed18;
  }
  local_48 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_39 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_48);
  if ((local_39 == '\x02') || (local_39 == '\b')) {
    local_30 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_e8 = local_e8 & 0xffffff00;
    local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_30,1);
    local_80 = *(longlong **)(param_1 + 0x7a0);
    uVar1 = (**(code **)(*local_80 + 0x18))(local_80);
    uVar2 = (**(code **)(*local_80 + 0x20))(local_80,local_20);
    uVar3 = (**(code **)(*local_80 + 0x28))(local_80,local_20);
    FUN_01d31180(local_20,uVar1,uVar2,uVar3);
    FUN_01cedda0(*(undefined8 *)(param_1 + 0x7a0),local_20);
    FUN_00410f20(local_20);
    uVar4 = (**(code **)*local_30)(local_30);
    local_28 = thunk_FUN_0412a7bb(0x2002,uVar4);
    local_50 = thunk_FUN_0416a623(local_28);
    local_98 = local_30[1];
    local_a0 = (**(code **)*local_30)(local_30);
    FUN_00409a70(local_98,local_50,local_a0);
    plVar5 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar5 + 0x30))(plVar5);
    uVar4 = FUN_006a6030();
    FUN_006a5e10(uVar4,DAT_01fcab58,local_28);
    plVar5 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar5 + 0x28))(plVar5);
    thunk_FUN_04172795(local_28);
    FUN_00410f20(local_30);
    goto LAB_01a7ed18;
  }
  local_88 = *(longlong *)(param_1 + 0x798);
  local_6c = *(int *)(local_88 + 0x1c) - *(int *)(local_88 + 0x14);
  local_70 = *(int *)(local_88 + 0x20) - *(int *)(local_88 + 0x18);
  FUN_01b23050(local_6c,local_70,&local_74,&local_78);
  local_58 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
  (**(code **)(*local_58 + 0x88))(local_58,local_74);
  (**(code **)(*local_58 + 0x70))(local_58,local_78);
  local_38 = (longlong *)FUN_006056e0(&PTR_FUN_005f7f40,1,local_58,0);
  FUN_005fc860(local_38[0xe],0xffffff);
  (**(code **)(*local_38 + 0x120))(local_38,10,10,&DAT_01a7ee08);
  local_90 = *(longlong *)(param_1 + 0x798);
  local_68 = *(undefined8 *)(param_1 + 0x780);
  *(longlong **)(param_1 + 0x780) = local_38;
  *PTR_DAT_02001b68 = 1;
  local_e8 = local_70 - 1;
  FUN_00498350(local_c8,0,0,local_6c + -1);
  FUN_01acf9e0(local_90,local_c8);
  local_d0 = FUN_00498310(0,0);
  FUN_01ace140(local_90,param_1,*(undefined8 *)(param_1 + 0x780),&local_d0);
  if (*(char *)(local_90 + 0x108) == '\0') {
LAB_01a7ec14:
    FUN_01acfc60(local_90);
  }
  else {
    if (*(byte *)(local_90 + 0xb0) < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)local_90 >> 8),1) <<
               (*(byte *)(local_90 + 0xb0) & 0x1f) & 1U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) goto LAB_01a7ec14;
    FUN_01acfa60(local_90);
  }
  FUN_01aceb90(local_90,1);
  *PTR_DAT_02001b68 = 0;
  *(undefined8 *)(param_1 + 0x780) = local_68;
  FUN_01a782f0(param_1,local_c8);
  FUN_01acf9e0(local_90,local_c8);
  local_d0 = FUN_00498310(0,0);
  FUN_01ace140(local_90,param_1,*(undefined8 *)(param_1 + 0x780),&local_d0);
  if (*(char *)(local_90 + 0x108) == '\0') {
LAB_01a7ecd5:
    FUN_01acfc60(local_90);
  }
  else {
    if (*(byte *)(local_90 + 0xb0) < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)local_90 >> 8),1) <<
               (*(byte *)(local_90 + 0xb0) & 0x1f) & 1U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) goto LAB_01a7ecd5;
    FUN_01acfa60(local_90);
  }
  FUN_01aceb90(local_90,1);
  FUN_00410f20(local_38);
  plVar5 = (longlong *)FUN_006a6030();
  (**(code **)(*plVar5 + 0x10))(plVar5,local_58);
  FUN_00410f20(local_58);
LAB_01a7ed18:
  FUN_00414480(&local_b8);
  return;
}

