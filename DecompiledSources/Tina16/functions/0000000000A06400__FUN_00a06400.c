/* Ghidra address: 00a06400 */
/* Ghidra symbol: FUN_00a06400 */


void FUN_00a06400(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 != 0) {
    iVar3 = *(int *)(*param_2 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = FUN_004aeac0(*param_2,iVar2);
        if (lVar1 != 0) {
          FUN_004095f0(lVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(*param_2);
  }
  *param_2 = 0;
  return;
}

