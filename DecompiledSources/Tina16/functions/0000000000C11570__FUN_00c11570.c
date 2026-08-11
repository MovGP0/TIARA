/* Ghidra address: 00c11570 */
/* Ghidra symbol: FUN_00c11570 */


void FUN_00c11570(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      uVar1 = FUN_00c11460(param_1,iVar4);
      cVar3 = FUN_00c11270(uVar1);
      if (cVar3 == '\0') {
        lVar2 = FUN_00c11460(param_1,iVar4);
        if (*(int *)(lVar2 + 8) == param_2) {
          FUN_004ae870(param_1,iVar4);
        }
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  return;
}

