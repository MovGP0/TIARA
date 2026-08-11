/* Ghidra address: 0164a0a0 */
/* Ghidra symbol: FUN_0164a0a0 */


undefined8 FUN_0164a0a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int local_bc;
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
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  uVar5 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_3 + 0x48));
  FUN_00414ad0(param_1 + 0x670,&DAT_0164a3d8);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x580) + 0x28))();
  local_bc = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x580) + 0x18))
                (*(longlong **)(param_1 + 0x580),&local_80,local_bc);
      FUN_01615910(local_80,&local_98,&local_a0,&DAT_0164a3e8);
      FUN_016159e0(&local_88,local_98);
      FUN_016159e0(&local_90,local_a0);
      FUN_01615910(local_88,&local_60,&local_30,&DAT_0164a3f8);
      iVar2 = FUN_0043fc00(local_30);
      FUN_01615910(local_90,&local_58,&local_30,&DAT_0164a3f8);
      uVar3 = FUN_0043fc00(local_30);
      iVar6 = -1;
      if (iVar2 == -1) {
        iVar6 = 0;
      }
      uVar4 = 0;
      if (iVar6 != 0) {
        uVar4 = FUN_01634fe0(uVar5,iVar2,local_60);
      }
      FUN_01635100(param_1,&local_70,uVar3);
      FUN_01649f90(*(undefined8 *)(param_3 + 0x20),&local_48,uVar4);
      FUN_00416cd0(&local_30,5,&DAT_0164a408,local_70,&DAT_0164a3d8,local_48,&DAT_0164a418);
      FUN_00416ad0(param_1 + 0x670,local_30);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x580) + 0x28))
                        (*(longlong **)(param_1 + 0x580));
      if (local_bc < iVar2 + -1) {
        FUN_00416ad0(param_1 + 0x670,&LAB_0164a428);
      }
      local_bc = local_bc + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00416ad0(param_1 + 0x670,&DAT_0164a418);
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x670));
  FUN_00414560(&local_a0,0xf);
  return param_2;
}

