/* Ghidra address: 0138cf50 */
/* Ghidra symbol: FUN_0138cf50 */


void FUN_0138cf50(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd88) + 0x260))(*(longlong **)(param_1 + 0xd88));
  if (iVar2 != -1) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xd88) + 0x260))(*(longlong **)(param_1 + 0xd88))
    ;
    if (*(char *)(param_1 + 0xe47) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x100))(*(longlong **)(param_1 + 0xe88),uVar1)
      ;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xc0))(*(longlong **)(param_1 + 0xe88),uVar1);
    }
  }
  return;
}

