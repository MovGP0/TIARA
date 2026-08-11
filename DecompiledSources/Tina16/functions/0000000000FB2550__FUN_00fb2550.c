/* Ghidra address: 00fb2550 */
/* Ghidra symbol: FUN_00fb2550 */


void FUN_00fb2550(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),uVar1);
  return;
}

