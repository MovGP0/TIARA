/* Ghidra address: 017cf3c0 */
/* Ghidra symbol: FUN_017cf3c0 */


undefined8
FUN_017cf3c0(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  undefined8 uVar1;
  
  if ((*param_4 <= *(double *)(param_1 + 0xb8) && *(double *)(param_1 + 0xb8) != *param_4) ||
     (*(double *)(param_1 + 0xb0) <= *param_2 && *param_2 != *(double *)(param_1 + 0xb0))) {
    uVar1 = 0;
  }
  else {
    if (*param_2 <= *(double *)(param_1 + 0xb8) && *(double *)(param_1 + 0xb8) != *param_2) {
      *param_3 = ((*(double *)(param_1 + 0xb8) - *param_2) * (*param_5 - *param_3)) /
                 (*param_4 - *param_2) + *param_3;
      *param_2 = *(double *)(param_1 + 0xb8);
    }
    if (*(double *)(param_1 + 0xb0) <= *param_4 && *param_4 != *(double *)(param_1 + 0xb0)) {
      *param_5 = ((*(double *)(param_1 + 0xb0) - *param_2) * (*param_5 - *param_3)) /
                 (*param_4 - *param_2) + *param_3;
      *param_4 = *(double *)(param_1 + 0xb0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

