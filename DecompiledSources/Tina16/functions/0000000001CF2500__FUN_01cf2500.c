/* Ghidra address: 01cf2500 */
/* Ghidra symbol: FUN_01cf2500 */


int FUN_01cf2500(longlong param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  iVar7 = 0;
  iVar3 = FUN_01cfd2d0();
  uVar8 = 0;
  if (-1 < iVar3 + -1) {
    do {
      iVar7 = iVar7 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar4 = FUN_01cfd030(*(undefined8 *)(param_1 + 0xd0),uVar6);
      uVar9 = (ulonglong)uVar4;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0xd8) + 0x78);
      if (bVar1 < 8) {
        bVar10 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar1 & 0x1f) & 0xeU) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        if (bVar1 == 1) {
          sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                            (*(longlong **)(param_1 + 0xd0));
          if ((((((((sVar2 == 10) ||
                   (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                      (*(longlong **)(param_1 + 0xd0)), sVar2 == 0x6d)) ||
                  (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xca)) ||
                 ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xd4 ||
                  (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xde)))) ||
                ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                    (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xb ||
                 ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0x6e ||
                  (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xcc)))))) ||
               ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                   (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xd6 ||
                (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                   (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xe0)))) &&
              (uVar8 == 2)) ||
             ((((((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0x4f ||
                  (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xcb)) ||
                 (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                    (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xd5)) ||
                (((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xdf ||
                  (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0x50)) ||
                 ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xcd ||
                  ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                      (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xd7 ||
                   (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                      (*(longlong **)(param_1 + 0xd0)), sVar2 == 0xe1)))))))) &&
               (uVar8 == 3)) ||
              (((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                   (*(longlong **)(param_1 + 0xd0)), sVar2 == 0x25 ||
                (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                   (*(longlong **)(param_1 + 0xd0)), sVar2 == 0x26)) && (uVar8 == 1)
               ))))) {
            uVar9 = CONCAT71((uint7)(uint3)(uVar4 >> 8),3);
          }
          sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                            (*(longlong **)(param_1 + 0xd0));
          if ((((sVar2 != 0x7d) &&
               (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                  (*(longlong **)(param_1 + 0xd0)), sVar2 != 0x7e)) &&
              (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                 (*(longlong **)(param_1 + 0xd0)), sVar2 != 0x80)) || (uVar8 != 3))
          goto LAB_01cf2813;
        }
        else {
LAB_01cf2813:
          sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                            (*(longlong **)(param_1 + 0xd0));
          if (((((sVar2 != 0xf) &&
                (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                   (*(longlong **)(param_1 + 0xd0)), sVar2 != 0x10)) &&
               ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                   (*(longlong **)(param_1 + 0xd0)), sVar2 != 0xd9 &&
                (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                   (*(longlong **)(param_1 + 0xd0)), sVar2 != 0xda)))) ||
              (uVar8 != 4)) &&
             (((((((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                      (*(longlong **)(param_1 + 0xd0)), sVar2 != 4 &&
                   (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                      (*(longlong **)(param_1 + 0xd0)), sVar2 != 5)) &&
                  (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 != 0x21)) &&
                 ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 != 0x77 &&
                  (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                     (*(longlong **)(param_1 + 0xd0)), sVar2 != 6)))) &&
                ((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                    (*(longlong **)(param_1 + 0xd0)), sVar2 != 0x22 &&
                 (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                    (*(longlong **)(param_1 + 0xd0)), sVar2 != 7)))) || (uVar8 != 1)
               ) && (((sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                         (*(longlong **)(param_1 + 0xd0)), sVar2 != 8 &&
                      (sVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xf8))
                                         (*(longlong **)(param_1 + 0xd0)), sVar2 != 0x62)) ||
                     (uVar8 != 2)))))) goto LAB_01cf2971;
        }
      }
      else {
LAB_01cf2971:
        iVar5 = FUN_01cf1c20(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),uVar8,
                             uVar9);
        iVar7 = iVar7 + iVar5;
      }
      uVar8 = uVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar7;
}

