/* Ghidra address: 01a982d0 */
/* Ghidra symbol: FUN_01a982d0 */


void FUN_01a982d0(longlong param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = FUN_0040c770(((double)param_2 - *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x70))
                       / (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x70)));
  *param_4 = iVar1;
  iVar1 = FUN_0040c770(((double)param_3 - *(double *)(param_1 + 0x68) * *(double *)(param_1 + 0x70))
                       / (*(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x70)));
  *param_5 = iVar1;
  if ((DAT_01fcd6d2 != '\0') && (*(char *)(param_1 + 0x12e) != '\0')) {
    iVar1 = FUN_0040c770((double)DAT_01fcd6d4 * *(double *)(param_1 + 0x70));
    *param_4 = *param_4 - iVar1;
    iVar1 = FUN_0040c770((double)DAT_01fcd6d8 * *(double *)(param_1 + 0x70));
    *param_5 = *param_5 - iVar1;
  }
  return;
}

