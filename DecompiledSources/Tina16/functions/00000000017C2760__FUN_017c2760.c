/* Ghidra address: 017c2760 */
/* Ghidra symbol: FUN_017c2760 */


void FUN_017c2760(longlong param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  *param_2 = *param_2 - *(short *)(param_1 + 0xa0);
  param_2[1] = param_2[1] - *(short *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0x90) == '\0') {
    sVar1 = param_2[1];
    sVar2 = -*param_2;
  }
  else {
    sVar1 = -param_2[1];
    sVar2 = *param_2;
  }
  *param_2 = sVar1 + *(short *)(param_1 + 0xa0);
  param_2[1] = sVar2 + *(short *)(param_1 + 0xa8);
  return;
}

