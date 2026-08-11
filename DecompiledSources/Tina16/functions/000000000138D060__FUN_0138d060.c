/* Ghidra address: 0138d060 */
/* Ghidra symbol: FUN_0138d060 */


void FUN_0138d060(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(*(longlong *)(param_1 + 0xd78) + 0x328) != '\0') &&
     (*(char *)(param_1 + 0xe47) != '\0')) {
    *(undefined1 *)(param_1 + 0xe47) = 0;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xf0))(*(longlong **)(param_1 + 0xe88));
    (**(code **)(**(longlong **)(param_1 + 0xd88) + 0x2f0))(*(longlong **)(param_1 + 0xd88),uVar2);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xf8))(*(longlong **)(param_1 + 0xe88));
    (**(code **)(**(longlong **)(param_1 + 0xd88) + 0x268))(*(longlong **)(param_1 + 0xd88),uVar1);
  }
  return;
}

