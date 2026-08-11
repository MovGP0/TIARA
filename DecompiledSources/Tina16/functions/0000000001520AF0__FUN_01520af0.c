/* Ghidra address: 01520af0 */
/* Ghidra symbol: FUN_01520af0 */


void FUN_01520af0(longlong param_1)

{
  undefined2 uVar1;
  
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0xca8),0);
  (**(code **)(**(longlong **)(param_1 + 0xca8) + 0x128))(*(longlong **)(param_1 + 0xca8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0xcf8),1);
  (**(code **)(**(longlong **)(param_1 + 0xcf8) + 0x128))(*(longlong **)(param_1 + 0xcf8),1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x128))(*(longlong **)(param_1 + 0xec8));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf8),uVar1);
  return;
}

