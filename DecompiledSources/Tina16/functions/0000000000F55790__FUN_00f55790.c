/* Ghidra address: 00f55790 */
/* Ghidra symbol: FUN_00f55790 */


void FUN_00f55790(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 2;
  do {
    FUN_00f55390(param_1,param_2,param_3,param_4);
    param_1 = param_1 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

