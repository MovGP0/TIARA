/* Ghidra address: 016c2f90 */
/* Ghidra symbol: FUN_016c2f90 */


void FUN_016c2f90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_3d = '\0';
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_68 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_016a48c0(*(undefined8 *)(param_1 + 0xa30),&local_50);
  FUN_004b4b10(uVar3,local_50);
  FUN_00416880(&local_58,*(undefined8 *)(param_2 + 0x78));
  (**(code **)(*local_68 + 0x60))(local_68,local_58);
  local_78 = FUN_016b0a80(&DAT_016af510,1);
  FUN_016b0c10(local_78,uVar3,*(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c));
  FUN_016b16f0(local_78,local_68);
  FUN_004169a0(&local_60,*(undefined8 *)(param_2 + 8));
  FUN_016b1670(local_78,local_60);
  FUN_016b1730(local_78,*(undefined4 *)(param_1 + 0x998));
  local_70 = FUN_016b1ec0(&DAT_016b1d40,1,local_78);
  iVar2 = FUN_016b25d0();
  if (iVar2 != 0) {
    FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0,&DAT_016c320c,0xffffffff);
  }
  FUN_016b1300(local_78);
  local_48 = *(undefined8 *)(param_1 + 0xa30);
  uVar1 = *(undefined8 *)(param_1 + 0xa40);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  iVar2 = *(int *)(*(longlong *)(local_78 + 0x38) + 0x10);
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_004aeac0(*(undefined8 *)(local_78 + 0x38),iVar5);
      FUN_016c2730(auStack_98,uVar4);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_3d != '\0') {
    FUN_016c2450(auStack_98);
  }
  *(undefined8 *)(param_1 + 0xa30) = local_48;
  *(undefined8 *)(param_1 + 0xa40) = uVar1;
  FUN_00410f20(local_70);
  FUN_00410f20(local_78);
  FUN_00410f20(local_68);
  FUN_00410f20(uVar3);
  FUN_00414560(&local_60,3);
  return;
}

