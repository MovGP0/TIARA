/* Ghidra address: 00efccb0 */
/* Ghidra symbol: FUN_00efccb0 */


void FUN_00efccb0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x92) == '\0') {
    for (pbVar1 = *(byte **)(param_1 + 8); pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0xb0)
        ) {
      uVar3 = (ulonglong)*pbVar1;
      if (uVar3 < 0x1e) {
        if (uVar3 < 0x11) {
          if (uVar3 - 9 < 3) {
LAB_00efcd74:
            *(undefined1 *)(*(longlong *)(pbVar1 + 0xa8) + 2) = 0;
          }
          else if (uVar3 - 9 == 3) {
            lVar2 = *(longlong *)(pbVar1 + 0xa8);
            iVar4 = 1;
            do {
              *(undefined1 *)(lVar2 + -0x3e + (longlong)iVar4 * 0x40) = 0;
              iVar4 = iVar4 + 1;
            } while (iVar4 != 4);
          }
        }
        else {
          if (uVar3 - 0x11 < 4) goto LAB_00efcd74;
          if (uVar3 - 0x18 < 2) goto LAB_00efcdb0;
          if (uVar3 - 0x1a < 4) goto LAB_00efcdec;
        }
      }
      else if (uVar3 < 0x57) {
        if (uVar3 - 0x1e < 2) {
LAB_00efce24:
          if (pbVar1[0xa5] == 2) {
            lVar2 = *(longlong *)(pbVar1 + 0xa8);
            iVar4 = 1;
            do {
              *(undefined1 *)(lVar2 + -0x3e + (longlong)iVar4 * 0x40) = 0;
              iVar4 = iVar4 + 1;
            } while (iVar4 != 3);
          }
        }
        else if (uVar3 - 0x25 < 2) goto LAB_00efcd74;
      }
      else if (uVar3 - 0x57 < 2) {
LAB_00efcdb0:
        if (pbVar1[0xa5] == 3) {
          lVar2 = *(longlong *)(pbVar1 + 0xa8);
          iVar4 = 1;
          do {
            *(undefined1 *)(lVar2 + -0x3e + (longlong)iVar4 * 0x40) = 0;
            iVar4 = iVar4 + 1;
          } while (iVar4 != 3);
        }
      }
      else if (uVar3 - 0x59 < 4) {
LAB_00efcdec:
        if (pbVar1[0xa5] == 8) {
          lVar2 = *(longlong *)(pbVar1 + 0xa8);
          iVar4 = 1;
          do {
            *(undefined1 *)(lVar2 + -0x3e + (longlong)iVar4 * 0x40) = 0;
            iVar4 = iVar4 + 1;
          } while (iVar4 != 3);
        }
      }
      else if (uVar3 - 0x5d < 2) goto LAB_00efce24;
    }
  }
  return;
}

