/* Ghidra address: 01405a00 */
/* Ghidra symbol: FUN_01405a00 */


void FUN_01405a00(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x6d8);
  lVar2 = *(longlong *)(param_1 + 0x7a8);
  FUN_00848790(uVar1,1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),local_50);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),0,0,local_50[0]);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_58);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),1,0,local_58);
  local_40[0] = FUN_01d3c210(lVar2,0);
  puVar3 = (undefined8 *)FUN_01d3c210(lVar2,0);
  *puVar3 = 0x3d719799812dea11;
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x18))
            (*(longlong **)(param_1 + 0x7b8),&local_60,1);
  lVar4 = FUN_01d3c210(lVar2,0);
  uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,lVar4 + 8,0);
  FUN_00b0ab70(uVar1,local_60,uVar5);
  FUN_00b909d0(local_40,8);
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x18))
            (*(longlong **)(param_1 + 0x7b8),&local_68,2);
  lVar4 = FUN_01d3c210(lVar2,0);
  uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,lVar4 + 0x10,0);
  FUN_00b0ab70(uVar1,local_68,uVar5);
  FUN_00b909d0(local_40,8);
  local_84 = 3;
  iVar6 = *(int *)(lVar2 + 0x10) + -1;
  local_88 = 1;
  if (0 < iVar6) {
    do {
      local_40[0] = FUN_01d3c210(lVar2,local_88);
      (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x18))
                (*(longlong **)(param_1 + 0x7b8),&local_70,local_84);
      uVar5 = FUN_01d3c210(lVar2,local_88);
      uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,uVar5,0);
      FUN_00b0ab70(uVar1,local_70,uVar5);
      FUN_00b909d0(local_40,8);
      local_40[0] = FUN_01d3c210(lVar2,local_88);
      (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x18))
                (*(longlong **)(param_1 + 0x7b8),&local_78,local_84 + 1);
      lVar4 = FUN_01d3c210(lVar2,local_88);
      uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,lVar4 + 8);
      FUN_00b0ab70(uVar1,local_78,uVar5);
      FUN_00b909d0(local_40,8);
      local_40[0] = FUN_01d3c210(lVar2,local_88);
      (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x18))
                (*(longlong **)(param_1 + 0x7b8),&local_80,local_84 + 2);
      lVar4 = FUN_01d3c210(lVar2,local_88);
      uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,lVar4 + 0x10);
      FUN_00b0ab70(uVar1,local_80,uVar5);
      FUN_00b909d0(local_40,8);
      local_84 = local_84 + 3;
      local_88 = local_88 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_88 = *(int *)(lVar2 + 0x10) * 3;
  iVar6 = *(int *)(param_1 + 0x7c0) + -1;
  if (local_88 <= iVar6) {
    iVar6 = iVar6 + *(int *)(lVar2 + 0x10) * -3 + 1;
    do {
      FUN_0084e3e0(uVar1,0,local_88,&DAT_01405dfc);
      FUN_0084e3e0(uVar1,1,local_88,&DAT_01405dfc);
      local_88 = local_88 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_80,5);
  FUN_00414560(&local_58,2);
  return;
}

