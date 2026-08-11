/* Ghidra address: 00b591e0 */
/* Ghidra symbol: FUN_00b591e0 */


void FUN_00b591e0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  FUN_00414bf0(param_1 + 0x60,param_2);
  uVar1 = FUN_00b3ef80(param_2);
  *(undefined2 *)(param_1 + 0x68) = uVar1;
  *(undefined2 *)(param_1 + 0x6a) = param_3;
  return;
}

