/* Ghidra address: 01aa2e20 */
/* Ghidra symbol: FUN_01aa2e20 */


undefined1 FUN_01aa2e20(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_29;
  
  local_29 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      if (*(int *)(lVar1 + 8) == param_2) {
        lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
        iVar6 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 8) + 0x10);
        iVar4 = 0;
        if (-1 < iVar6 + -1) {
          do {
            lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8),iVar4);
            if (*(longlong *)(lVar2 + 8) == param_3) {
              local_29 = 1;
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
  return local_29;
}

