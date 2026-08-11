/* Ghidra address: 00b94f10 */
/* Ghidra symbol: FUN_00b94f10 */


void FUN_00b94f10(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b94e60(param_1,param_2);
  FUN_00b94ea0(param_1,param_2);
  (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  return;
}

