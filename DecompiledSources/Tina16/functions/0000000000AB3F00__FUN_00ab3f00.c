/* Ghidra address: 00ab3f00 */
/* Ghidra symbol: FUN_00ab3f00 */


void FUN_00ab3f00(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 600) != 0) {
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x118) + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 600);
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x118),iVar5);
          iVar3 = FUN_004aeba0(uVar1,uVar4);
          if (-1 < iVar3) {
            FUN_004ae870(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 600),iVar3);
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x298) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x298);
      iVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1);
      if (-1 < iVar6) {
        (**(code **)(*plVar2 + 0x98))(plVar2,iVar6);
      }
    }
  }
  return;
}

