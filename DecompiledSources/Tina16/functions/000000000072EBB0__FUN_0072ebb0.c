/* Ghidra address: 0072ebb0 */
/* Ghidra symbol: FUN_0072ebb0 */


undefined1
FUN_0072ebb0(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 *param_4,int param_5,
            undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  longlong *local_48;
  longlong *local_40;
  int local_34;
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  longlong local_20;
  
  local_90 = auStack_e8;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_78 = 0;
  FUN_0041b910(param_6);
  local_20 = FUN_00410e60(&DAT_0072e7b0,1);
  if (local_20 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = local_20 + 0x10;
  }
  FUN_0041b840(&local_78,lVar8);
  FUN_0041b840(local_20 + 0x28,param_6);
  param_3 = param_3 + 1;
  if (param_5 + 1 < param_3) {
    uVar7 = FUN_0044d710(&PTR_FUN_00472870,1,PTR_PTR_02001d80);
    param_3 = FUN_004134c0(uVar7);
  }
  *(int *)(local_20 + 0x20) = param_3;
  if (param_3 < 1) {
    uVar7 = FUN_0044d710(&PTR_FUN_00472870,1,PTR_PTR_02002e28);
    FUN_004134c0(uVar7);
  }
  local_29 = 0;
  local_b8 = FUN_007fc730(&PTR_FUN_0072e150,1,*(undefined8 *)PTR_DAT_02004030,0);
  *(longlong *)(local_20 + 0x18) = local_b8;
  if (local_20 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = local_20 + 0x30;
  }
  FUN_0041b840(local_b8 + 0x6b0,lVar8);
  uVar7 = FUN_007ffbe0(*(undefined8 *)(local_20 + 0x18));
  FUN_005ff880(uVar7,*(undefined8 *)(*(longlong *)(local_20 + 0x18) + 0xb8));
  uVar7 = FUN_007ffbe0(*(undefined8 *)(local_20 + 0x18));
  local_28 = FUN_0072bc40(uVar7);
  uVar7 = FUN_007ffbe0(*(undefined8 *)(local_20 + 0x18));
  local_50 = FUN_0072e8e0(auStack_e8,uVar7);
  FUN_007ff680(*(undefined8 *)(local_20 + 0x18),3);
  FUN_0064de00(*(undefined8 *)(local_20 + 0x18),param_1);
  uVar4 = thunk_FUN_03f3ed25(local_50 + 0xb4,local_28 & 0xffffffff,4);
  FUN_007fded0(*(undefined8 *)(local_20 + 0x18),uVar4);
  FUN_008004a0(*(undefined8 *)(local_20 + 0x18),1);
  FUN_00800470(*(undefined8 *)(local_20 + 0x18),4);
  local_4c = thunk_FUN_03f3ed25(8,local_28 >> 0x20,8);
  local_48 = (longlong *)0x0;
  iVar9 = *(int *)(local_20 + 0x20);
  local_30 = 0;
  puVar1 = param_4;
  puVar2 = param_2;
  if (-1 < iVar9 + -1) {
    do {
      local_80 = puVar2;
      local_88 = puVar1;
      local_40 = (longlong *)FUN_0067eb90(&PTR_FUN_00669e80,1,*(undefined8 *)(local_20 + 0x18));
      (**(code **)(*local_40 + 0x130))(local_40,*(undefined8 *)(local_20 + 0x18));
      FUN_0072e890(auStack_e8,&local_98,*local_80);
      FUN_0064de00(local_40,local_98);
      uVar4 = thunk_FUN_03f3ed25(8,local_28 & 0xffffffff,4);
      FUN_0064cb30(local_40,uVar4);
      FUN_0064cb90(local_40,local_4c);
      FUN_0064b380(local_40[0x1a],1,local_50);
      FUN_0067fec0(local_40,1);
      local_48 = (longlong *)FUN_00680200(&PTR_FUN_0066b990,1,*(undefined8 *)(local_20 + 0x18));
      (**(code **)(*local_48 + 0x130))(local_48,*(undefined8 *)(local_20 + 0x18));
      uVar4 = FUN_0072ea20(auStack_e8,*local_80);
      FUN_006807a0(local_48,uVar4);
      FUN_0064cb30(local_48,(int)local_40[0x12] + local_50);
      uVar7 = FUN_007ffbe0(*(undefined8 *)(local_20 + 0x18));
      iVar5 = FUN_0072e550(local_48,uVar7);
      uVar7 = FUN_007ffbe0(*(undefined8 *)(local_20 + 0x18));
      iVar6 = FUN_0072e550(local_40,uVar7);
      FUN_0064cb90(local_48,((*(int *)((longlong)local_40 + 0x94) +
                             *(int *)((longlong)local_40 + 0x9c)) - local_28._4_4_) -
                            (iVar5 - iVar6));
      iVar5 = FUN_0064d0b0(*(undefined8 *)(local_20 + 0x18));
      iVar6 = thunk_FUN_03f3ed25(8,local_28 & 0xffffffff,4);
      FUN_0064cbf0(local_48,(iVar5 - (int)local_48[0x12]) - iVar6);
      FUN_00680590(local_48,0xff);
      FUN_0064de00(local_48,*local_88);
      FUN_00680ad0(local_48);
      FUN_0067fd90(local_40,local_48);
      local_4c = *(int *)((longlong)local_48 + 0x94) + *(int *)((longlong)local_48 + 0x9c) + 5;
      local_88 = local_88 + 1;
      local_80 = local_80 + 1;
      iVar9 = iVar9 + -1;
      puVar1 = local_88;
      puVar2 = local_80;
    } while (iVar9 != 0);
  }
  local_54 = *(int *)((longlong)local_48 + 0x94) + *(int *)((longlong)local_48 + 0x9c) + 0xf;
  local_58 = thunk_FUN_03f3ed25(0x32,local_28 & 0xffffffff,4);
  local_5c = thunk_FUN_03f3ed25(0xe,local_28 >> 0x20,8);
  local_68 = (longlong *)FUN_00687cb0(&PTR_FUN_00673008,1,*(undefined8 *)(local_20 + 0x18));
  (**(code **)(*local_68 + 0x130))(local_68,*(undefined8 *)(local_20 + 0x18));
  FUN_0041ddd0(&local_a0,PTR_PTR_02003880);
  FUN_0064de00(local_68,local_a0);
  *(undefined4 *)(local_68 + 0x9e) = 1;
  FUN_00688430(local_68,1);
  iVar9 = FUN_0064d0b0(*(undefined8 *)(local_20 + 0x18));
  iVar5 = thunk_FUN_03f3ed25(8,local_28 & 0xffffffff,4);
  local_c8 = local_5c;
  (**(code **)(*local_68 + 400))(local_68,iVar9 + (local_58 + iVar5) * -2,local_54,local_58);
  local_70 = (longlong *)FUN_00687cb0(&PTR_FUN_00673008,1,*(undefined8 *)(local_20 + 0x18));
  (**(code **)(*local_70 + 0x130))(local_70,*(undefined8 *)(local_20 + 0x18));
  FUN_0041ddd0(&local_a8,PTR_PTR_02002b18);
  FUN_0064de00(local_70,local_a8);
  *(undefined4 *)(local_70 + 0x9e) = 2;
  *(undefined1 *)((longlong)local_70 + 0x499) = 1;
  iVar9 = FUN_0064d0b0(*(undefined8 *)(local_20 + 0x18));
  iVar5 = thunk_FUN_03f3ed25(8,local_28 & 0xffffffff,4);
  local_c8 = local_5c;
  (**(code **)(*local_70 + 400))(local_70,iVar9 - (local_58 + iVar5),local_54,local_58);
  FUN_007fdf10(*(undefined8 *)(local_20 + 0x18),
               *(int *)((longlong)local_70 + 0x94) + *(int *)((longlong)local_70 + 0x9c) + 0xd);
  iVar9 = (**(code **)(**(longlong **)(local_20 + 0x18) + 0x2d0))(*(longlong **)(local_20 + 0x18));
  if (iVar9 == 1) {
    local_34 = 0;
    iVar9 = FUN_00654c00();
    local_30 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar7 = FUN_00654bc0(*(undefined8 *)(local_20 + 0x18),local_30);
        cVar3 = FUN_004113d0(uVar7,&PTR_FUN_0066b990);
        if (cVar3 != '\0') {
          local_48 = (longlong *)FUN_00654bc0(*(undefined8 *)(local_20 + 0x18),local_30);
          FUN_0064dd90(local_48,&local_b0);
          FUN_00414ad0(param_4 + local_34,local_b0);
          local_34 = local_34 + 1;
        }
        local_30 = local_30 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    local_29 = 1;
  }
  FUN_00410f20(*(undefined8 *)(local_20 + 0x18));
  FUN_00414480(&local_b0);
  FUN_00414560(&local_a8,3);
  FUN_0041b800(&local_78);
  FUN_0041b800(&param_6);
  return local_29;
}

