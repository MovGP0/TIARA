/* Ghidra address: 0061da30 */
/* Ghidra symbol: FUN_0061da30 */


bool FUN_0061da30(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  iVar3 = (iVar3 - iVar2) + 1;
  if (((0 < iVar3) && (param_1 != 0)) && (cVar1 = FUN_0061dd70(param_2,iVar3), cVar1 != '\x02')) {
    iVar3 = FUN_0061dad0(param_1,param_2 + -1 + (longlong)iVar3);
    return iVar3 == 0;
  }
  return false;
}

