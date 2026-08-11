/* Ghidra address: 014dc860 */
/* Ghidra symbol: FUN_014dc860 */


void FUN_014dc860(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  byte *local_30;
  
  uVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
  if (local_30[0x40] < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (local_30[0x40] & 0x1f);
    uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xfc) != 0);
  }
  else {
    uVar3 = 0;
  }
  if ((char)uVar3 == '\0') {
    local_30[0x28] = 0;
    local_30[0x29] = 0;
    local_30[0x2a] = 0;
    local_30[0x2b] = 0;
    local_30[0x2c] = 0;
    local_30[0x2d] = 0;
    local_30[0x2e] = 0;
    local_30[0x2f] = 0;
  }
  else {
    uVar2 = FUN_01d347d0(param_2,0);
    uVar3 = FUN_016a56e0(uVar2);
    *(ulonglong *)(local_30 + 0x28) = uVar3;
  }
  if (local_30[0x40] < 8) {
    bVar8 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << (local_30[0x40] & 0x1f) & 0xfcU) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar5 = 0;
    uVar1 = (uint)*local_30;
    uVar3 = uVar5;
    if (-1 < (int)(uVar1 - 1)) {
      do {
        iVar7 = (int)uVar3;
        uVar5 = FUN_01656db0(*(undefined8 *)(local_30 + 0x28),iVar7 + 1);
        *(ulonglong *)(*(longlong *)(local_30 + 0x18) + (longlong)iVar7 * 8) = uVar5;
        uVar1 = uVar1 - 1;
        uVar3 = (ulonglong)(iVar7 + 1);
      } while (uVar1 != 0);
    }
    if (local_30[0x40] == 4) {
      uVar2 = FUN_01d347d0(param_2,1);
      uVar5 = FUN_016a56e0(uVar2);
      *(ulonglong *)(local_30 + 0x48) = uVar5;
    }
    if (local_30[0x40] < 8) {
      bVar8 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (local_30[0x40] & 0x1f) & 0x28U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      iVar6 = *(int *)(param_2 + 0x10) + -1;
      iVar7 = 1;
      if (0 < iVar6) {
        do {
          lVar4 = FUN_01d347d0(param_2,iVar7);
          *(undefined8 *)(*(longlong *)(local_30 + 0x50) + (longlong)(iVar7 + -1) * 8) =
               *(undefined8 *)(lVar4 + 0x28);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  else {
    iVar7 = *(int *)(param_2 + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar4 = FUN_01d347d0(param_2,iVar6);
        *(undefined8 *)(*(longlong *)(local_30 + 0x18) + (longlong)iVar6 * 8) =
             *(undefined8 *)(lVar4 + 0x28);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

