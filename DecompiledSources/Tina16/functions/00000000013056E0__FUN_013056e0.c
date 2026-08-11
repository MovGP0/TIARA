/* Ghidra address: 013056e0 */
/* Ghidra symbol: FUN_013056e0 */


void FUN_013056e0(longlong param_1,int param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_70 = auStack_d8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_20[0] = 0;
  puVar1 = auStack_d8;
  if (param_3 != 0) {
    uVar2 = FUN_006dd6f0(param_3);
    lVar4 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar2);
    puVar1 = local_70;
    if (((*(uint *)(*(longlong *)(lVar4 + 0x18) + 4) & 0x20) == 0x20) &&
       (*(longlong *)(param_1 + 0xaf8) != 0)) {
      iVar3 = FUN_00654c00(*(undefined8 *)(param_1 + 0x850));
      puVar1 = local_70;
      if (iVar3 != 0) {
        local_28 = FUN_01306f40(param_1,param_3);
        local_2c = FUN_01306fd0(param_1,param_3);
        local_9c = local_28;
        local_24 = 0;
        puVar1 = local_70;
        if (-1 < local_28) {
          local_9c = local_28 + 1;
          do {
            if (param_2 == 0) {
              local_b8 = local_24;
              local_48 = (longlong *)
                         FUN_013070d0(param_1,*(undefined8 *)(param_1 + 0x850),local_48,
                                      L"comB_RefSel");
              if (local_48 != (longlong *)0x0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                uVar2 = (**(code **)(*local_48 + 0x260))(local_48);
                FUN_012e5fa0(uVar5,local_2c,uVar2);
              }
              local_b8 = local_24;
              local_40 = (longlong *)
                         FUN_013071b0(param_1,*(undefined8 *)(param_1 + 0x850),local_40,
                                      L"cB_RefName");
              if (local_40 != (longlong *)0x0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                uVar2 = (**(code **)(*local_40 + 0x260))(local_40);
                FUN_012e5eb0(uVar5,local_2c,uVar2);
              }
              local_b8 = local_24;
              local_40 = (longlong *)
                         FUN_013071b0(param_1,*(undefined8 *)(param_1 + 0x850),local_40,
                                      L"cB_compTime");
              if (local_40 != (longlong *)0x0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                uVar2 = (**(code **)(*local_40 + 0x260))(local_40);
                FUN_012e5f00(uVar5,local_2c,uVar2);
              }
              local_b8 = local_24;
              local_50 = FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850),local_50,
                                      L"edit_TimeFrom");
              if (local_50 != 0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                FUN_0064dd90(local_50,&local_78);
                uVar6 = FUN_00b8f030(local_78);
                FUN_012e6050(uVar5,local_2c,uVar6);
              }
              local_b8 = local_24;
              local_50 = FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850),local_50,
                                      L"edit_TimeTo");
              if (local_50 != 0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                FUN_0064dd90(local_50,&local_80);
                uVar6 = FUN_00b8f030(local_80);
                FUN_012e60d0(uVar5,local_2c,uVar6);
              }
              local_b8 = local_24;
              local_50 = FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850),local_50,L"edit_Tol")
              ;
              if (local_50 != 0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                FUN_0064dd90(local_50,&local_88);
                uVar6 = FUN_00b8f030(local_88);
                FUN_012e6150(uVar5,local_2c,uVar6);
              }
            }
            else if (param_2 == 1) {
              local_b8 = local_24;
              local_48 = (longlong *)
                         FUN_013070d0(param_1,*(undefined8 *)(param_1 + 0x850),local_48,
                                      L"comB_RefSel");
              if (local_48 != (longlong *)0x0) {
                FUN_01304f20(param_1,param_3,local_48,local_2c);
              }
              local_b8 = local_24;
              local_40 = (longlong *)
                         FUN_013071b0(param_1,*(undefined8 *)(param_1 + 0x850),local_40,
                                      L"cB_RefName");
              if (local_40 != (longlong *)0x0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                uVar2 = FUN_012e5ee0(uVar5,local_2c);
                (**(code **)(*local_40 + 0x268))(local_40,uVar2);
              }
              local_b8 = local_24;
              local_40 = (longlong *)
                         FUN_013071b0(param_1,*(undefined8 *)(param_1 + 0x850),local_40,
                                      L"cB_compTime");
              if (local_40 != (longlong *)0x0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                uVar2 = FUN_012e5f30(uVar5,local_2c);
                (**(code **)(*local_40 + 0x268))(local_40,uVar2);
              }
              local_b8 = local_24;
              local_50 = FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850),local_50,
                                      L"edit_TimeFrom");
              if (local_50 != 0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                uVar5 = FUN_012e6090(uVar5,local_2c);
                FUN_013065e0(param_1,&local_90,uVar5);
                FUN_0064de00(local_50,local_90);
              }
              local_b8 = local_24;
              local_50 = FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850),local_50,
                                      L"edit_TimeTo");
              if (local_50 != 0) {
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                uVar5 = FUN_012e6110(uVar5,local_2c);
                FUN_013065e0(param_1,&local_98,uVar5);
                FUN_0064de00(local_50,local_98);
              }
              local_b8 = local_24;
              local_50 = FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850),local_50,L"edit_Tol")
              ;
              if (local_50 != 0) {
                FUN_00414480(local_20);
                iVar3 = FUN_006dd6f0(param_3);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                local_60 = FUN_012e6190(uVar5,local_2c);
                FUN_00448450(local_20,local_60,PTR_DAT_02004830);
                FUN_0064de00(local_50,local_20[0]);
                FUN_00414480(local_20);
              }
            }
            local_2c = local_2c + 1;
            local_24 = local_24 + 1;
            local_9c = local_9c + -1;
            puVar1 = local_70;
          } while (local_9c != 0);
        }
      }
    }
  }
  local_70 = puVar1;
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_88,3);
  FUN_00414480(local_20);
  return;
}

