/* Ghidra address: 01520010 */
/* Ghidra symbol: FUN_01520010 */


void FUN_01520010(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x260))(*(longlong **)(param_1 + 0xcb8));
  if (iVar1 != -1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x260))(*(longlong **)(param_1 + 0xcb8))
    ;
    if (*(char *)(param_1 + 0xeb8) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x80))(*(longlong **)(param_1 + 0xec8),iVar1);
      (**(code **)(**(longlong **)(param_1 + 0xd88) + 0x128))
                (*(longlong **)(param_1 + 0xd88),iVar1 == 1);
      (**(code **)(**(longlong **)(param_1 + 0xd90) + 0x128))
                (*(longlong **)(param_1 + 0xd90),iVar1 == 1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x98))(*(longlong **)(param_1 + 0xec8),iVar1);
    }
  }
  return;
}

