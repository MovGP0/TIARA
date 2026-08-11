/* Ghidra address: 01475bf0 */
/* Ghidra symbol: FUN_01475bf0 */


void FUN_01475bf0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  *(undefined1 *)(param_1 + 0x6e0) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  *(undefined1 *)(param_1 + 0x6e8) = uVar1;
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8);
  return;
}

