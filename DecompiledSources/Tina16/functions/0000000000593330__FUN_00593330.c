/* Ghidra address: 00593330 */
/* Ghidra symbol: FUN_00593330 */


int FUN_00593330(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  
  iVar1 = (uint)*param_2 - (uint)*param_3;
  if ((iVar1 == 0) && (iVar1 = (uint)param_2[1] - (uint)param_3[1], iVar1 == 0)) {
    iVar1 = (uint)param_2[2] - (uint)param_3[2];
  }
  return iVar1;
}

