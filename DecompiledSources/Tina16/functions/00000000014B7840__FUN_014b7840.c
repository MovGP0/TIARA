/* Ghidra address: 014b7840 */
/* Ghidra symbol: FUN_014b7840 */


void FUN_014b7840(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x6b8);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  lVar3 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar2);
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x10))) {
    FUN_004aeac0(lVar3,0);
    for (iVar5 = 1; iVar5 < *(int *)(lVar3 + 0x10); iVar5 = iVar5 + 1) {
      uVar4 = FUN_004aeac0(lVar3,iVar5);
      FUN_014b7650(param_1,uVar4,iVar5 == 1);
    }
  }
  return;
}

