/* Ghidra address: 01784e00 */
/* Ghidra symbol: FUN_01784e00 */


void FUN_01784e00(longlong param_1)

{
  undefined4 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),1);
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),1);
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
  uVar1 = FUN_006ec320(*(undefined8 *)(param_1 + 0x6f0));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x6e8),uVar1);
  return;
}

