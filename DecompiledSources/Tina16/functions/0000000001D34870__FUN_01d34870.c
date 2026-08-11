/* Ghidra address: 01d34870 */
/* Ghidra symbol: FUN_01d34870 */


void FUN_01d34870(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01d347d0(param_1,param_2);
  FUN_01d34800(param_1,param_2);
  (**(code **)(*param_1 + 0x58))(param_1,uVar1);
  return;
}

