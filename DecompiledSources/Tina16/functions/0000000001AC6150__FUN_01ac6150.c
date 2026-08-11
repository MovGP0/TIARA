/* Ghidra address: 01ac6150 */
/* Ghidra symbol: FUN_01ac6150 */


void FUN_01ac6150(undefined8 *param_1,ushort param_2,short param_3,double *param_4,double *param_5,
                 undefined8 *param_6)

{
  ushort uVar1;
  short sVar2;
  
  if (param_2 <= (ushort)(param_3 - 1U)) {
    sVar2 = ((param_3 - 1U) - param_2) + 1;
    uVar1 = param_2;
    do {
      if (uVar1 == param_2) {
        *param_4 = (double)param_1[uVar1];
        *param_5 = (double)param_1[uVar1];
      }
      else {
        if ((double)param_1[uVar1] <= *param_4 && *param_4 != (double)param_1[uVar1]) {
          *param_4 = (double)param_1[uVar1];
        }
        if (*param_5 <= (double)param_1[uVar1] && (double)param_1[uVar1] != *param_5) {
          *param_5 = (double)param_1[uVar1];
        }
      }
      uVar1 = uVar1 + 1;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  *param_6 = *param_1;
  return;
}

