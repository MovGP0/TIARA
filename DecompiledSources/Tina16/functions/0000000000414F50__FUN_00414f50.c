/* Ghidra address: 00414f50 */
/* Ghidra symbol: FUN_00414f50 */


int FUN_00414f50(byte *param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((param_3 < 4) || (*(int *)param_1 != *(int *)param_2)) goto code_r0x00414f8d;
    if ((param_3 < 8) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) break;
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    param_3 = param_3 + -8;
  }
  param_1 = param_1 + 4;
  param_2 = param_2 + 4;
  param_3 = param_3 + -4;
code_r0x00414f8d:
  if ((((param_3 != 0) && (iVar1 = (uint)*param_1 - (uint)*param_2, iVar1 == 0)) && (param_3 != 1))
     && (((iVar1 = (uint)param_1[1] - (uint)param_2[1], iVar1 == 0 && (param_3 != 2)) &&
         ((iVar1 = (uint)param_1[2] - (uint)param_2[2], iVar1 == 0 && (param_3 != 3)))))) {
    iVar1 = (uint)param_1[3] - (uint)param_2[3];
  }
  return iVar1;
}

