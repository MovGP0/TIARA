/* Ghidra address: 0133a5c0 */
/* Ghidra symbol: FUN_0133a5c0 */


void FUN_0133a5c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                 undefined1 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined *local_c0;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
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
  undefined1 *local_40;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_e8;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  local_20 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))
            (plVar1,L"Voltage/Current | Current iteration | Previous iteration | Error | Tolerance")
  ;
  local_98 = *(int *)(param_3 + 0x10) + -1;
  local_34 = 0;
  iVar2 = *(int *)(param_3 + 0x10);
  if (-1 < local_98) {
    do {
      local_98 = iVar2;
      local_b0 = local_34;
      if (*(uint *)(param_3 + 0x10) <= local_34) {
        FUN_00594f90();
      }
      local_a8 = (longlong)(int)local_34;
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
      FUN_016f0060(&local_30,param_2,0,*(undefined4 *)(*(longlong *)(param_3 + 8) + local_a8 * 4));
      if (*(uint *)(param_3 + 0x10) <= local_b0) {
        FUN_00594f90();
      }
      local_18 = 0;
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
      FUN_00b8fd60(&local_48,
                   *(undefined8 *)
                    (*(longlong *)(param_2 + 0x118) +
                    (longlong)*(int *)(*(longlong *)(param_3 + 8) + local_a8 * 4) * 8),param_5,0);
      local_c8 = (undefined *)local_48;
      local_c0 = &DAT_0133ae04;
      FUN_00416cd0(&local_18,4,local_30,&DAT_0133ae04);
      if (*(uint *)(param_3 + 0x10) <= local_b0) {
        FUN_00594f90();
      }
      local_10 = 0;
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
      FUN_00b8fd60(&local_50,
                   *(undefined8 *)
                    (*(longlong *)(param_2 + 0x128) +
                    (longlong)*(int *)(*(longlong *)(param_3 + 8) + local_a8 * 4) * 8),param_5,0);
      local_c8 = &DAT_0133ae04;
      FUN_00416cd0(&local_10,3,local_18,local_50);
      if (*(uint *)(param_3 + 0x10) <= local_b0) {
        FUN_00594f90();
      }
      if (*(uint *)(param_3 + 0x10) <= local_b0) {
        FUN_00594f90();
      }
      lVar3 = (longlong)*(int *)(*(longlong *)(param_3 + 8) + local_a8 * 4);
      uVar4 = FUN_0040c850(*(double *)(*(longlong *)(param_2 + 0x118) + lVar3 * 8) -
                           *(double *)(*(longlong *)(param_2 + 0x128) + lVar3 * 8));
      local_c8._0_1_ = 1;
      FUN_00b8fd60(&local_60,uVar4,param_5,0);
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
      FUN_00b8fd60(&local_68,*(undefined8 *)(param_2 + 0x358),param_5,0);
      local_c8 = &DAT_0133ae04;
      local_c0 = (undefined *)local_68;
      FUN_00416cd0(&local_58,4,local_10,local_60);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_58);
      FUN_00414480(&local_10);
      FUN_00414480(&local_18);
      local_34 = local_34 + 1;
      local_98 = local_98 + -1;
      iVar2 = local_98;
    } while (local_98 != 0);
  }
  local_94 = *(int *)(param_4 + 0x10) + -1;
  local_34 = 0;
  iVar2 = *(int *)(param_4 + 0x10);
  if (-1 < local_94) {
    do {
      local_94 = iVar2;
      local_ac = local_34;
      if (*(uint *)(param_4 + 0x10) <= local_34) {
        FUN_00594f90();
      }
      local_a0 = (longlong)(int)local_34;
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
      FUN_016f0060(&local_30,param_2,0,*(undefined4 *)(*(longlong *)(param_4 + 8) + local_a0 * 4));
      if (*(uint *)(param_4 + 0x10) <= local_ac) {
        FUN_00594f90();
      }
      local_28 = 0;
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
      FUN_00b8fd60(&local_70,
                   *(undefined8 *)
                    (*(longlong *)(param_2 + 0x118) +
                    (longlong)*(int *)(*(longlong *)(param_4 + 8) + local_a0 * 4) * 8),param_5,0);
      local_c8 = (undefined *)local_70;
      local_c0 = &DAT_0133ae04;
      FUN_00416cd0(&local_28,4,local_30,&DAT_0133ae04);
      if (*(uint *)(param_4 + 0x10) <= local_ac) {
        FUN_00594f90();
      }
      local_20 = 0;
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
      FUN_00b8fd60(&local_78,
                   *(undefined8 *)
                    (*(longlong *)(param_2 + 0x128) +
                    (longlong)*(int *)(*(longlong *)(param_4 + 8) + local_a0 * 4) * 8),param_5,0);
      local_c8 = &DAT_0133ae04;
      FUN_00416cd0(&local_20,3,local_28,local_78);
      if (*(uint *)(param_4 + 0x10) <= local_ac) {
        FUN_00594f90();
      }
      if (*(uint *)(param_4 + 0x10) <= local_ac) {
        FUN_00594f90();
      }
      lVar3 = (longlong)*(int *)(*(longlong *)(param_4 + 8) + local_a0 * 4);
      uVar4 = FUN_0040c850(*(double *)(*(longlong *)(param_2 + 0x118) + lVar3 * 8) -
                           *(double *)(*(longlong *)(param_2 + 0x128) + lVar3 * 8));
      local_c8._0_1_ = 1;
      FUN_00b8fd60(&local_88,uVar4,param_5,0);
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
      FUN_00b8fd60(&local_90,*(undefined8 *)(param_2 + 0x358),param_5,0);
      local_c8 = &DAT_0133ae04;
      local_c0 = (undefined *)local_90;
      FUN_00416cd0(&local_80,4,local_20,local_88);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_80);
      FUN_00414480(&local_20);
      FUN_00414480(&local_28);
      local_34 = local_34 + 1;
      local_94 = local_94 + -1;
      iVar2 = local_94;
    } while (local_94 != 0);
  }
  FUN_00414560(&local_90,10);
  FUN_00414480(&local_30);
  return;
}

