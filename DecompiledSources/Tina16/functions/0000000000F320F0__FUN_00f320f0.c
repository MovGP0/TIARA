/* Ghidra address: 00f320f0 */
/* Ghidra symbol: FUN_00f320f0 */


ulonglong FUN_00f320f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar3 = FUN_00f2f760(&LAB_00f22f08,1,0);
  uVar6 = uVar3;
  (**(code **)(*param_2 + 8))(param_2,uVar3);
  *(undefined4 *)(param_1 + 0x48) = 0;
  cVar1 = FUN_00f2e280(param_1);
  if (cVar1 == '-') {
    uVar6 = CONCAT62((int6)(uVar6 >> 0x10),0x2d);
    FUN_00f2e400(param_1,uVar6);
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    else {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    }
    if ((*(ulonglong *)(param_1 + 8) <= *(ulonglong *)(param_1 + 0x18)) ||
       (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34))) {
      cVar1 = FUN_00f2e280(param_1);
      if ((byte)(cVar1 - 0x30U) < 0x40) {
        uVar6 = 1L << (cVar1 - 0x30U & 0x3f);
        bVar7 = (uVar6 & 0x200000002003ff) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) goto LAB_00f321e2;
    }
    lVar4 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
    if (0xffffffff < lVar4 + 0x80000000U) {
      lVar4 = FUN_00410a90();
    }
    return (ulonglong)(uint)-(int)lVar4;
  }
