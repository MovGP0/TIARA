/* Ghidra address: 00efdce0 */
/* Ghidra symbol: FUN_00efdce0 */


void FUN_00efdce0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x92) == '\0') {
    iVar5 = 0;
    for (pbVar1 = *(byte **)(param_1 + 8); pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0xb0)
        ) {
      uVar4 = (ulonglong)*pbVar1;
      if (uVar4 < 0x1e) {
        if (uVar4 < 0x11) {
          if (uVar4 - 9 < 3) {
LAB_00efddc4:
            lVar2 = *(longlong *)(pbVar1 + 0xa8);
            cVar3 = FUN_019b7680(lVar2 + 0x10,param_1);
            if (cVar3 == '\0') {
              *(undefined1 *)(lVar2 + 2) = 0;
            }
            else {
              *(undefined1 *)(lVar2 + 2) = 1;
              iVar5 = iVar5 + 1;
            }
          }
          else if (uVar4 - 9 == 3) {
            lVar2 = *(longlong *)(pbVar1 + 0xa8);
            iVar6 = 1;
            do {
              lVar7 = (longlong)iVar6;
              cVar3 = FUN_019b7680(lVar2 + -0x30 + lVar7 * 0x40,param_1);
              if (cVar3 == '\0') {
                *(undefined1 *)(lVar2 + -0x3e + lVar7 * 0x40) = 0;
              }
              else {
                *(undefined1 *)(lVar2 + -0x3e + lVar7 * 0x40) = 1;
                iVar5 = iVar5 + 1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 4);
          }
        }
        else {
          if (uVar4 - 0x11 < 4) goto LAB_00efddc4;
          if (uVar4 - 0x18 < 2) goto LAB_00efde54;
          if (uVar4 - 0x1a < 4) goto LAB_00efde82;
        }
      }
      else if (uVar4 < 0x57) {
        if (uVar4 - 0x1e < 2) {
LAB_00efdeb0:
          lVar2 = *(longlong *)(pbVar1 + 0xa8);
          iVar6 = 1;
          do {
            *(undefined1 *)(lVar2 + -0x3e + (longlong)iVar6 * 0x40) = 1;
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar6 != 3);
        }
        else if (uVar4 - 0x25 < 2) goto LAB_00efddc4;
      }
      else if (uVar4 - 0x57 < 2) {
LAB_00efde54:
        lVar2 = *(longlong *)(pbVar1 + 0xa8);
        iVar6 = 1;
        do {
          *(undefined1 *)(lVar2 + -0x3e + (longlong)iVar6 * 0x40) = 1;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 3);
      }
      else if (uVar4 - 0x59 < 4) {
LAB_00efde82:
        lVar2 = *(longlong *)(pbVar1 + 0xa8);
        iVar6 = 1;
        do {
          *(undefined1 *)(lVar2 + -0x3e + (longlong)iVar6 * 0x40) = 1;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 3);
      }
      else if (uVar4 - 0x5d < 2) goto LAB_00efdeb0;
    }
    FUN_00efd8d0(param_1);
    if ((1 < iVar5) && (*(char *)(*(longlong *)(param_1 + 0xe78) + 0x218) == '\0')) {
      FUN_00ef4260(0x12,param_1);
    }
    if (0x14 < iVar5) {
      FUN_00ef4260(6,param_1);
    }
    if (*(char *)(param_1 + 0xb3e) != '\0') {
      FUN_00ef4840(3);
      *(undefined1 *)(param_1 + 0xb3e) = 0;
    }
  }
  return;
}

