/* Ghidra address: 00cfc580 */
/* Ghidra symbol: FUN_00cfc580 */


undefined8 FUN_00cfc580(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*param_2 != 0) {
    iVar2 = *(int *)(*param_2 + -4);
  }
  iVar3 = 2;
  if (1 < iVar2) {
    do {
      sVar1 = *(short *)(*param_2 + -2 + (longlong)iVar3 * 2);
      if (sVar1 == 0x22) break;
      if (sVar1 == 0x5c) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  FUN_00416dc0(param_1,*param_2,2,iVar3 + -2);
  FUN_00416dc0(param_2,*param_2,iVar3 + 1,0x7fffffff);
  return param_1;
}

