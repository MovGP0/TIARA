/* Ghidra address: 00a22190 */
/* Ghidra symbol: FUN_00a22190 */


void FUN_00a22190(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  
  if (0 < param_5) {
    iVar1 = *(int *)(param_1 + 0x30);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
    do {
      if (iVar1 != 0) {
        puVar3 = *(undefined1 **)(*param_3 + (ulonglong)param_4 * 8);
        pbVar4 = (byte *)(*param_2 + 2);
        iVar5 = iVar1;
        do {
          *puVar3 = (char)((uint)(*(int *)(lVar2 + 0x400 + (ulonglong)pbVar4[-1] * 4) +
                                  *(int *)(lVar2 + (ulonglong)*pbVar4 * 4) +
                                 *(int *)(lVar2 + 0x800 + (ulonglong)pbVar4[-2] * 4)) >> 0x10);
          pbVar4 = pbVar4 + 3;
          puVar3 = puVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (0 < param_5);
  }
  return;
}

