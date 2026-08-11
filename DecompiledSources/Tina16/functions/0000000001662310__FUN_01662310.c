/* Ghidra address: 01662310 */
/* Ghidra symbol: FUN_01662310 */


void FUN_01662310(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int unaff_EDI;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
  uVar9 = FUN_016ed780(*(undefined8 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x138));
  *(undefined8 *)(param_1 + 0x128) = uVar9;
  if ((*(int *)(param_1 + 0xd0) == 1) || (*(int *)(param_1 + 0x204) < *(int *)(param_1 + 0x1fc))) {
    uVar4 = FUN_01b11110();
    if (((int)(uVar4 & 0xff) < *(int *)(param_1 + 0xf0)) && (4 < *(int *)(param_1 + 0x34))) {
      FUN_004d1e40(*(undefined8 *)
                    (*(longlong *)(param_1 + 0xc0) + (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8))
      ;
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
      iVar3 = *(int *)(param_1 + 0xd0);
      uVar5 = (ulonglong)(iVar3 + -1);
      if ((0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 200) + uVar5 * 8) + 0x50)) &&
         (iVar2 = 0, -1 < iVar3 + -1)) {
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 8);
          iVar7 = *(int *)(lVar8 + 0x50) *
                  *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 200) + (longlong)*(int *)(param_1 + 0xd0) * 8)
                          + 0x50);
          iVar6 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 200) +
                            (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) + 0x50);
          uVar5 = (longlong)iVar7 % (longlong)iVar6 & 0xffffffff;
          *(int *)(lVar8 + 0x50) = iVar7 / iVar6;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20c) = 100;
      *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x21c) = 0;
      FUN_01660de0(param_1,CONCAT71((int7)(uVar5 >> 8),1));
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    uVar5 = 0;
    iVar7 = *(int *)(param_1 + 0xd0) + -1;
    iVar6 = 1;
    if (0 < iVar7) {
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar6 * 8);
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar3 * 8) + 0x58) <
            *(int *)(lVar8 + 0x58)) {
          iVar3 = iVar6;
        }
        uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 8);
        if (*(int *)(uVar5 + 0x5c) < *(int *)(lVar8 + 0x5c)) {
          iVar2 = iVar6;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(int *)(param_1 + 0x208) < 1) {
      uVar5 = (longlong)*(int *)(param_1 + 0x30) % 0x10 & 0xffffffff;
      *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x30) / 0x10;
    }
    if (iVar3 < iVar2) {
      uVar4 = iVar2 - 1;
      uVar5 = (ulonglong)uVar4;
      if (iVar3 <= (int)uVar4) {
        uVar5 = (ulonglong)((uVar4 - iVar3) + 1);
        iVar6 = iVar3;
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar6 * 8);
          *(int *)(lVar8 + 0x50) = *(int *)(lVar8 + 0x50) - *(int *)(param_1 + 0x208);
          if (*(int *)(lVar8 + 0x50) < 0) {
            *(undefined4 *)(lVar8 + 0x50) = 0;
          }
          iVar6 = iVar6 + 1;
          uVar4 = (int)uVar5 - 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 != 0);
      }
    }
    if ((iVar2 < iVar3) && (iVar2 <= iVar3 + -1)) {
      iVar7 = ((iVar3 + -1) - iVar2) + 1;
      iVar6 = iVar2;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar6 * 8);
        *(int *)(lVar8 + 0x50) = *(int *)(lVar8 + 0x50) + *(int *)(param_1 + 0x208);
        uVar4 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 200) +
                           (longlong)(*(int *)(param_1 + 0xd0) + -1) * 8) + 0x50);
        uVar5 = (ulonglong)uVar4;
        if ((int)uVar4 < *(int *)(lVar8 + 0x50)) {
          *(uint *)(lVar8 + 0x50) = uVar4;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar2 = iVar3 * 0x10000 + iVar2;
    *(int *)(param_1 + 0x210) = iVar2;
    if (*(int *)(param_1 + 0x214) == -1) {
      *(int *)(param_1 + 0x214) = iVar2;
    }
    if (*(int *)(param_1 + 0x210) == *(int *)(param_1 + 0x214)) {
      *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + 1;
      if (2 < *(int *)(param_1 + 0x21c)) {
        *(undefined4 *)(param_1 + 0x218) = 0;
      }
    }
    else {
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
      *(undefined4 *)(param_1 + 0x21c) = 0;
    }
    if (1 < *(int *)(param_1 + 0x218)) {
      *(undefined4 *)(param_1 + 0x21c) = 0;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x210);
      if (*(int *)(param_1 + 0x208) < 2) {
        *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) * 4;
        if (0x6400 < *(int *)(param_1 + 0x20c)) {
          *(undefined4 *)(param_1 + 0x20c) = 0x6400;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x208);
        uVar5 = (longlong)iVar3 % 4 & 0xffffffff;
        *(int *)(param_1 + 0x208) = iVar3 / 4;
        if (*(int *)(param_1 + 0x208) < 1) {
          *(undefined4 *)(param_1 + 0x208) = 1;
        }
      }
    }
    iVar3 = *(int *)(param_1 + 0xd0);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar5 = (ulonglong)iVar2;
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 200) + uVar5 * 8);
        *(undefined4 *)(lVar8 + 0x58) = 0;
        *(undefined4 *)(lVar8 + 0x5c) = 0;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
    FUN_01660de0(param_1,CONCAT71((int7)(uVar5 >> 8),1));
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + *(int *)(param_1 + 0x20c);
  }
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa0) + 1;
  iVar2 = *(int *)(param_1 + 0xd0) + -1;
  iVar3 = 1;
  if (0 < iVar2) {
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 8);
      if (*(char *)(lVar8 + 0x1b) != '\0') {
        FUN_004d1ec0(lVar8);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_017c5870(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0xd8));
  (**(code **)(param_1 + 0x50))();
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  if (1 < *(int *)(param_1 + 0xd0)) {
    FUN_016621a0(param_1,param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0xd0) + -1;
    iVar3 = 1;
    if (0 < iVar2) {
      do {
        while (lVar8 = (longlong)iVar3,
              *(int *)(*(longlong *)(*(longlong *)(param_1 + 200) + lVar8 * 8) + 0x60) <
              *(int *)(param_1 + 0xa0)) {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar8 * 8);
          if ((*(char *)(lVar1 + 0x1b) != '\0') &&
             (FUN_004d1ec0(lVar1), 1 < *(int *)(param_1 + 0xa0))) {
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          }
          unaff_EDI = unaff_EDI + -1;
          if (unaff_EDI == 0) {
            FUN_004d1ec0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar8 * 8));
            if (1000 < *(int *)(param_1 + 0xa0)) {
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
            }
            unaff_EDI = 1000000;
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  (**(code **)(param_1 + 0x68))();
  return;
}

