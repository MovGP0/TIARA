/* Ghidra address: 00821fe0 */
/* Ghidra symbol: FUN_00821fe0 */


void FUN_00821fe0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00821e90(param_1,iVar4);
      if (lVar3 != 0) {
        iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x570),lVar3);
        if (iVar2 != -1) {
          FUN_004ae870(*(undefined8 *)(param_1 + 0x570),iVar2);
        }
        FUN_00410f20(lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0068b5c0(param_1);
  return;
}

