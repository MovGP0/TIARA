/* Ghidra address: 0187b070 */
/* Ghidra symbol: FUN_0187b070 */


void FUN_0187b070(undefined8 param_1,longlong param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_2 + -2 + (longlong)*param_3 * 2);
  *param_3 = *param_3 + 1;
  while( true ) {
    iVar2 = FUN_00414cb0(param_2);
    if ((iVar2 < *param_3) || (*(short *)(param_2 + -2 + (longlong)*param_3 * 2) == sVar1)) break;
    *param_3 = *param_3 + 1;
  }
  *param_3 = *param_3 + 1;
  return;
}