LAB_00f321e2:
  cVar1 = FUN_00f2e280(param_1);
  if (cVar1 == '0') {
    uVar6 = CONCAT62((int6)(uVar6 >> 0x10),0x30);
    FUN_00f2e400(param_1,uVar6);
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    else {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    }
    if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
       (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
      FUN_00f2e590(param_1,uVar3 + 0x10,0);
      uVar6 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (uVar6 + 0x80000000 < 0x100000000) {
        return uVar6;
      }
      uVar6 = FUN_00410a90();
      return uVar6;
    }
    cVar1 = FUN_00f2e280(param_1);
    if ((byte)(cVar1 - 0x30U) < 0x10) {
      uVar5 = (int)CONCAT62((int6)(uVar6 >> 0x10),1) << (cVar1 - 0x30U & 0x1f);
      uVar6 = (ulonglong)uVar5;
      bVar7 = (uVar5 & 0x3ff) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      lVar4 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar4 + 0x80000000U) {
        lVar4 = FUN_00410a90();
      }
      return (ulonglong)(uint)-(int)lVar4;
    }
  }
  bVar7 = true;
  while (bVar7) {
    cVar1 = FUN_00f2e280(param_1);
    if ((byte)(cVar1 - 0x30U) < 0x10) {
      uVar5 = (int)CONCAT62((int6)(uVar6 >> 0x10),1) << (cVar1 - 0x30U & 0x1f);
      uVar6 = (ulonglong)uVar5;
      bVar8 = (uVar5 & 0x3ff) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      bVar2 = FUN_00f2d670(param_1);
      uVar6 = CONCAT62((int6)(uVar6 >> 0x10),(ushort)bVar2);
      FUN_00f2e400(param_1,uVar6);
      if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
         (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
        FUN_00f2e590(param_1,uVar3 + 0x10,0);
        uVar6 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        if (uVar6 + 0x80000000 < 0x100000000) {
          return uVar6;
        }
        uVar6 = FUN_00410a90();
        return uVar6;
      }
    }
    else {
      bVar7 = false;
    }
  }
  bVar7 = false;
  bVar2 = FUN_00f2e280(param_1);
  if (bVar2 == DAT_0202ecda) {
    uVar6 = (ulonglong)DAT_0202ecda;
    FUN_00f2e400(param_1,uVar6);
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    else {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    }
    if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
       (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
      lVar4 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar4 + 0x80000000U) {
        lVar4 = FUN_00410a90();
      }
      return (ulonglong)(uint)-(int)lVar4;
    }
  }
  else {
    cVar1 = FUN_00f2e280(param_1);
    if ((cVar1 != 'e') && (cVar1 = FUN_00f2e280(param_1), cVar1 != 'E')) {
      FUN_00f2e590(param_1,uVar3 + 0x10,0);
      uVar6 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (uVar6 + 0x80000000 < 0x100000000) {
        return uVar6;
      }
      uVar6 = FUN_00410a90();
      return uVar6;
    }
    bVar2 = FUN_00f2d670(param_1);
    uVar6 = CONCAT62((int6)(uVar6 >> 0x10),(ushort)bVar2);
    FUN_00f2e400(param_1,uVar6);
    bVar7 = true;
    if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
       (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
      lVar4 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar4 + 0x80000000U) {
        lVar4 = FUN_00410a90();
      }
      return (ulonglong)(uint)-(int)lVar4;
    }
    cVar1 = FUN_00f2e280(param_1);
    if ((cVar1 == '-') || (cVar1 = FUN_00f2e280(param_1), cVar1 == '+')) {
      bVar2 = FUN_00f2d670(param_1);
      uVar6 = CONCAT62((int6)(uVar6 >> 0x10),(ushort)bVar2);
      FUN_00f2e400(param_1,uVar6);
      if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
         (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
        lVar4 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (ulonglong)(uint)-(int)lVar4;
      }
    }
  }
  bVar10 = false;
  bVar8 = true;
  while (bVar8) {
    cVar1 = FUN_00f2e280(param_1);
    if ((byte)(cVar1 - 0x30U) < 0x10) {
      uVar5 = (int)CONCAT62((int6)(uVar6 >> 0x10),1) << (cVar1 - 0x30U & 0x1f);
      uVar6 = (ulonglong)uVar5;
      bVar9 = (uVar5 & 0x3ff) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      bVar2 = FUN_00f2d670(param_1);
      uVar6 = CONCAT62((int6)(uVar6 >> 0x10),(ushort)bVar2);
      FUN_00f2e400(param_1,uVar6);
      bVar10 = true;
      if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
         (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
        FUN_00f2e590(param_1,uVar3 + 0x10,0);
        uVar6 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        if (uVar6 + 0x80000000 < 0x100000000) {
          return uVar6;
        }
        uVar6 = FUN_00410a90();
        return uVar6;
      }
    }
    else {
      bVar8 = false;
    }
  }
  if (!bVar10) {
    lVar4 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
    if (0xffffffff < lVar4 + 0x80000000U) {
      lVar4 = FUN_00410a90();
    }
    return (ulonglong)(uint)-(int)lVar4;
  }
  if ((!bVar7) &&
     ((cVar1 = FUN_00f2e280(param_1), cVar1 == 'e' || (cVar1 = FUN_00f2e280(param_1), cVar1 == 'E'))
     )) {
    bVar2 = FUN_00f2d670(param_1);
    uVar6 = CONCAT62((int6)(uVar6 >> 0x10),(ushort)bVar2);
    FUN_00f2e400(param_1,uVar6);
    if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
       (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
      lVar4 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar4 + 0x80000000U) {
        lVar4 = FUN_00410a90();
      }
      return (ulonglong)(uint)-(int)lVar4;
    }
    cVar1 = FUN_00f2e280(param_1);
    if ((cVar1 == '-') || (cVar1 = FUN_00f2e280(param_1), cVar1 == '+')) {
      bVar2 = FUN_00f2d670(param_1);
      uVar6 = CONCAT62((int6)(uVar6 >> 0x10),(ushort)bVar2);
      FUN_00f2e400(param_1,uVar6);
      if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
         (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
        lVar4 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        return (ulonglong)(uint)-(int)lVar4;
      }
    }
    bVar8 = false;
    bVar7 = true;
    while (bVar7) {
      cVar1 = FUN_00f2e280(param_1);
      if ((byte)(cVar1 - 0x30U) < 0x10) {
        uVar5 = (int)CONCAT62((int6)(uVar6 >> 0x10),1) << (cVar1 - 0x30U & 0x1f);
        uVar6 = (ulonglong)uVar5;
        bVar10 = (uVar5 & 0x3ff) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        bVar2 = FUN_00f2d670(param_1);
        uVar6 = CONCAT62((int6)(uVar6 >> 0x10),(ushort)bVar2);
        FUN_00f2e400(param_1,uVar6);
        bVar8 = true;
        if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
           (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
          FUN_00f2e590(param_1,uVar3 + 0x10,0);
          uVar6 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
          if (0xffffffff < uVar6 + 0x80000000) {
            uVar6 = FUN_00410a90();
          }
          return uVar6;
        }
      }
      else {
        bVar7 = false;
      }
    }
    if (!bVar8) {
      lVar4 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar4 + 0x80000000U) {
        lVar4 = FUN_00410a90();
      }
      return (ulonglong)(uint)-(int)lVar4;
    }
  }
  FUN_00f2e590(param_1,uVar3 + 0x10,0);
  uVar6 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
  if (uVar6 + 0x80000000 < 0x100000000) {
    return uVar6;
  }
  uVar6 = FUN_00410a90();
  return uVar6;
}

