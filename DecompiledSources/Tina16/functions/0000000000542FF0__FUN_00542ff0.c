/* Ghidra address: 00542ff0 */
/* Ghidra symbol: FUN_00542ff0 */


longlong *
FUN_00542ff0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
            undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *local_res20;
  undefined1 auStack_2b8 [40];
  longlong *local_290;
  int local_284;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 local_258 [256];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 *local_30;
  
  local_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  local_280 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_290 = param_2;
  FUN_00417580(local_50,&DAT_00527bf8);
  FUN_00417580(local_70,&DAT_00527bf8);
  FUN_00417580(local_90,&DAT_00527bf8);
  FUN_00417580(local_b0,&DAT_00527bf8);
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = *(undefined8 *)(param_6 + -8);
  }
  FUN_00419260(local_290,&DAT_00492e48,1,uVar2);
  iVar9 = 0;
  if (param_6 != 0) {
    iVar9 = (int)*(undefined8 *)(param_6 + -8);
  }
  local_284 = 0;
  local_res20 = param_4;
  if (-1 < iVar9 + -1) {
    do {
      lVar8 = (longlong)local_284;
      plVar6 = *(longlong **)(param_6 + lVar8 * 8);
      uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
      uVar3 = FUN_005471b0(uVar2);
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 0x13) {
        if (uVar3 == 0x12) {
LAB_005434b9:
          FUN_00542f20(auStack_2b8,&local_280);
          FUN_00564970(local_b0,local_280);
          plVar6 = *(longlong **)(param_6 + lVar8 * 8);
          uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
          uVar2 = FUN_005466a0(uVar2);
          FUN_005376c0(local_b0,&local_278,uVar2,1);
          FUN_00417c40(*local_290 + lVar8 * 0x20,&local_278,&DAT_00527bf8);
        }
        else if (uVar3 == 5) {
          FUN_00542f90(auStack_2b8,local_258);
          FUN_005607a0(local_90,local_258);
          plVar6 = *(longlong **)(param_6 + lVar8 * 8);
          uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
          uVar2 = FUN_005466a0(uVar2);
          FUN_005376c0(local_90,&local_158,uVar2,1);
          FUN_00417c40(*local_290 + lVar8 * 0x20,&local_158,&DAT_00527bf8);
        }
        else {
          if (uVar3 != 7) {
            if (1 < uVar3 - 10) goto LAB_0054352a;
            goto LAB_005434b9;
          }
          local_30 = (undefined8 *)*local_res20;
          uVar2 = FUN_00542970(DAT_020116a8,local_30);
          FUN_00536640(local_70,uVar2);
          plVar6 = *(longlong **)(param_6 + lVar8 * 8);
          uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
          uVar2 = FUN_005466a0(uVar2);
          FUN_005376c0(local_70,&local_138,uVar2,1);
          FUN_00417c40(*local_290 + lVar8 * 0x20,&local_138,&DAT_00527bf8);
          local_res20 = local_res20 + 1;
        }
      }
      else if (uVar3 == 0x13) {
        local_30 = (undefined8 *)*local_res20;
        if (local_30 == (undefined8 *)0x0) {
          FUN_00536400(&local_f8);
          FUN_00417c40(*local_290 + lVar8 * 0x20,&local_f8,&DAT_00527bf8);
        }
        else {
          puVar5 = (undefined8 *)FUN_00589390(*local_30);
          FUN_005366b0(local_50,*puVar5);
          plVar6 = *(longlong **)(param_6 + lVar8 * 8);
          uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
          uVar2 = FUN_005466a0(uVar2);
          FUN_005376c0(local_50,&local_118,uVar2,1);
          FUN_00417c40(*local_290 + lVar8 * 0x20,&local_118,&DAT_00527bf8);
        }
        local_res20 = local_res20 + 1;
      }
      else if (uVar3 == 0x14) {
        local_30 = (undefined8 *)*local_res20;
        if (local_30 == (undefined8 *)0x0) {
          FUN_00536400(&local_d8);
          FUN_00417c40(*local_290 + lVar8 * 0x20,&local_d8,&DAT_00527bf8);
        }
        else {
          plVar6 = *(longlong **)(param_6 + lVar8 * 8);
          uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
          puVar4 = (undefined *)FUN_005466a0(uVar2);
          if (puVar4 == &DAT_005866b0) {
            plVar6 = *(longlong **)(param_6 + lVar8 * 8);
            uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
            uVar2 = FUN_005466a0(uVar2);
            uVar7 = FUN_00417740(*local_290 + lVar8 * 0x20,&DAT_00527bf8);
            FUN_00538170(*local_30,uVar2,uVar7);
          }
          else {
            plVar6 = *(longlong **)(param_6 + lVar8 * 8);
            uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
            uVar2 = FUN_005466a0(uVar2);
            uVar7 = FUN_00417740(*local_290 + lVar8 * 0x20,&DAT_00527bf8);
            FUN_00538080(&local_30,uVar2,uVar7);
          }
        }
        local_res20 = local_res20 + 1;
      }
      else {
LAB_0054352a:
        plVar6 = *(longlong **)(param_6 + lVar8 * 8);
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
        iVar1 = (**(code **)(*plVar6 + 0x30))(plVar6);
        plVar6 = *(longlong **)(param_6 + lVar8 * 8);
        uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
        uVar2 = FUN_005466a0(uVar2);
        uVar7 = FUN_00417740(*local_290 + lVar8 * 0x20,&DAT_00527bf8);
        FUN_00538080(local_res20,uVar2,uVar7);
        local_res20 = (longlong *)((longlong)local_res20 + (longlong)iVar1);
      }
      local_284 = local_284 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_004144d0(&local_280);
  FUN_00417740(&local_278,&DAT_00527bf8);
  FUN_00417840(&local_158,&DAT_00527bf8,5);
  FUN_00417840(local_b0,&DAT_00527bf8,4);
  return local_290;
}

