/* Ghidra address: 00a22220 */
/* Ghidra symbol: FUN_00a22220 */


void FUN_00a22220(longlong param_1,longlong *param_2,longlong param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  if (0 < param_5) {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x4c);
    do {
      if (0 < iVar2) {
        lVar5 = 0;
        do {
          if (iVar1 != 0) {
            puVar6 = *(undefined1 **)(*(longlong *)(param_3 + lVar5 * 8) + (ulonglong)param_4 * 8);
            puVar3 = (undefined1 *)(*param_2 + lVar5);
            iVar4 = iVar1;
            do {
              *puVar6 = *puVar3;
              puVar3 = puVar3 + iVar2;
              puVar6 = puVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 != iVar2);
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
    } while (0 < param_5);
  }
  return;
}

