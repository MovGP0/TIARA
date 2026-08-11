/* Ghidra address: 00f6eb60 */
/* Ghidra symbol: FUN_00f6eb60 */


void FUN_00f6eb60(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  *param_2 = 10000;
  *param_3 = 10000;
  *param_4 = -10000;
  *param_5 = -10000;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18));
      if (*(char *)(lVar4 + 0x10) == '\0') {
        iVar3 = 0;
        if (-1 < *(int *)(lVar4 + 0x2c) + -2) {
          iVar5 = *(int *)(lVar4 + 0x2c) + -1;
          do {
            iVar1 = *(int *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar3 * 8);
            if (iVar1 < *param_2) {
              *param_2 = iVar1;
            }
            iVar2 = *(int *)(*(longlong *)(lVar4 + 0x20) + 4 + (longlong)iVar3 * 8);
            if (iVar2 < *param_3) {
              *param_3 = iVar2;
            }
            if (*param_4 < iVar1) {
              *param_4 = iVar1;
            }
            if (*param_5 < iVar2) {
              *param_5 = iVar2;
            }
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      if (*(char *)(lVar4 + 0x10) == '\x02') {
        iVar3 = *(int *)(lVar4 + 0x2c);
        iVar5 = 0;
        if (-1 < iVar3 + -1) {
          do {
            iVar1 = *(int *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar5 * 8);
            if (iVar1 < *param_2) {
              *param_2 = iVar1;
            }
            iVar2 = *(int *)(*(longlong *)(lVar4 + 0x20) + 4 + (longlong)iVar5 * 8);
            if (iVar2 < *param_3) {
              *param_3 = iVar2;
            }
            if (*param_4 < iVar1) {
              *param_4 = iVar1;
            }
            if (*param_5 < iVar2) {
              *param_5 = iVar2;
            }
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

