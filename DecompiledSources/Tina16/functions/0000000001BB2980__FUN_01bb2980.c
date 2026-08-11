/* Ghidra address: 01bb2980 */
/* Ghidra symbol: FUN_01bb2980 */


void FUN_01bb2980(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  FUN_01bb1cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4f0),uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),0);
  return;
}

