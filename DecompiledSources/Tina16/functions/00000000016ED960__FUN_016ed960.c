/* Ghidra address: 016ed960 */
/* Ghidra symbol: FUN_016ed960 */


void FUN_016ed960(undefined8 param_1,longlong param_2,double param_3,char param_4)

{
  double dVar1;
  
  if (0.0 < param_3) {
    dVar1 = (double)FUN_00b90620(param_3,*(undefined8 *)(param_2 + 0x380));
    if (*(double *)(param_2 + 0x360) <= 0.0) {
      *(double *)(param_2 + 0x360) = dVar1;
    }
    else if (dVar1 < *(double *)(param_2 + 0x360)) {
      *(double *)(param_2 + 0x360) = dVar1;
    }
    if ((param_4 != '\0') && (dVar1 < *(double *)(param_2 + 0x10))) {
      *(undefined1 *)(param_2 + 0x334) = 1;
    }
  }
  return;
}

