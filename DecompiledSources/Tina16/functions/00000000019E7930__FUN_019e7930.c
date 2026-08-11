/* Ghidra address: 019e7930 */
/* Ghidra symbol: FUN_019e7930 */


void FUN_019e7930(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = 8;
  param_1 = param_1 + 0x40;
  do {
    FUN_00db18c0(param_1,param_2,param_3);
    param_1 = param_1 + 0x118;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

