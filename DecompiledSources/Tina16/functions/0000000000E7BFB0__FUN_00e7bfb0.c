/* Ghidra address: 00e7bfb0 */
/* Ghidra symbol: FUN_00e7bfb0 */


void FUN_00e7bfb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = 3;
  param_1 = param_1 + 0x48;
  do {
    FUN_00db18c0(param_1,param_2,param_3);
    param_1 = param_1 + 0x50;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

