/* Ghidra address: 00441450 */
/* Ghidra symbol: FUN_00441450 */


int FUN_00441450(undefined8 param_1,longlong param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  bVar1 = false;
  iVar3 = 0;
  while ((!bVar1 && (param_3 <= iVar4))) {
    cVar2 = FUN_0044f7d0(param_1,param_2,param_3);
    if (cVar2 == '\0') {
      param_3 = param_3 + 1;
    }
    else {
      bVar1 = true;
      iVar3 = param_3;
    }
  }
  return iVar3;
}

