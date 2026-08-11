/* Ghidra address: 01968d50 */
/* Ghidra symbol: FUN_01968d50 */


void FUN_01968d50(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0194e190(param_2);
  FUN_01968d90(param_1,uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x10))(*(longlong **)(param_1 + 0x1d0),param_2);
  return;
}

