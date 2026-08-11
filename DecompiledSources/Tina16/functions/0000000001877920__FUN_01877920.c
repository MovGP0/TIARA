/* Ghidra address: 01877920 */
/* Ghidra symbol: FUN_01877920 */


void FUN_01877920(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_018776a0(param_1);
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined8 *)(param_1[5] + (longlong)(iVar1 + -1) * 8) = param_3;
  return;
}

