/* Ghidra address: 0138cfd0 */
/* Ghidra symbol: FUN_0138cfd0 */


void FUN_0138cfd0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(*(longlong *)(param_1 + 0xd70) + 0x328) != '\0') &&
     (*(char *)(param_1 + 0xe47) == '\0')) {
    *(undefined1 *)(param_1 + 0xe47) = 1;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xb0))(*(longlong **)(param_1 + 0xe88));
    (**(code **)(**(longlong **)(param_1 + 0xd88) + 0x2f0))(*(longlong **)(param_1 + 0xd88),uVar2);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xb8))(*(longlong **)(param_1 + 0xe88));
    (**(code **)(**(longlong **)(param_1 + 0xd88) + 0x268))(*(longlong **)(param_1 + 0xd88),uVar1);
  }
  return;
}

