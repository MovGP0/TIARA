/* Ghidra address: 019ac2d0 */
/* Ghidra symbol: FUN_019ac2d0 */


int FUN_019ac2d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) <= iVar4) {
      return iVar3;
    }
    lVar2 = FUN_0198d420(param_1,iVar4);
    if (param_2 == lVar2) break;
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  return iVar3;
}

