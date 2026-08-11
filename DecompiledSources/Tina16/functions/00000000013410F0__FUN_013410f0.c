/* Ghidra address: 013410f0 */
/* Ghidra symbol: FUN_013410f0 */


void FUN_013410f0(longlong param_1,double param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b90620(*(undefined8 *)(param_1 + 0x390),
                       *(double *)(param_1 + 0x13a0) +
                       (-*(double *)(param_1 + 0x890) + param_2) /
                       (double)*(int *)(param_1 + 0x1464));
  *(undefined8 *)(param_1 + 0x13a0) = uVar1;
  *(double *)(param_1 + 0x890) = param_2;
  if (*(double *)(param_1 + 0x13a0) < *(double *)(param_1 + 0x890) ||
      *(double *)(param_1 + 0x13a0) == *(double *)(param_1 + 0x890)) {
    *(double *)(param_1 + 0x378) = *(double *)(param_1 + 0x890) * 1e-14;
  }
  else {
    *(double *)(param_1 + 0x378) = *(double *)(param_1 + 0x13a0) * 1e-14;
  }
  if (*PTR_DAT_02002ec0 != '\0') {
    *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x890);
  }
  return;
}

