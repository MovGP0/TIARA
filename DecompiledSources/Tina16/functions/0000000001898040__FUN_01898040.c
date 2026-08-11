/* Ghidra address: 01898040 */
/* Ghidra symbol: FUN_01898040 */


void FUN_01898040(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0x20) != 0) {
      *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x18) = *(undefined8 *)(lVar5 + 0x18);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20);
    }
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar4 = *(longlong *)(lVar5 + 8);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x10) == lVar5)) {
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
    }
  }
  FUN_006ddb70(param_1,param_2,param_3);
  if (((*(longlong *)(param_1 + 0x40) != 0) &&
      (uVar2 = FUN_004113d0(param_2,&PTR_FUN_01894f80), (char)uVar2 != '\0')) &&
     (*(longlong *)(param_2 + 0x40) != 0)) {
    lVar5 = *(longlong *)(param_2 + 0x40);
    bVar3 = (byte)param_3;
    if (param_2 != 0) {
      if (bVar3 < 8) {
        uVar1 = (int)CONCAT71((int7)(uVar2 >> 8),1) << (bVar3 & 0x1f);
        uVar2 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xc) != 0);
      }
      else {
        uVar2 = 0;
      }
      if ((char)uVar2 == '\0') {
        lVar5 = *(longlong *)(lVar5 + 8);
      }
    }
    if (bVar3 == 4) {
      uVar2 = FUN_006dd430(param_2);
      if (uVar2 == 0) {
        param_3 = 1;
      }
      else {
        lVar5 = *(longlong *)(uVar2 + 0x40);
      }
    }
    bVar3 = (byte)param_3;
    if (bVar3 < 8) {
      uVar1 = (int)CONCAT71((int7)(uVar2 >> 8),1) << (bVar3 & 0x1f);
      bVar6 = (uVar1 & 10) != 0;
      uVar2 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar6);
    }
    else {
      uVar2 = 0;
      bVar6 = false;
    }
    if (bVar6) {
      do {
        lVar4 = lVar5;
        lVar5 = *(longlong *)(lVar4 + 0x20);
      } while (*(longlong *)(lVar4 + 0x20) != 0);
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_1 + 0x40);
      lVar5 = *(longlong *)(param_1 + 0x40);
      *(longlong *)(lVar5 + 0x18) = lVar4;
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar4 + 8);
      if (*(longlong *)(lVar4 + 8) != 0) {
        *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10) = lVar5;
      }
    }
    else {
      if (bVar3 < 8) {
        bVar6 = ((int)CONCAT71((int7)(uVar2 >> 8),1) << (bVar3 & 0x1f) & 0x15U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        lVar4 = lVar5;
        if (bVar3 == 4) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18) = *(undefined8 *)(lVar5 + 0x18);
        }
        else {
          do {
            lVar5 = lVar4;
            lVar4 = *(longlong *)(lVar5 + 0x18);
          } while (*(longlong *)(lVar5 + 0x18) != 0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18) = 0;
        }
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_1 + 0x40);
        lVar4 = *(longlong *)(param_1 + 0x40);
        *(longlong *)(lVar4 + 0x20) = lVar5;
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar5 + 8);
      }
    }
  }
  return;
}

