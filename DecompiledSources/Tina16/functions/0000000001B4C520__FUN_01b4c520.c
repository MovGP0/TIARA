/* Ghidra address: 01b4c520 */
/* Ghidra symbol: FUN_01b4c520 */


void FUN_01b4c520(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_2 + -1) {
    do {
      FUN_004095f0(*(undefined8 *)(param_1 + 8 + (longlong)iVar1 * 0x10));
      iVar1 = iVar1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_004095f0(param_1);
  return;
}

