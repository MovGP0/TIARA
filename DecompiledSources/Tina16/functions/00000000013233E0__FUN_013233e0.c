/* Ghidra address: 013233e0 */
/* Ghidra symbol: FUN_013233e0 */


void FUN_013233e0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    if (*(double *)(param_1 + 0x13f8) < *(double *)(param_1 + 0x13f0)) {
      *(bool *)(param_1 + 0x13b2) =
           -1e-12 <= *(double *)(param_1 + 0x13f8) - **(double **)(param_1 + 5000);
    }
    else {
      *(bool *)(param_1 + 0x13b2) =
           *(double *)(param_1 + 0x13f8) - **(double **)(param_1 + 5000) <= 1e-12;
    }
    if (((*(char *)(param_1 + 0x13b0) != '\0') && (*(char *)(param_1 + 0x13b2) != '\0')) &&
       (*(char *)(param_1 + 0x13b4) == '\0')) {
      *(undefined1 *)(param_1 + 0x13b4) = 1;
      *(undefined1 *)(param_1 + 0x13b2) = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x13f8);
      *(undefined8 *)(param_1 + 0x13f8) = *(undefined8 *)(param_1 + 0x13f0);
      *(undefined8 *)(param_1 + 0x13f0) = uVar1;
      *(ulonglong *)(param_1 + 0x13c0) = *(ulonglong *)(param_1 + 0x13c0) ^ 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x13d8) = *(undefined8 *)(param_1 + 0x13c0);
      *(undefined4 *)(param_1 + 0x498) = 0;
    }
  }
  else if (*(double *)(param_1 + 0x842) < *(double *)(param_1 + 0x83a)) {
    *(bool *)(param_1 + 0x13b2) =
         -1e-12 <= *(double *)(param_1 + 0x842) - **(double **)(param_1 + 5000);
  }
  else {
    *(bool *)(param_1 + 0x13b2) =
         *(double *)(param_1 + 0x842) - **(double **)(param_1 + 5000) <= 1e-12;
  }
  return;
}

