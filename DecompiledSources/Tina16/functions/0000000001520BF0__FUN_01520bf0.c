/* Ghidra address: 01520bf0 */
/* Ghidra symbol: FUN_01520bf0 */


void FUN_01520bf0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(*(longlong *)(param_1 + 0xd40) + 0x328) != '\0') &&
     (*(char *)(param_1 + 0xeb9) == '\0')) {
    *(undefined1 *)(param_1 + 0xeb9) = 1;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xe0))(*(longlong **)(param_1 + 0xec8));
    (**(code **)(**(longlong **)(param_1 + 0xce8) + 0x2f0))(*(longlong **)(param_1 + 0xce8),uVar2);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xe8))(*(longlong **)(param_1 + 0xec8));
    (**(code **)(**(longlong **)(param_1 + 0xce8) + 0x268))(*(longlong **)(param_1 + 0xce8),uVar1);
  }
  return;
}

