/* Ghidra address: 00d586c0 */
/* Ghidra symbol: FUN_00d586c0 */


void FUN_00d586c0(longlong param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 - 1U < 0x80000000) {
    do {
      *(undefined1 *)(param_1 + 3 + (longlong)iVar1 * 4) = param_3;
      iVar1 = iVar1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

