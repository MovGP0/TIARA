/* Ghidra address: 00724420 */
/* Ghidra symbol: FUN_00724420 */


void FUN_00724420(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if (1 < iVar2) {
    cVar1 = FUN_0044f780(param_2,iVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_0044f7d0(&LAB_00724498,param_2,iVar2 + -1);
      if (cVar1 == '\0') {
        iVar2 = iVar2 + -1;
      }
    }
  }
  FUN_00416dc0(param_1 + 0xf0,param_2,1,iVar2);
  return;
}

