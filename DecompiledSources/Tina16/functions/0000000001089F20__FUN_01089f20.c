/* Ghidra address: 01089f20 */
/* Ghidra symbol: FUN_01089f20 */


void FUN_01089f20(longlong param_1)

{
  int iVar1;
  
  FUN_010b30f0(*(undefined8 *)(param_1 + 0xac8),0);
  (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x180))(*(longlong **)(param_1 + 0xa78));
  iVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x798));
  if (iVar1 == 3) {
    FUN_01088c80(param_1);
  }
  return;
}

