/* Ghidra address: 00cc4b60 */
/* Ghidra symbol: FUN_00cc4b60 */


void FUN_00cc4b60(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar3 = FUN_004170c0(&DAT_00cc4c18,*param_2,1);
  if (iVar3 < 1) {
    iVar5 = 1;
  }
  else {
    iVar5 = iVar3 + 1;
    cVar2 = FUN_008791b0(*param_2,iVar5,&LAB_00cc4c28);
    if (cVar2 != '\0') {
      cVar2 = FUN_008791b0(*param_2,iVar3 + 2,&LAB_00cc4c28);
      if (cVar2 != '\0') {
        iVar5 = iVar3 + 3;
      }
    }
  }
  while( true ) {
    iVar3 = 0;
    if (*param_2 != 0) {
      iVar3 = *(int *)(*param_2 + -4);
    }
    if (((iVar3 < iVar5) || (sVar1 = *(short *)(*param_2 + -2 + (longlong)iVar5 * 2), sVar1 == 0x3f)
        ) || (sVar1 == 0x23)) break;
    if (sVar1 == 0x5c) {
      lVar4 = FUN_00414de0(param_2);
      *(undefined2 *)(lVar4 + -2 + (longlong)iVar5 * 2) = 0x2f;
    }
    iVar5 = iVar5 + 1;
  }
  return;
}

