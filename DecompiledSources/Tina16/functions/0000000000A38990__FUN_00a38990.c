/* Ghidra address: 00a38990 */
/* Ghidra symbol: FUN_00a38990 */


uint FUN_00a38990(longlong param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  char local_40 [16];
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 2) != 0) {
    iVar5 = *(int *)(param_1 + 0x38);
    uVar6 = 0;
    do {
      uVar11 = (uint)uVar6;
      if (uVar11 < *(uint *)(param_1 + 0x3c)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = *(char *)(*(longlong *)(param_1 + 0x68) +
                         (ulonglong)(uVar11 - *(uint *)(param_1 + 0x3c)));
      }
      *(char *)(*(longlong *)(param_1 + 0x48) + uVar6) =
           *(char *)(*(longlong *)(param_1 + 0x68) + uVar6) - cVar2;
      uVar6 = (ulonglong)(uVar11 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 4) != 0) {
    iVar5 = *(int *)(param_1 + 0x38);
    uVar6 = 0;
    do {
      *(char *)(*(longlong *)(param_1 + 0x50) + uVar6) =
           *(char *)(*(longlong *)(param_1 + 0x68) + uVar6) -
           *(char *)(*(longlong *)(param_1 + 0x40) + uVar6);
      uVar6 = (ulonglong)((int)uVar6 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 8) != 0) {
    iVar5 = *(int *)(param_1 + 0x38);
    uVar6 = 0;
    do {
      uVar11 = (uint)uVar6;
      if (uVar11 < *(uint *)(param_1 + 0x3c)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)*(byte *)(*(longlong *)(param_1 + 0x68) +
                               (ulonglong)(uVar11 - *(uint *)(param_1 + 0x3c)));
      }
      *(char *)(*(longlong *)(param_1 + 0x58) + uVar6) =
           *(char *)(*(longlong *)(param_1 + 0x68) + uVar6) -
           (char)((ulonglong)(*(byte *)(*(longlong *)(param_1 + 0x40) + uVar6) + uVar9) / 2);
      uVar6 = (ulonglong)(uVar11 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 0x10) != 0) {
    uVar7 = 0;
    uVar8 = 0;
    iVar5 = *(int *)(param_1 + 0x38);
    uVar6 = 0;
    do {
      uVar11 = (uint)uVar6;
      if (*(uint *)(param_1 + 0x3c) <= uVar11) {
        uVar4 = (ulonglong)(uVar11 - *(uint *)(param_1 + 0x3c));
        uVar7 = *(undefined1 *)(*(longlong *)(param_1 + 0x68) + uVar4);
        uVar8 = *(undefined1 *)(*(longlong *)(param_1 + 0x40) + uVar4);
      }
      cVar2 = FUN_00a32f10(uVar7,*(undefined1 *)(*(longlong *)(param_1 + 0x40) + uVar6),uVar8);
      *(char *)(*(longlong *)(param_1 + 0x60) + uVar6) =
           *(char *)(*(longlong *)(param_1 + 0x68) + uVar6) - cVar2;
      uVar6 = (ulonglong)(uVar11 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x38);
  FUN_00409a70(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x40),uVar6);
  if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x150) == '\x01') ||
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x150) == '\0')) {
    uVar11 = 0;
  }
  else {
    uVar9 = 0;
    uVar11 = 0;
    uVar12 = 0;
    do {
      bVar1 = (byte)uVar12;
      if (bVar1 < 8) {
        uVar10 = (int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar1 & 0x1f);
        uVar6 = (ulonglong)uVar10;
        bVar13 = ((byte)uVar10 & *(byte *)(*(longlong *)(param_1 + 0x18) + 0x150)) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        uVar10 = 0;
        uVar6 = 0;
        FUN_0040f630(local_40,bVar1,1);
        if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x150) == local_40[0]) {
          return uVar12;
        }
        uVar3 = 2;
        if (1 < *(int *)(param_1 + 0x38) - 1U) {
          iVar5 = *(int *)(param_1 + 0x38) + -2;
          do {
            cVar2 = *(char *)(*(longlong *)(param_1 + 0x40 + (ulonglong)uVar12 * 8) +
                             (ulonglong)uVar3);
            uVar6 = *(ulonglong *)(param_1 + 0x40 + (ulonglong)uVar12 * 8);
            if ((cVar2 == *(char *)(uVar6 + (uVar3 - 1))) ||
               (uVar6 = *(ulonglong *)(param_1 + 0x40 + (ulonglong)uVar12 * 8),
               cVar2 == *(char *)(uVar6 + (uVar3 - 2)))) {
              uVar10 = uVar10 + 1;
            }
            uVar3 = uVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (uVar9 < uVar10) {
          uVar9 = uVar10;
          uVar11 = uVar12;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 5);
  }
  return uVar11;
}

