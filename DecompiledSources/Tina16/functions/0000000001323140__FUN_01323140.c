/* Ghidra address: 01323140 */
/* Ghidra symbol: FUN_01323140 */


void FUN_01323140(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,char param_5)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x13f0) = param_2;
  *(undefined8 *)(param_1 + 0x13f8) = param_3;
  if (param_5 == '\0') {
    *(double *)(param_1 + 0x13c0) =
         (*(double *)(param_1 + 0x13f8) - *(double *)(param_1 + 0x13f0)) / (double)param_4;
  }
  else {
    *(double *)(param_1 + 0x13c0) = *(double *)(param_1 + 0x13f8) - *(double *)(param_1 + 0x13f0);
  }
  *(double *)(param_1 + 0x13c8) = *(double *)(param_1 + 0x13c0) * 1e-06;
  *(undefined8 *)(param_1 + 0x13d8) = *(undefined8 *)(param_1 + 0x13c0);
  *(undefined8 *)(param_1 + 0x13d0) = *(undefined8 *)(param_1 + 0x13f0);
  **(undefined8 **)(param_1 + 5000) = *(undefined8 *)(param_1 + 0x13d0);
  uVar1 = FUN_0040c850(*(double *)(param_1 + 0x13f0) - *(double *)(param_1 + 0x83a));
  *(undefined8 *)(param_1 + 0x13e8) = uVar1;
  *(undefined1 *)(param_1 + 0x13b4) = 0;
  *(undefined1 *)(param_1 + 0x13b5) = 1;
  return;
}

