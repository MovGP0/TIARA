/* Ghidra address: 00a94140 */
/* Ghidra symbol: FUN_00a94140 */


void FUN_00a94140(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_40 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 600);
    iVar3 = FUN_004aeba0(uVar1,param_1);
    if ((-1 < iVar3) && (iVar3 = iVar3 + -1, -1 < iVar3)) {
      do {
        lVar4 = FUN_00a94970(uVar1,iVar3);
        if (*(int *)(*(longlong *)(param_1 + 8) + 0x18) == *(int *)(*(longlong *)(lVar4 + 8) + 0x18)
           ) {
          lVar4 = FUN_00a94970(uVar1,iVar3);
          if (*(longlong *)(lVar4 + 0x60) != 0) goto LAB_00a94306;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0xc0);
    uVar5 = FUN_00652880(&PTR_FUN_00a7d108,1,uVar1);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    FUN_0064cb30(uVar5,0xfffff060);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x60),1);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x60),1);
    FUN_0065bce0(*(undefined8 *)(param_1 + 0x60),1);
    plVar2 = *(longlong **)(param_1 + 0x60);
    plVar2[0x78] = param_1;
    plVar2[0x77] = (longlong)FUN_00a93e20;
    plVar2[0x7a] = param_1;
    plVar2[0x79] = (longlong)FUN_00a93ec0;
    plVar2[0x7e] = param_1;
    plVar2[0x7d] = (longlong)FUN_00a94020;
    (**(code **)(*plVar2 + 0x130))(plVar2,uVar1);
    if (0 < param_2) {
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x2c0);
      local_38 = 0;
      local_40[0] = param_2;
      local_30 = (**(code **)(*plVar2 + 0x28))(plVar2);
      local_28 = 0;
      FUN_00442f70(&local_20,L"%.5d%.3d",local_40,1);
      (**(code **)(*plVar2 + 0x80))(plVar2,local_20,*(undefined8 *)(param_1 + 0x60));
    }
  }
LAB_00a94306:
  FUN_00414480(&local_20);
  return;
}

