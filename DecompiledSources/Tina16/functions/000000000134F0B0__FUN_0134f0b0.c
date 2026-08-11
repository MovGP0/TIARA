/* Ghidra address: 0134f0b0 */
/* Ghidra symbol: FUN_0134f0b0 */


void FUN_0134f0b0(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  
  DAT_021080fc = 0;
  iVar1 = 0;
  if (-1 < DAT_021080f8 + -2) {
    iVar3 = DAT_021080f8 + -1;
    do {
      *(int *)(DAT_021080f0 + 4 + (longlong)iVar1 * 8) = iVar1 + 1;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(DAT_021080f0 + 4 + (longlong)(DAT_021080f8 + -1) * 8) = 0xffffffff;
  DAT_02108100 = 0;
  iVar1 = 0;
  puVar2 = &DAT_021078e8;
  do {
    *puVar2 = 0xffffffff;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 != 0x200);
  local_30 = param_1;
  FUN_0134e850(0,DAT_021078cc);
  iVar3 = DAT_021078c4 * DAT_021078c8;
  iVar1 = 0;
  if (-1 < iVar3 + -1) {
    do {
      *(undefined4 *)(DAT_021078e0 + (longlong)iVar1 * 8 + 4) = 0xfffffffe;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(DAT_021078e0 + 4 + (longlong)DAT_021078cc * 8) = 0;
  *(undefined1 *)(DAT_021078e0 + 3 + (longlong)DAT_021078cc * 8) = 0;
  DAT_021080e8 = 0;
  while (DAT_02108100 != 0) {
    iVar1 = thunk_FUN_0134efb9(local_30);
    lVar5 = (longlong)iVar1;
    if (*(int *)(DAT_021078e0 + 4 + lVar5 * 8) != -1) {
      *(undefined4 *)(DAT_021078e0 + 4 + lVar5 * 8) = 0xffffffff;
      iVar3 = iVar1 % DAT_021078c4;
      iVar4 = iVar1 / DAT_021078c4;
      if (0 < iVar4) {
        FUN_0134f040(auStack_58,iVar1 - DAT_021078c4,
                     *(undefined1 *)(DAT_021078e0 + 2 + (longlong)(iVar1 - DAT_021078c4) * 8),4);
      }
      if (0 < iVar3) {
        FUN_0134f040(auStack_58,iVar1 + -1,
                     *(undefined1 *)(DAT_021078e0 + 1 + (longlong)(iVar1 + -1) * 8),2);
      }
      if (iVar4 < DAT_021078c8 + -1) {
        FUN_0134f040(auStack_58,iVar1 + DAT_021078c4,*(undefined1 *)(DAT_021078e0 + 2 + lVar5 * 8),1
                    );
      }
      if (iVar3 < DAT_021078c4 + -1) {
        FUN_0134f040(auStack_58,iVar1 + 1,*(undefined1 *)(DAT_021078e0 + 1 + lVar5 * 8),8);
      }
    }
  }
  return;
}

