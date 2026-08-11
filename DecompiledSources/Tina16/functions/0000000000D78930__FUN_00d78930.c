/* Ghidra address: 00d78930 */
/* Ghidra symbol: FUN_00d78930 */


void FUN_00d78930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 byte param_5,undefined1 param_6)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar4 = FUN_004230a0(param_3);
  iVar5 = FUN_004230c0(param_3);
  if (iVar4 * iVar5 == 0) {
    return;
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
  uVar6 = (**(code **)(*plVar2 + 0x58))(plVar2);
  uVar1 = *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 8) + 0x78);
  if (param_5 < 4) {
    if (param_5 != 3) {
      if (param_5 == 0) goto LAB_00d78a02;
      if (param_5 != 1) {
        if (param_5 == 2) {
          FUN_00d77cb0(param_1,&local_38);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
          (**(code **)(*plVar2 + 0x80))(plVar2,param_6);
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 8);
          *(undefined1 *)(lVar3 + 0x78) = param_6;
          iVar4 = FUN_004230a0(&local_38);
          iVar5 = FUN_004230c0(&local_38);
          FUN_00d588c0(lVar3,param_2,
                       *(int *)(param_1 + 0x7c) + (*(int *)(param_1 + 0x84) - iVar4) / 2,
                       *(int *)(param_1 + 0x80) + (*(int *)(param_1 + 0x88) - iVar5) / 2,param_3);
        }
        goto LAB_00d78bbe;
      }
    }
LAB_00d78a7e:
    local_38 = *param_4;
    uStack_30 = param_4[1];
    FUN_00423b50(&local_38,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
    (**(code **)(*plVar2 + 0x80))(plVar2,param_6);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 8);
    *(undefined1 *)(lVar3 + 0x78) = param_6;
    FUN_00d589a0(lVar3,param_2,&local_38,param_3);
  }
  else {
    if (param_5 != 4) {
      if (param_5 == 5) goto LAB_00d78a7e;
      if (param_5 != 6) goto LAB_00d78bbe;
    }
LAB_00d78a02:
    local_38 = *param_4;
    uStack_30 = param_4[1];
    FUN_00423b50(&local_38,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
    (**(code **)(*plVar2 + 0x80))(plVar2,param_6);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 8);
    *(undefined1 *)(lVar3 + 0x78) = param_6;
    FUN_00d58bb0(lVar3,param_2,&local_38,param_3);
  }
LAB_00d78bbe:
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
  (**(code **)(*plVar2 + 0x80))(plVar2,uVar6);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 8) + 0x78) = uVar1;
  return;
}

