/* Ghidra address: 00a37360 */
/* Ghidra symbol: FUN_00a37360 */


void FUN_00a37360(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  
  cVar1 = **(char **)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8);
  if (cVar1 == '\x01') {
    uVar10 = *(int *)(param_1 + 0x3c) + 1;
    if (uVar10 <= *(uint *)(param_1 + 0x38)) {
      iVar11 = (*(uint *)(param_1 + 0x38) - uVar10) + 1;
      do {
        lVar3 = *(longlong *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8);
        *(char *)(lVar3 + (ulonglong)uVar10) =
             *(char *)(lVar3 + (ulonglong)uVar10) +
             *(char *)(*(longlong *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8) +
                      (ulonglong)(uVar10 - *(int *)(param_1 + 0x3c)));
        uVar10 = uVar10 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  else if (cVar1 == '\x02') {
    uVar10 = 1;
    for (iVar11 = *(int *)(param_1 + 0x38); iVar11 != 0; iVar11 = iVar11 + -1) {
      lVar3 = *(longlong *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8);
      uVar5 = (ulonglong)uVar10;
      *(char *)(lVar3 + uVar5) =
           *(char *)(lVar3 + uVar5) +
           *(char *)(*(longlong *)(param_1 + 0x70 + (ulonglong)(*(byte *)(param_1 + 0x80) == 0) * 8)
                    + uVar5);
      uVar10 = uVar10 + 1;
    }
  }
  else if (cVar1 == '\x03') {
    uVar10 = 1;
    for (iVar11 = *(int *)(param_1 + 0x38); iVar11 != 0; iVar11 = iVar11 + -1) {
      bVar2 = *(byte *)(param_1 + 0x80);
      uVar5 = (ulonglong)uVar10;
      if (uVar10 - 1 < *(uint *)(param_1 + 0x3c)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)*(byte *)(*(longlong *)(param_1 + 0x70 + (ulonglong)bVar2 * 8) +
                               (ulonglong)(uVar10 - *(uint *)(param_1 + 0x3c)));
      }
      lVar3 = *(longlong *)(param_1 + 0x70 + (ulonglong)bVar2 * 8);
      *(char *)(lVar3 + uVar5) =
           *(char *)(lVar3 + uVar5) +
           (char)((ulonglong)
                  (longlong)
                  (int)(uVar8 + *(byte *)(*(longlong *)
                                           (param_1 + 0x70 + (ulonglong)(bVar2 == 0) * 8) + uVar5))
                 / 2);
      uVar10 = uVar10 + 1;
    }
  }
  else if (cVar1 == '\x04') {
    uVar7 = 0;
    uVar9 = 0;
    uVar10 = 1;
    for (iVar11 = *(int *)(param_1 + 0x38); iVar11 != 0; iVar11 = iVar11 + -1) {
      bVar2 = *(byte *)(param_1 + 0x80);
      uVar5 = (ulonglong)uVar10;
      if (*(uint *)(param_1 + 0x3c) <= uVar10 - 1) {
        uVar6 = (ulonglong)(uVar10 - *(uint *)(param_1 + 0x3c));
        uVar7 = *(undefined1 *)(*(longlong *)(param_1 + 0x70 + (ulonglong)bVar2 * 8) + uVar6);
        uVar9 = *(undefined1 *)
                 (*(longlong *)(param_1 + 0x70 + (ulonglong)(*(char *)(param_1 + 0x80) == '\0') * 8)
                 + uVar6);
      }
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x70 + (ulonglong)bVar2 * 8) + uVar5);
      cVar4 = FUN_00a32f10(uVar7,*(undefined1 *)
                                  (*(longlong *)(param_1 + 0x70 + (ulonglong)(bVar2 == 0) * 8) +
                                  uVar5),uVar9);
      *(char *)(*(longlong *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8) + uVar5) =
           cVar4 + cVar1;
      uVar10 = uVar10 + 1;
    }
  }
  return;
}

