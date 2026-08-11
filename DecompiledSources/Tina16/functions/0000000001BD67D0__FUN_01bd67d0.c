/* Ghidra address: 01bd67d0 */
/* Ghidra symbol: FUN_01bd67d0 */


void FUN_01bd67d0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 *local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_2c;
  int local_24;
  longlong *local_20;
  
  local_80 = auStack_a8;
  uVar3 = FUN_01bfaa70(param_1[0x93]);
  local_20 = (longlong *)FUN_01bfd250(&PTR_FUN_01bde8d8,1,uVar3);
  (**(code **)(*local_20 + 0x60))(local_20,0);
  local_48 = FUN_01bfaa70(param_1[0x93]);
  iVar7 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
  local_24 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar5 = param_1[0xb0];
      if (lVar5 != 0) {
        uVar3 = FUN_01bfaa70(param_1[0x93]);
        lVar4 = FUN_01bfb960(uVar3,local_24);
        iVar2 = FUN_004aeba0(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar4 + 0x80));
        if (iVar2 != -1) {
          uVar3 = FUN_01bfaa70(local_20);
          local_38 = (longlong *)FUN_01bfb850(uVar3);
          (**(code **)(*local_38 + 0x50))(local_38,7);
          uVar3 = FUN_01bfaa70(param_1[0x93]);
          uVar3 = FUN_01bfb960(uVar3,local_24);
          (**(code **)(*local_38 + 0x10))(local_38,uVar3);
          FUN_01bfe550(local_38,0xffffffff);
        }
      }
      local_24 = local_24 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  lVar5 = (**(code **)(*param_1 + 0x3b0))(param_1);
  local_88 = (**(code **)(lVar5 + 0x78))(lVar5,1,param_1);
  param_1[0xb1] = local_88;
  local_40 = (longlong *)FUN_004113f0(local_88,&PTR_FUN_01bddf60);
  uVar3 = FUN_01c03e40(param_1);
  (**(code **)(*local_40 + 0x318))(local_40,uVar3);
  local_40[0xba] = param_1[0xb1];
  local_40[0xb6] = param_1[0xb2];
  (**(code **)(*local_40 + 0x130))(local_40,param_1);
  (**(code **)(*local_40 + 0x308))(local_40,local_20);
  (**(code **)(*local_40 + 0x3d8))(local_40,1);
  FUN_00654320(local_40,0);
  bVar1 = *(byte *)((longlong)param_1 + 0x4c3);
  if (bVar1 < 2) {
    lVar5 = param_1[0xb2];
    local_78 = (*(int *)(lVar5 + 0x90) - *(int *)(param_1[0xb1] + 0x98)) + *(int *)(lVar5 + 0x98);
    local_74 = *(int *)(lVar5 + 0x94) + *(int *)(lVar5 + 0x9c);
    local_70 = local_74;
    local_6c = local_78;
    local_2c = FUN_0064d1f0(param_1,&local_78);
  }
  else if (bVar1 == 2) {
    lVar5 = param_1[0xb2];
    local_68 = *(undefined4 *)(lVar5 + 0x90);
    local_64 = *(int *)(lVar5 + 0x94) + *(int *)(lVar5 + 0x9c);
    local_60 = local_64;
    local_5c = local_68;
    local_2c = FUN_0064d1f0(param_1,&local_68);
  }
  else if (bVar1 == 3) {
    local_58 = *(undefined4 *)(param_1[0xb2] + 0x90);
    local_54 = *(int *)(param_1[0xb2] + 0x94) - *(int *)(param_1[0xb1] + 0x9c);
    local_50 = local_54;
    local_4c = local_58;
    local_2c = FUN_0064d1f0(param_1,&local_58);
  }
  FUN_01be60b0(local_40,local_2c & 0xffffffff,local_2c._4_4_);
  FUN_00410f20(param_1[0xb1]);
  param_1[0xb1] = 0;
  FUN_00410f20(local_20[0x10]);
  FUN_00410f20(local_20);
  pcVar6 = (code *)FUN_00411550(param_1,0xffce);
  (*pcVar6)(param_1);
  return;
}

