/* Ghidra address: 01c2c4b0 */
/* Ghidra symbol: FUN_01c2c4b0 */


void FUN_01c2c4b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_res10;
  undefined8 local_res18;
  int local_194;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined1 local_168 [256];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  *param_4 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x28))();
  local_194 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x18))
                (*(longlong **)(param_1 + 0x118),local_40,local_194);
      FUN_00416ba0(&local_30,local_40[0],&DAT_01c2caec);
      while (iVar3 = FUN_004170c0(&DAT_01c2cafc,local_30,1), iVar3 != 0) {
        uVar4 = FUN_004170c0(&DAT_01c2cafc,local_30,1);
        FUN_01c29c00(&local_30,uVar4,1);
        FUN_01c29c10(&DAT_01c2caec,&local_30,uVar4);
      }
      FUN_0043e130(&local_48,local_30);
      iVar3 = FUN_004170c0(L"PINOUT",local_48,1);
      if (0 < iVar3) {
        FUN_0043e130(&local_50,local_30);
        uVar4 = FUN_004170c0(L"PINOUT",local_50,1);
        FUN_01c29c00(&local_30,uVar4,6);
        FUN_01c29c10(L"******",&local_30,uVar4);
      }
      FUN_0043e130(&local_58,local_30);
      iVar3 = FUN_004170c0(L"CONNECTION",local_58,1);
      if (0 < iVar3) {
        FUN_0043e130(&local_60,local_30);
        uVar4 = FUN_004170c0(L"CONNECTION",local_60,1);
        FUN_01c29c00(&local_30,uVar4,10);
        FUN_01c29c10(L"**********",&local_30,uVar4);
      }
      iVar3 = 0;
      if (local_30 != 0) {
        iVar3 = *(int *)(local_30 + -4);
      }
      lVar5 = FUN_00442b60(iVar3 + 1);
      FUN_00442620(lVar5,local_30);
      uVar4 = 0;
      if (local_30 != 0) {
        uVar4 = *(undefined4 *)(local_30 + -4);
      }
      FUN_0043ea00(&local_68,local_res10);
      for (lVar6 = FUN_005b8ae0(lVar5,uVar4,0,0,local_68,7); lVar6 != 0;
          lVar6 = FUN_005b8ae0(lVar5,uVar4,(lVar6 - lVar5) / 2 & 0xffffffff,uVar8,local_190,7)) {
        *param_4 = 1;
        uVar7 = FUN_00410e60(&DAT_01c28c48,1);
        *(undefined8 *)(param_1 + 0xd8) = uVar7;
        FUN_00416910(local_168,local_res18,0xff);
        FUN_00415020(*(longlong *)(param_1 + 0xd8) + 8,local_168,0x40);
        *(short *)(*(longlong *)(param_1 + 0xd8) + 0x4a) = (short)local_194;
        FUN_0043ea00(&local_170,local_res10);
        uVar1 = FUN_004170c0(local_170,local_30,1);
        *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4c) = uVar1;
        FUN_0043ea00(&local_178,local_res10);
        uVar1 = 0;
        if (local_178 != 0) {
          uVar1 = (undefined1)*(undefined4 *)(local_178 + -4);
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4d) = uVar1;
        *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4e) = 1;
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xd8));
        FUN_01c29c00(&local_30,*(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4c),1);
        FUN_01c29c10(&DAT_01c2cb8c,&local_30,*(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4c));
        if (DAT_03566762 != '\0') {
          FUN_00416cd0(&local_180,3,local_res18,&DAT_01c2cb9c,local_res10);
          uVar7 = FUN_0040f200(&DAT_03565e80,local_180);
          uVar7 = FUN_0040f200(uVar7,&LAB_01c2cbb0);
          uVar7 = FUN_0040ef30(uVar7,local_194);
          uVar7 = FUN_0040f3d0(uVar7,0x3a);
          uVar7 = FUN_0040ef30(uVar7,*(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x4c));
          FUN_0040f590(uVar7);
          FUN_00409900();
        }
        uVar4 = 0;
        if (local_30 != 0) {
          uVar4 = *(undefined4 *)(local_30 + -4);
        }
        FUN_0043ea00(&local_188,local_res10);
        uVar8 = 0;
        if (local_188 != 0) {
          uVar8 = *(undefined4 *)(local_188 + -4);
        }
        FUN_0043ea00(&local_190,local_res10);
      }
      FUN_00442c30(lVar5);
      local_194 = local_194 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_190,5);
  FUN_00414560(&local_68,6);
  FUN_00414480(&local_30);
  FUN_00414560(&local_res10,2);
  return;
}

