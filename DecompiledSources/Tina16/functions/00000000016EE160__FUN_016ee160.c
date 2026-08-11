/* Ghidra address: 016ee160 */
/* Ghidra symbol: FUN_016ee160 */


void FUN_016ee160(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5)

{
  if (param_3 < param_4) {
    if (param_4 < param_5) {
      FUN_016da930(param_1,param_4 - param_3,param_4,param_5 - param_4,param_2,
                   *(undefined8 *)(param_1 + 0x760));
    }
    else {
      FUN_016da920(param_4 - param_3,*(undefined8 *)(param_1 + 0x760));
    }
  }
  else {
    FUN_016da920(*(double *)(param_1 + 0x890) - param_3,*(undefined8 *)(param_1 + 0x760));
  }
  return;
}

