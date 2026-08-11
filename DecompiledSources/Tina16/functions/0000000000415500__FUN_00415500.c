/* Ghidra address: 00415500 */
/* Ghidra symbol: FUN_00415500 */


void FUN_00415500(undefined8 param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  for (; (0 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    param_3 = param_3 + -1;
  }
  FUN_004147f0(param_1,iVar1,(int)param_2 - iVar1);
  return;
}

