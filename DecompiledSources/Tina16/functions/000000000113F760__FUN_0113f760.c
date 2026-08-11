/* Ghidra address: 0113f760 */
/* Ghidra symbol: FUN_0113f760 */


void FUN_0113f760(double param_1,double param_2,char *param_3)

{
  char cVar1;
  
  cVar1 = FUN_005270f0(param_1,*(undefined8 *)(param_3 + 1),0);
  if (cVar1 == '\x01') {
    *(double *)(param_3 + 1) = param_1;
  }
  cVar1 = FUN_005270f0(param_2,*(undefined8 *)(param_3 + 9),0);
  if (cVar1 == -1) {
    *(double *)(param_3 + 9) = param_2;
  }
  cVar1 = FUN_0113f590(param_1,param_2,param_3,0);
  if (cVar1 == '\0') {
    *(double *)(param_3 + 1) = param_1;
    *(double *)(param_3 + 9) = param_2;
    param_3[0x11] = '\0';
    param_3[0x12] = '\0';
    param_3[0x13] = '\0';
    param_3[0x14] = '\0';
    param_3[0x15] = '\0';
    param_3[0x16] = '\0';
    param_3[0x17] = '\0';
    param_3[0x18] = '\0';
    *(double *)(param_3 + 0x19) = (double)(uint)(1 << (*param_3 - 1U & 0x1f)) / (param_2 - param_1);
  }
  return;
}

