/* Ghidra address: 019aed30 */
/* Ghidra symbol: FUN_019aed30 */


void FUN_019aed30(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x28))(*(longlong **)(param_1 + 0x420));
  if (0 < iVar1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x420) + 0x48))
                  (*(longlong **)(param_1 + 0x420),iVar2,(longlong)(param_2 + iVar2));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = FUN_019954d0(param_1);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x28))(*(longlong **)(param_1 + 0x420));
    FUN_019954b0(param_1,iVar1 + iVar2);
  }
  return;
}

