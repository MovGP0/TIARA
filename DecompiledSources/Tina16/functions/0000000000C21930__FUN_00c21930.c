/* Ghidra address: 00c21930 */
/* Ghidra symbol: FUN_00c21930 */


void FUN_00c21930(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = 7;
  do {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x28 + (longlong)iVar1 * 8));
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

