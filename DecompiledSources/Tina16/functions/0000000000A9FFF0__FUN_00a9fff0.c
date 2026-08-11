/* Ghidra address: 00a9fff0 */
/* Ghidra symbol: FUN_00a9fff0 */


void FUN_00a9fff0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x74);
  iVar8 = iVar7 - *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x94);
  *(int *)(param_1 + 0x2c) = iVar7 + *(int *)(*(longlong *)(param_1 + 0x40) + 0x88);
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x508) != '\x01') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
    if (*(char *)(lVar3 + 0x308) == '\0') {
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x92) != '\0') &&
         (*(char *)(*(longlong *)(param_1 + 0x40) + 0x4c) != '\x02')) {
        if ((*(char *)(*(longlong *)(param_1 + 0x40) + 0x50b) == '\0') ||
           (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x2c8) != '\0')) {
          if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x50d) == '\0') {
            if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x50c) == '\0') {
              cVar4 = FUN_004113d0(*(undefined8 *)(param_1 + 0x40),&PTR_FUN_00a8dc10);
              if ((cVar4 == '\0') ||
                 (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x560) + 0xd0) != '\0')) {
                if (((cVar4 != '\0') &&
                    ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x560),
                     *(char *)(lVar3 + 0xd0) != '\0' &&
                     (*(int *)(*(longlong *)(lVar3 + 0x18) + 0x2d8) == 0)))) &&
                   ((lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x2f8), lVar5 == 0 ||
                    (lVar5 == *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x560))))) {
                  iVar2 = *(int *)(lVar3 + 0x13c);
                  lVar5 = FUN_00ac4a60(*(undefined8 *)(lVar3 + 0x168),*(undefined4 *)(lVar3 + 0xbc))
                  ;
                  iVar6 = *(int *)(lVar3 + 0xb8) + *(int *)(lVar3 + 0xc0) + *(int *)(lVar5 + 0x20);
                  iVar9 = *(int *)(*(longlong *)(param_1 + 0x50) + 4);
                  if (((iVar9 < iVar8) &&
                      (*(int *)(*(longlong *)(lVar3 + 0x18) + 0x218) < iVar7 + iVar6)) &&
                     (iVar6 < *(int *)(*(longlong *)(param_1 + 0x50) + 0xc) - iVar9)) {
                    iVar7 = iVar7 + iVar2 / 2;
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                    if (*(int *)(lVar3 + 0x218) <= iVar7) {
                      return;
                    }
                    *(undefined1 *)(lVar3 + 0x21c) = 1;
                    *(int *)(lVar3 + 0x218) = iVar7;
                    return;
                  }
                }
              }
              else {
                iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + 4);
                iVar9 = *(int *)(*(longlong *)(param_1 + 0x50) + 0xc) - iVar2;
                if (((iVar2 + (iVar9 * 2) / 3 < iVar8) &&
                    (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x218) <
                     iVar7 + *(int *)(*(longlong *)(param_1 + 0x40) + 0x8c))) &&
                   (*(int *)(*(longlong *)(param_1 + 0x40) + 0x8c) < iVar9)) {
                  iVar7 = iVar7 + *(int *)(*(longlong *)(param_1 + 0x40) + 0x478);
                  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
                  if (*(int *)(lVar3 + 0x218) <= iVar7) {
                    return;
                  }
                  *(int *)(lVar3 + 0x218) = iVar7;
                  return;
                }
              }
            }
            else {
              lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
              if ((*(int *)(*(longlong *)(param_1 + 0x50) + 4) + *(int *)(lVar3 + 0x94) <
                   *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < *(int *)(lVar3 + 0x218))
                 ) {
                *(undefined4 *)(lVar3 + 0x218) = *(undefined4 *)(param_1 + 0x2c);
              }
            }
          }
          else {
            iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + 4);
            if (((iVar2 < iVar8) &&
                (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x218) <
                 iVar7 + *(int *)(*(longlong *)(param_1 + 0x40) + 0x8c))) &&
               (*(int *)(*(longlong *)(param_1 + 0x40) + 0x8c) -
                *(int *)(*(longlong *)(param_1 + 0x40) + 0x478) <
                *(int *)(*(longlong *)(param_1 + 0x50) + 0xc) - iVar2)) {
              iVar7 = iVar7 + *(int *)(*(longlong *)(param_1 + 0x40) + 0x478);
              lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
              if (*(int *)(lVar3 + 0x218) <= iVar7) {
                return;
              }
              *(int *)(lVar3 + 0x218) = iVar7;
              return;
            }
          }
        }
        else {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
          iVar8 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x74) +
                  *(int *)(*(longlong *)(param_1 + 0x40) + 0x478);
          if (*(int *)(*(longlong *)(param_1 + 0x50) + 4) + *(int *)(lVar3 + 0x94) < iVar8) {
            if (iVar8 < *(int *)(lVar3 + 0x218)) {
              *(int *)(lVar3 + 0x218) = iVar8;
            }
            *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x308) = 1;
            return;
          }
        }
      }
      cVar4 = *(char *)(*(longlong *)(param_1 + 0x40) + 0x4c);
      if (cVar4 == '\x01') {
        FUN_00aa06a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                     *(int *)(param_1 + 0x60) + *(int *)(*(longlong *)(param_1 + 0x40) + 0x52c),
                     iVar7 + *(int *)(*(longlong *)(param_1 + 0x40) + 0x528),
                     *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
      }
      else if (cVar4 == '\x02') {
        FUN_00aa06a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x52c),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x528),0,0);
      }
      else if (cVar4 == '\x03') {
        FUN_00aa06a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x52c),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x528),0,0);
      }
      else {
        bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x60);
        if (bVar1 < 8) {
          bVar10 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1) <<
                    (bVar1 & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          FUN_00aa06a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                       *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x60),iVar7,*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0x70));
        }
        else {
          FUN_00aa06a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                       *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x60),iVar7,*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0x70));
        }
      }
    }
    else {
      *(undefined1 *)(lVar3 + 0x308) = 0;
    }
  }
  return;
}

