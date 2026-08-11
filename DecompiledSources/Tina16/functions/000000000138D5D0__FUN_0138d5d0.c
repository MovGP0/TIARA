/* Ghidra address: 0138d5d0 */
/* Ghidra symbol: FUN_0138d5d0 */


void FUN_0138d5d0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe28) + 0x260))(*(longlong **)(param_1 + 0xe28));
  if (iVar2 != -1) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xe28) + 0x260))(*(longlong **)(param_1 + 0xe28))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x168))(*(longlong **)(param_1 + 0xe88),uVar1);
  }
  return;
}

