/* Ghidra address: 01996be0 */
/* Ghidra symbol: FUN_01996be0 */


int FUN_01996be0(longlong param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  bVar1 = false;
  while( true ) {
    if ((*(int *)(param_1 + 0x10) <= iVar2) || (bVar1)) break;
    lVar3 = FUN_01996b70(param_1,iVar2);
    if ((param_2 == *(int *)(lVar3 + 0x10)) && (param_3 == *(int *)(lVar3 + 0x14))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar2 = iVar2 + 1;
  }
  if (bVar1) {
    iVar2 = iVar2 + -1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

