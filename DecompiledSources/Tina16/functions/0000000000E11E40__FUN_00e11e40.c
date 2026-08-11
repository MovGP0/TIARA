/* Ghidra address: 00e11e40 */
/* Ghidra symbol: FUN_00e11e40 */


undefined1 FUN_00e11e40(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
      if (*(longlong *)(lVar1 + 8) == param_3) {
        iVar6 = *(int *)(*(longlong *)(lVar1 + 0x10) + 0x10);
        iVar4 = 0;
        if (-1 < iVar6 + -1) {
          do {
            lVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x10),iVar4);
            if (*(int *)(lVar2 + 8) == param_2) {
              return 1;
            }
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

