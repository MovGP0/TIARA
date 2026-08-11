/* Ghidra address: 01bc0d90 */
/* Ghidra symbol: FUN_01bc0d90 */


void FUN_01bc0d90(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),0);
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x278))(*(longlong **)(param_1 + 0x708));
  plVar1 = *(longlong **)(param_1 + 0x6b0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_30,uVar2);
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_38,uVar2);
  uVar5 = FUN_01bbbe90(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),local_30);
  uVar5 = FUN_01bbbbd0(uVar5,1,local_38);
  FUN_01bbb5e0(uVar5,local_60,2);
  FUN_00414ad0(param_1 + 0x748,local_60[0]);
  lVar6 = FUN_01bbc0f0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),
                       *(undefined8 *)(param_1 + 0x748));
  lVar7 = FUN_01bbc040(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),
                       *(undefined8 *)(param_1 + 0x748));
  if (lVar6 == 0) {
    if (lVar7 != 0) {
      iVar3 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x28))();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x18))
                    (*(longlong **)(lVar7 + 0x10),&local_40,iVar8);
          iVar9 = 0;
          if (local_40 != 0) {
            iVar9 = *(int *)(local_40 + -4);
          }
          iVar4 = FUN_004170c0(&DAT_01bc118c,local_40,1);
          FUN_00416dc0(param_1 + 0x748,local_40,1,iVar4 + -1);
          FUN_00416dc0(&local_50,local_40,iVar4 + 1,iVar9 - iVar4);
          FUN_00416cd0(&local_68,3,*(undefined8 *)(param_1 + 0x748),&DAT_01bc119c,local_50);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4a0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_68);
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),0);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x18))
                (*(longlong **)(lVar7 + 0x10),&local_40,uVar2);
      iVar3 = FUN_004170c0(&DAT_01bc118c,local_40,1);
      FUN_00416dc0(param_1 + 0x748,local_40,1,iVar3 + -1);
      uVar5 = FUN_01bbc0f0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),
                           *(undefined8 *)(param_1 + 0x748));
      FUN_01bc13e0(param_1,uVar5);
    }
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar6 + 8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x700),*(undefined8 *)(lVar6 + 0x10));
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),0);
  }
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_50,5);
  return;
}

