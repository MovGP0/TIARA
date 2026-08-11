/* Ghidra address: 01a98380 */
/* Ghidra symbol: FUN_01a98380 */


void FUN_01a98380(longlong param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  if ((DAT_01fcd6d2 == '\0') || (*(char *)(param_1 + 0x12e) == '\0')) {
    uVar1 = FUN_0040c770(*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x70) * (double)param_2
                         + *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x70));
    *param_4 = uVar1;
    uVar1 = FUN_0040c770(*(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x70) * (double)param_3
                         + *(double *)(param_1 + 0x68) * *(double *)(param_1 + 0x70));
    *param_5 = uVar1;
  }
  else {
    uVar1 = FUN_0040c770(*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x70) *
                         (double)(param_2 + DAT_01fcd6d4) +
                         *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x70));
    *param_4 = uVar1;
    uVar1 = FUN_0040c770(*(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x70) *
                         (double)(param_3 + DAT_01fcd6d8) +
                         *(double *)(param_1 + 0x68) * *(double *)(param_1 + 0x70));
    *param_5 = uVar1;
  }
  if (*(char *)(param_1 + 300) == '\0') {
    if (param_2 < *(int *)(param_1 + 0x130)) {
      *(int *)(param_1 + 0x130) = param_2;
    }
    if (*(int *)(param_1 + 0x138) < param_2) {
      *(int *)(param_1 + 0x138) = param_2;
    }
    if (param_3 < *(int *)(param_1 + 0x134)) {
      *(int *)(param_1 + 0x134) = param_3;
    }
    if (*(int *)(param_1 + 0x13c) < param_3) {
      *(int *)(param_1 + 0x13c) = param_3;
    }
  }
  return;
}

