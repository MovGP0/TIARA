/* Ghidra address: 01a49490 */
/* Ghidra symbol: FUN_01a49490 */


void FUN_01a49490(longlong param_1,int *param_2,undefined4 *param_3)

{
  if ((*(int *)(param_1 + 0x2b50) == 0x34) || (*(int *)(param_1 + 0x2b50) == 0x7d)) {
    if (*param_2 == 0) {
      *param_3 = 1;
    }
    else {
      *param_3 = 0;
    }
  }
  return;
}

