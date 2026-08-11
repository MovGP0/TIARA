/* Ghidra address: 00a264f0 */
/* Ghidra symbol: FUN_00a264f0 */


void FUN_00a264f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (0 < *(int *)(param_1 + 0x144)) {
    lVar4 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x148 + lVar4 * 8);
      lVar6 = (longlong)*(int *)(lVar5 + 0x18);
      lVar5 = (longlong)*(int *)(lVar5 + 0x14);
      if (*(int *)((longlong)&local_38 + lVar5 * 4) == 0) {
        lVar3 = *(longlong *)(param_1 + 0x80 + lVar5 * 8);
        if (lVar3 == 0) {
          lVar3 = FUN_00a1bde0(param_1);
          *(longlong *)(param_1 + 0x80 + lVar5 * 8) = lVar3;
        }
        FUN_00a25e20(param_1,lVar3,*(undefined8 *)(lVar2 + 0x78 + lVar5 * 8));
        *(undefined4 *)((longlong)&local_38 + lVar5 * 4) = 1;
        iVar1 = *(int *)((longlong)&local_48 + lVar6 * 4);
      }
      else {
        iVar1 = *(int *)((longlong)&local_48 + lVar6 * 4);
      }
      if (iVar1 == 0) {
        lVar5 = *(longlong *)(param_1 + 0xa0 + lVar6 * 8);
        if (lVar5 == 0) {
          lVar5 = FUN_00a1bde0(param_1);
          *(longlong *)(param_1 + 0xa0 + lVar6 * 8) = lVar5;
        }
        FUN_00a25e20(param_1,lVar5,*(undefined8 *)(lVar2 + 0x98 + lVar6 * 8));
        *(undefined4 *)((longlong)&local_48 + lVar6 * 4) = 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x144));
  }
  return;
}

