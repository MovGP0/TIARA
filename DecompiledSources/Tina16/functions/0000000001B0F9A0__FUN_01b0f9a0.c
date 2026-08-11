/* Ghidra address: 01b0f9a0 */
/* Ghidra symbol: FUN_01b0f9a0 */


void FUN_01b0f9a0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = 0;
  do {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x18 + (longlong)iVar1 * 8));
    iVar1 = iVar1 + 1;
  } while (iVar1 != 2);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

