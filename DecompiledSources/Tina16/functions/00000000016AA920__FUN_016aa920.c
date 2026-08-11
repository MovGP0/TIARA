/* Ghidra address: 016aa920 */
/* Ghidra symbol: FUN_016aa920 */


void FUN_016aa920(double *param_1)

{
  if (*param_1 <= 80.0) {
    if (-80.0 < *param_1 || *param_1 == -80.0) {
      if (*param_1 < param_1[1] || *param_1 == param_1[1]) {
        FUN_0040af80(*param_1);
      }
      else {
        FUN_0040af80(param_1[1]);
      }
    }
    else {
      FUN_0040af80(0xc054000000000000);
    }
  }
  else {
    FUN_0040af80(0x4054000000000000);
  }
  return;
}

