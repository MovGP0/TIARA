/* Ghidra address: 016384b0 */
/* Ghidra symbol: FUN_016384b0 */


void FUN_016384b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = FUN_0161bc10(*(undefined4 *)(*(longlong *)(param_1 + 400) + 0x5bc),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x48));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 400) + 0x70);
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  iVar6 = *(int *)(param_1 + 0x154);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + (longlong)param_2 * 8) +
                  (longlong)iVar5 * 4) == 1) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 400) + 0x70);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
        FUN_0161b490(uVar3,iVar5,uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

