/* Ghidra address: 00744dc0 */
/* Ghidra symbol: FUN_00744dc0 */


ulonglong FUN_00744dc0(longlong param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(byte *)(param_1 + 0x4c9) < 8) {
    bVar5 = ((int)CONCAT71((int7)(param_2 >> 8),1) << (*(byte *)(param_1 + 0x4c9) & 0x1f) & 6U) != 0
    ;
  }
  else {
    bVar5 = false;
  }
  uVar4 = (int)param_2 >> 0x1f;
  if (bVar5) {
    lVar1 = *(longlong *)(param_1 + 0x4b0);
    *param_3 = (int)((longlong)((ulonglong)uVar4 << 0x20 | param_2 & 0xffffffff) /
                    (longlong)*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10));
    lVar1 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10);
    uVar2 = (ulonglong)uVar4 << 0x20 | param_2 & 0xffffffff;
    uVar3 = (longlong)uVar2 / lVar1;
    *param_4 = (int)((longlong)uVar2 % lVar1);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x4b8);
    *param_4 = (int)((longlong)((ulonglong)uVar4 << 0x20 | param_2 & 0xffffffff) /
                    (longlong)*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10));
    lVar1 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10);
    uVar2 = (ulonglong)uVar4 << 0x20 | param_2 & 0xffffffff;
    uVar3 = (longlong)uVar2 / lVar1;
    *param_3 = (int)((longlong)uVar2 % lVar1);
  }
  return uVar3 & 0xffffffff;
}

