/* Ghidra address: 00b583f0 */
/* Ghidra symbol: FUN_00b583f0 */


void FUN_00b583f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_00b58320(param_1,iVar3);
        (**(code **)(*plVar2 + -0x20))(plVar2,1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8));
  return;
}

