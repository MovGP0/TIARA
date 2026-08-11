/* Ghidra address: 0140b020 */
/* Ghidra symbol: FUN_0140b020 */


void FUN_0140b020(int param_1,undefined4 param_2,longlong param_3,char param_4)

{
  if (param_4 == '\0') {
    *(short *)(param_3 + (longlong)param_1 * 2) = (short)param_2;
  }
  else {
    *(undefined4 *)(param_3 + (longlong)param_1 * 4) = param_2;
  }
  return;
}

