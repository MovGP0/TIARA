/* Ghidra address: 0083ff40 */
/* Ghidra symbol: FUN_0083ff40 */


void FUN_0083ff40(undefined4 *param_1,int param_2,undefined4 param_3)

{
  if (param_2 - 1U < 0x80000000) {
    do {
      *param_1 = param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

