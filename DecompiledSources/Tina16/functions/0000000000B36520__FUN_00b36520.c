/* Ghidra address: 00b36520 */
/* Ghidra symbol: FUN_00b36520 */


undefined4 FUN_00b36520(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  bVar1 = false;
  puVar6 = (undefined1 *)FUN_00b23d20(param_3,param_2);
  FUN_0061d490(&local_48,param_1,&DAT_00b36cbc,0,1);
  FUN_0061d490(local_40,local_48,&DAT_00b36ccc,0,1);
  FUN_0061d8e0(&local_20,local_40[0]);
  FUN_004155b0(&local_20,&DAT_00b36cdc);
  iVar4 = FUN_00417250("style:",local_20,1);
  if (0 < iVar4) {
    uVar5 = 0;
    if (local_20 != 0) {
      uVar5 = *(undefined4 *)(local_20 + -4);
    }
    FUN_00415ad0(&local_28,local_20,iVar4 + 6,uVar5);
    iVar4 = FUN_00417250(&DAT_00b36cdc,local_28,1);
    FUN_00415ad0(&local_60,local_28,1,iVar4 + -1);
    FUN_0061d890(&local_58,local_60);
    FUN_0061d8e0(&local_50,local_58);
    FUN_00414c70(&local_28,local_50);
    iVar4 = FUN_00417250(&DAT_00b36d00,local_28,1);
    if (0 < iVar4) {
      *puVar6 = 1;
    }
    iVar4 = FUN_00417250(&DAT_00b36d10,local_28,1);
    if (0 < iVar4) {
      puVar6[1] = 1;
    }
    iVar4 = FUN_00417250(&DAT_00b36d20,local_28,1);
    if (0 < iVar4) {
      puVar6[2] = 1;
    }
    bVar1 = true;
  }
  iVar4 = FUN_00417250("script:",local_20,1);
  if (0 < iVar4) {
    uVar5 = 0;
    if (local_20 != 0) {
      uVar5 = *(undefined4 *)(local_20 + -4);
    }
    FUN_00415ad0(&local_28,local_20,iVar4 + 7,uVar5);
    iVar4 = FUN_00417250(&DAT_00b36cdc,local_28,1);
    FUN_00415ad0(&local_78,local_28,1,iVar4 + -1);
    FUN_0061d890(&local_70,local_78);
    FUN_0061d8e0(&local_68,local_70);
    FUN_00414c70(&local_28,local_68);
    iVar4 = FUN_00417250(&DAT_00b36d44,local_28,1);
    if (0 < iVar4) {
      puVar6[5] = 2;
    }
    iVar4 = FUN_00417250("super",local_28,1);
    if (0 < iVar4) {
      puVar6[5] = 1;
    }
    bVar1 = true;
  }
  iVar4 = FUN_00417250("color:",local_20,1);
  if (0 < iVar4) {
    uVar5 = 0;
    if (local_20 != 0) {
      uVar5 = *(undefined4 *)(local_20 + -4);
    }
    FUN_00415ad0(&local_28,local_20,iVar4 + 6,uVar5);
    iVar4 = FUN_00417250(&DAT_00b36cdc,local_28,1);
    FUN_00415ad0(&local_90,local_28,1,iVar4 + -1);
    FUN_0061d890(&local_88,local_90);
    FUN_0061d8e0(&local_80,local_88);
    FUN_00414c70(&local_28,local_80);
    iVar4 = FUN_00417250(&DAT_00b36d7c,local_28,1);
    if (iVar4 != 1) {
      FUN_004156b0(&local_28,&DAT_00b36d7c,local_28);
    }
    FUN_00416880(&local_98,local_28);
    uVar5 = FUN_0043fc00(local_98);
    uVar2 = FUN_00b1bcf0(uVar5);
    puVar6[6] = uVar2;
    bVar1 = true;
  }
  iVar4 = FUN_00417250("size:",local_20,1);
  if (0 < iVar4) {
    uVar5 = 0;
    if (local_20 != 0) {
      uVar5 = *(undefined4 *)(local_20 + -4);
    }
    FUN_00415ad0(&local_28,local_20,iVar4 + 5,uVar5);
    iVar4 = FUN_00417250(&DAT_00b36cdc,local_28,1);
    FUN_00415ad0(&local_b0,local_28,1,iVar4 + -1);
    FUN_0061d890(&local_a8,local_b0);
    FUN_0061d8e0(&local_a0,local_a8);
    FUN_00414c70(&local_28,local_a0);
    FUN_00416880(&local_b8,local_28);
    uVar3 = FUN_0043fc00(local_b8);
    *(undefined2 *)(puVar6 + 7) = uVar3;
    bVar1 = true;
  }
  iVar4 = FUN_00417250("font:",local_20,1);
  if (0 < iVar4) {
    uVar5 = 0;
    if (local_20 != 0) {
      uVar5 = *(undefined4 *)(local_20 + -4);
    }
    FUN_00415ad0(&local_28,local_20,iVar4 + 5,uVar5);
    iVar4 = FUN_00417250(&DAT_00b36cdc,local_28,1);
    FUN_00415ad0(&local_c8,local_28,1,iVar4 + -1);
    FUN_0061d8e0(&local_c0,local_c8);
    FUN_00414c70(&local_28,local_c0);
    FUN_00414c70(&local_30,local_28);
    FUN_00415f40(&local_d0,local_30);
    FUN_00b23820(puVar6,local_d0);
    bVar1 = true;
  }
  local_d4 = param_2;
  if (bVar1) {
    local_d4 = FUN_00b23dd0(param_3);
  }
  FUN_00414520(&local_d0);
  FUN_00414590(&local_c8,2);
  FUN_00414480(&local_b8);
  FUN_00414590(&local_b0,3);
  FUN_00414480(&local_98);
  FUN_00414590(&local_90,0xb);
  FUN_00414590(&local_30,3);
  return local_d4;
}

