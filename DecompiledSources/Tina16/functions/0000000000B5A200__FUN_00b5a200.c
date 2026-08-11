/* Ghidra address: 00b5a200 */
/* Ghidra symbol: FUN_00b5a200 */


void FUN_00b5a200(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  FUN_00414bf0(param_1 + 0x48,param_2);
  uVar1 = FUN_00b3ef80(param_2);
  *(undefined2 *)(param_1 + 0x50) = uVar1;
  return;
}

