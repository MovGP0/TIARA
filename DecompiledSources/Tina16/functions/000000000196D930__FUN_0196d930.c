/* Ghidra address: 0196d930 */
/* Ghidra symbol: FUN_0196d930 */


void FUN_0196d930(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0194e190(param_2);
  FUN_0196d970(param_1,uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2);
  return;
}

