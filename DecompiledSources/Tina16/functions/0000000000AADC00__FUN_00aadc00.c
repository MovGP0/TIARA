/* Ghidra address: 00aadc00 */
/* Ghidra symbol: FUN_00aadc00 */


void FUN_00aadc00(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = param_2 & 0xffffffff;
  if (*(int *)(param_1 + 0x98) < *(int *)(param_1 + 0x9c)) {
    iVar2 = 0;
    if (param_3 <= param_4) {
      iVar5 = (param_4 - param_3) + 1;
      iVar4 = param_3;
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x110) + (longlong)iVar4) !=
            (char)uVar3) {
          iVar2 = iVar2 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf8) +
                                  (longlong)iVar4 * 4);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00aad8f0(*(undefined8 *)(param_1 + 0xd0),uVar3,*(longlong *)(param_1 + 0xd0) + 0xf8,param_3,
                 param_4,*(int *)(param_1 + 0x9c) - iVar2,*(int *)(param_1 + 0x98) - iVar2,
                 *(undefined4 *)(param_1 + 0x88 + (param_2 & 0xff) * 4));
  }
  if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x84)) {
    iVar2 = 0;
    if (param_3 <= param_4) {
      iVar5 = (param_4 - param_3) + 1;
      iVar4 = param_3;
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x110) + (longlong)iVar4) !=
            (char)uVar3) {
          iVar2 = iVar2 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf8) +
                                  (longlong)iVar4 * 4);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00aad8f0(*(undefined8 *)(param_1 + 0xd0),uVar3,*(longlong *)(param_1 + 0xd0) + 0xf0,param_3,
                 param_4,*(int *)(param_1 + 0x84) - iVar2,*(int *)(param_1 + 0x80) - iVar2,
                 *(undefined4 *)(param_1 + 0x88 + (param_2 & 0xff) * 4));
  }
  if (param_3 <= param_4) {
    iVar2 = (param_4 - param_3) + 1;
    do {
      lVar1 = (longlong)param_3;
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf8) + lVar1 * 4);
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf0) + lVar1 * 4) < iVar4) {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0xf0) + lVar1 * 4) = iVar4;
      }
      param_3 = param_3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

