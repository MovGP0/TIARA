/* Ghidra address: 010dc8a0 */
/* Ghidra symbol: FUN_010dc8a0 */


void FUN_010dc8a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  bool bVar8;
  
  uVar6 = param_2 & 0xffffffff;
  bVar7 = (byte)uVar6;
  if ((*(char *)(param_1 + 0x68) == '\0') && (bVar7 == 0x6c)) {
    FUN_0153b340(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
  }
  *(undefined1 *)(param_1 + 0x69) = 0;
  bVar1 = *(byte *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x58) = bVar7;
  uVar4 = (ulonglong)bVar1;
  if (uVar4 < 4) {
    if (uVar4 == 3) {
LAB_010dca6e:
      if (bVar7 < 8) {
        uVar3 = 1 << (bVar7 & 0x1f);
        bVar8 = (uVar3 & 10) != 0;
        uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar8);
      }
      else {
        uVar4 = 0;
        bVar8 = false;
      }
      if (bVar8) {
        if (*(char *)(param_1 + 0x71) == '\0') {
          cVar2 = FUN_0153b2e0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          if (cVar2 != '\0') {
            *(undefined1 *)(param_1 + 0x69) = 1;
          }
        }
        else {
          FUN_0153b310(0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          cVar2 = FUN_0153b2b0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          if (cVar2 != '\0') {
            cVar2 = FUN_0153b2e0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
            if (cVar2 != '\0') {
              *(undefined1 *)(param_1 + 0x69) = 1;
            }
          }
        }
        if (*(char *)(param_1 + 0x69) == '\0') {
          FUN_0153b310(1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
        }
      }
      else {
        if (bVar7 < 8) {
          uVar6 = 0;
          bVar8 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (bVar7 & 0x1f) & 0x15U) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          FUN_0153b310(0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          cVar2 = FUN_0153b1d0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          if (cVar2 != '\0') {
            cVar2 = FUN_0153b200(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
            if (cVar2 != '\0') {
              *(undefined1 *)(param_1 + 0x69) = 1;
            }
          }
          if (*(char *)(param_1 + 0x69) == '\0') {
            FUN_0153b230(1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          }
        }
        else {
          FUN_0153b310(CONCAT71((int7)(uVar6 >> 8),1),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          *(undefined1 *)(param_1 + 0x68) = 1;
        }
      }
      goto LAB_010dcc7b;
    }
    lVar5 = uVar4 - 1;
    if (lVar5 != -1) {
      if (lVar5 == 0) goto LAB_010dca6e;
      if (uVar4 != 2) goto LAB_010dcc7b;
      lVar5 = 0;
    }
  }
  else {
    lVar5 = 0;
    if (uVar4 != 4) {
      if ((uVar4 == 5) || (uVar4 == 0x6c)) {
        if (bVar7 < 8) {
          uVar3 = 1 << (bVar7 & 0x1f);
          bVar8 = (uVar3 & 10) != 0;
          uVar6 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar8);
        }
        else {
          uVar6 = 0;
          bVar8 = false;
        }
        if (bVar8) {
          cVar2 = FUN_0153b2b0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          if (cVar2 != '\0') {
            cVar2 = FUN_0153b2e0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
            if (cVar2 != '\0') {
              *(undefined1 *)(param_1 + 0x69) = 1;
            }
          }
          if (*(char *)(param_1 + 0x69) == '\0') {
            FUN_0153b310(1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          }
        }
        else {
          if (bVar7 < 8) {
            bVar8 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar7 & 0x1f) & 0x15U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            cVar2 = FUN_0153b1d0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
            if (cVar2 != '\0') {
              cVar2 = FUN_0153b200(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
              if (cVar2 != '\0') {
                *(undefined1 *)(param_1 + 0x69) = 1;
              }
            }
            if (*(char *)(param_1 + 0x69) == '\0') {
              FUN_0153b230(1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x68) = 1;
          }
        }
      }
      goto LAB_010dcc7b;
    }
  }
  if (bVar7 < 8) {
    uVar3 = (int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (bVar7 & 0x1f);
    bVar8 = (uVar3 & 0x15) != 0;
    uVar6 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar8);
  }
  else {
    uVar6 = 0;
    bVar8 = false;
  }
  if (bVar8) {
    if (*(char *)(param_1 + 0x71) == '\0') {
      cVar2 = FUN_0153b200(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x69) = 1;
      }
    }
    else {
      FUN_0153b230(0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      cVar2 = FUN_0153b1d0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      if (cVar2 != '\0') {
        cVar2 = FUN_0153b200(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x69) = 1;
        }
      }
    }
    if (*(char *)(param_1 + 0x69) == '\0') {
      FUN_0153b230(1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
    }
  }
  else {
    param_2 = param_2 & 0xffffffff;
    bVar7 = (byte)param_2;
    if (bVar7 < 8) {
      param_2 = 0;
      bVar8 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar7 & 0x1f) & 10U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      FUN_0153b230(0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      cVar2 = FUN_0153b2b0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      if (cVar2 != '\0') {
        cVar2 = FUN_0153b2e0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x69) = 1;
        }
      }
      if (*(char *)(param_1 + 0x69) == '\0') {
        FUN_0153b310(1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      }
    }
    else {
      FUN_0153b230(CONCAT71((int7)(param_2 >> 8),1),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
  }
LAB_010dcc7b:
  if (*(char *)(param_1 + 0x58) == '\x05') {
    *(undefined1 *)(param_1 + 0x69) = 1;
  }
  *(bool *)(param_1 + 0x68) = *(char *)(param_1 + 0x58) == 'l';
  if (*(char *)(param_1 + 0x69) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 0x6c;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}

