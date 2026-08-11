/* Ghidra address: 00a620c0 */
/* Ghidra symbol: FUN_00a620c0 */


void FUN_00a620c0(undefined8 param_1,int *param_2,int *param_3)

{
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  if (*param_3 < 0) {
    *param_3 = 0x7fffffff;
  }
  if (*param_3 < *param_2) {
    *param_3 = *param_2;
  }
  return;
}

