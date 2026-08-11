/* Ghidra address: 017fed50 */
/* Ghidra symbol: FUN_017fed50 */


int FUN_017fed50(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int local_3c [3];
  
  iVar2 = (**(code **)(*param_1 + 0x1c8))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,iVar3);
      if (((cVar1 == '\0') &&
          ((**(code **)(*param_1 + 0x1f0))(param_1,iVar3,local_3c,&local_40), param_2 == local_3c[0]
          )) && (param_3 == local_40)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

