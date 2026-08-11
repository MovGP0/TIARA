/* Ghidra address: 01165d60 */
/* Ghidra symbol: FUN_01165d60 */


undefined8 FUN_01165d60(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 1;
  bVar1 = false;
  while( true ) {
    iVar3 = 0;
    if (*param_3 != 0) {
      iVar3 = *(int *)(*param_3 + -4);
    }
    iVar4 = 0;
    if (iVar3 < iVar2) break;
    if (*(short *)(*param_3 + -2 + (longlong)iVar2 * 2) == 0x22) {
      bVar1 = !bVar1;
    }
    else if ((!bVar1) && (iVar4 = iVar2, *(short *)(*param_3 + -2 + (longlong)iVar2 * 2) == 0x2c))
    break;
    iVar2 = iVar2 + 1;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + -4);
    }
    iVar4 = iVar4 + 1;
  }
  FUN_00416dc0(param_2,*param_3,1,iVar4 + -1);
  FUN_00416e20(param_3,1,iVar4);
  return param_2;
}

