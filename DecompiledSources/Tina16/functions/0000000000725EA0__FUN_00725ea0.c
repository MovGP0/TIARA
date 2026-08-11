/* Ghidra address: 00725ea0 */
/* Ghidra symbol: FUN_00725ea0 */


void FUN_00725ea0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  uVar1 = FUN_0069e8a0();
  FUN_0069dd20(uVar1,param_2);
  return;
}

