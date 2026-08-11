/* Ghidra address: 01d80d00 */
/* Ghidra symbol: FUN_01d80d00 */


void FUN_01d80d00(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0xa00));
  (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x108))(*(longlong **)(param_1 + 0xa88),uVar1);
  return;
}

