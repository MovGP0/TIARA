/* Ghidra address: 00a22050 */
/* Ghidra symbol: FUN_00a22050 */


void FUN_00a22050(longlong param_1,undefined8 *param_2,longlong *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (0 < param_5) {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x38);
    do {
      if (iVar1 != 0) {
        puVar3 = *(undefined1 **)(*param_3 + (ulonglong)param_4 * 8);
        puVar4 = (undefined1 *)*param_2;
        iVar5 = iVar1;
        do {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + iVar2;
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

