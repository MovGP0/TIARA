/* Ghidra address: 017bd850 */
/* Ghidra symbol: FUN_017bd850 */


void FUN_017bd850(longlong param_1,int param_2,undefined4 param_3)

{
  if ((param_2 < 2) && (-1 < param_2)) {
    *(undefined4 *)(param_1 + 0xc4 + (longlong)param_2 * 0x10c) = param_3;
  }
  return;
}

