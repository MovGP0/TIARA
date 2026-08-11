/* Ghidra address: 01d46f30 */
/* Ghidra symbol: FUN_01d46f30 */


void FUN_01d46f30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  FUN_00414ad0(param_1 + 0x58,param_4);
  return;
}

