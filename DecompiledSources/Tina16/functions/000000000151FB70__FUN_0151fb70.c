/* Ghidra address: 0151fb70 */
/* Ghidra symbol: FUN_0151fb70 */


void FUN_0151fb70(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x260))(*(longlong **)(param_1 + 0xcb8));
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x260))(*(longlong **)(param_1 + 0xcb8))
    ;
    if (*(char *)(*(longlong *)(param_1 + 0xcc8) + 0x328) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x80))(*(longlong **)(param_1 + 0xec8),uVar2);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x98))(*(longlong **)(param_1 + 0xec8),uVar2);
    }
  }
  return;
}

