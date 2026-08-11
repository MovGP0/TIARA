/* Ghidra address: 01b1cd00 */
/* Ghidra symbol: FUN_01b1cd00 */


void FUN_01b1cd00(int *param_1,int *param_2)

{
  if (*param_1 < 0) {
    *param_1 = ((4 - *param_1) / 8) * -8;
  }
  else {
    *param_1 = (*param_1 + 4) / 8 << 3;
  }
  if (*param_2 < 0) {
    *param_2 = ((4 - *param_2) / 8) * -8;
  }
  else {
    *param_2 = (*param_2 + 4) / 8 << 3;
  }
  return;
}

