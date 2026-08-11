/* Ghidra address: 0151fef0 */
/* Ghidra symbol: FUN_0151fef0 */


void FUN_0151fef0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(*(longlong *)(param_1 + 0xcc8) + 0x328) != '\0') &&
     (*(char *)(param_1 + 0xeb8) == '\0')) {
    *(undefined1 *)(param_1 + 0xeb8) = 1;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x88))(*(longlong **)(param_1 + 0xec8));
    (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x2f0))(*(longlong **)(param_1 + 0xcb8),uVar2);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x90))(*(longlong **)(param_1 + 0xec8));
    (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x268))(*(longlong **)(param_1 + 0xcb8),uVar1);
  }
  return;
}

