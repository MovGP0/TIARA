/* Ghidra address: 01d04c80 */
/* Ghidra symbol: FUN_01d04c80 */


void FUN_01d04c80(longlong param_1,double param_2)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x3d1) == '\0') {
    if (*(char *)(param_1 + 0x3d0) == '\0') {
      *(double *)(param_1 + 0x3c8) = param_2;
      *(undefined1 *)(param_1 + 0x3d0) = 1;
      *(undefined1 *)(param_1 + 0x3d1) = 1;
    }
    else if ((param_2 != *(double *)(param_1 + 0x3c8)) &&
            ((dVar1 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x3c8)), dVar1 < 1e-05 ||
             (dVar1 = (double)FUN_0040c850((param_2 - *(double *)(param_1 + 0x3c8)) /
                                           *(double *)(param_1 + 0x3c8)), 1e-05 < dVar1)))) {
      *(double *)(param_1 + 0x3c8) = param_2;
      *(undefined1 *)(param_1 + 0x3d1) = 1;
    }
  }
  else {
    *(double *)(param_1 + 0x3c8) = param_2;
    *(undefined1 *)(param_1 + 0x3d0) = 1;
  }
  return;
}

