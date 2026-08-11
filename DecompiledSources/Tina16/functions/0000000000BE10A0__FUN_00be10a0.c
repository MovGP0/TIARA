/* Ghidra address: 00be10a0 */
/* Ghidra symbol: FUN_00be10a0 */


int FUN_00be10a0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 9) = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + (longlong)iVar5 * 0x10);
      if (param_2 + param_3 < iVar2) {
        piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + (longlong)iVar5 * 0x10);
        *piVar1 = *piVar1 - param_3;
      }
      else {
        if (iVar2 <= param_2) break;
        *(undefined1 *)(param_1 + 9) = 1;
        FUN_00599af0(*(longlong *)(param_1 + 0x20) + 8,iVar5,
                     CONCAT71((uint7)(uint3)((uint)(param_2 + param_3) >> 8),5));
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar4 = (longlong)iVar5;
      piVar1 = (int *)(*(longlong *)(lVar3 + 8) + lVar4 * 0x14);
      iVar2 = *piVar1;
      if (param_2 + param_3 < iVar2) {
        FUN_00be1d70(*(longlong *)(lVar3 + 8) + lVar4 * 0x14,-param_3);
      }
      else if (param_2 < iVar2) {
        *(undefined1 *)(param_1 + 9) = 1;
        FUN_00599af0(*(longlong *)(param_1 + 0x10) + 8,iVar5,
                     CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),5));
      }
      else {
        iVar2 = piVar1[1];
        if (param_2 + param_3 < iVar2) {
          piVar1 = (int *)(*(longlong *)(lVar3 + 8) + 4 + lVar4 * 0x14);
          *piVar1 = *piVar1 - param_3;
        }
        else if (param_2 < iVar2) {
          piVar1 = (int *)(*(longlong *)(lVar3 + 8) + 4 + lVar4 * 0x14);
          *piVar1 = *piVar1 - (iVar2 - param_2);
        }
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  return param_3;
}

