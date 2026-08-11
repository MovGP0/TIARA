/* Ghidra address: 004b9830 */
/* Ghidra symbol: FUN_004b9830 */


void FUN_004b9830(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x50))(param_1,param_2,0);
  uVar1 = thunk_FUN_0417131b(param_1[1]);
  FUN_00451af0(uVar1);
  return;
}

