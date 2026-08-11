/* Ghidra address: 01a848a0 */
/* Ghidra symbol: FUN_01a848a0 */


void FUN_01a848a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FUN_01ae4310(*(longlong *)(param_1 + 0x798));
  }
  uVar1 = FUN_00b89270();
  FUN_00b8d260(uVar1,param_1,0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0xa68) + 0x148))(*(longlong **)(param_1 + 0xa68),0);
  return;
}

