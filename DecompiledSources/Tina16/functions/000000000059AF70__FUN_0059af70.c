/* Ghidra address: 0059af70 */
/* Ghidra symbol: FUN_0059af70 */


void FUN_0059af70(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != 0) {
    lVar5 = (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
    iVar3 = 0;
    iVar4 = 0;
    do {
      while ((iVar4 < (int)param_1[1] &&
             (cVar2 = (**(code **)(*param_2 + 0x18))(param_2,*param_1 + iVar4 * lVar5),
             cVar2 != '\0'))) {
        iVar4 = iVar4 + 1;
      }
      iVar1 = iVar4;
      if (iVar4 < (int)param_1[1]) {
        while ((iVar1 < (int)param_1[1] &&
               (cVar2 = (**(code **)(*param_2 + 0x18))(param_2,*param_1 + iVar1 * lVar5),
               cVar2 == '\0'))) {
          iVar1 = iVar1 + 1;
        }
        if (iVar3 < iVar4) {
          FUN_00409a70(*param_1 + iVar4 * lVar5,*param_1 + iVar3 * lVar5,
                       (((iVar1 + -1) - iVar4) + 1) * lVar5);
        }
        iVar3 = iVar3 + ((iVar1 + -1) - iVar4) + 1;
        iVar4 = iVar1;
      }
      iVar1 = (int)param_1[1];
    } while (iVar4 < iVar1);
    if (iVar3 < iVar1) {
      FUN_0040d200(*param_1 + iVar3 * lVar5,(iVar1 - iVar3) * lVar5,0);
      *(int *)(param_1 + 1) = iVar3;
    }
  }
  return;
}

