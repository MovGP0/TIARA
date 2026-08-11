/* Ghidra address: 019b6fd0 */
/* Ghidra symbol: FUN_019b6fd0 */


undefined1 FUN_019b6fd0(ushort param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  
  if ((*(ushort **)(param_2 + 0x28) == (ushort *)0x0) || (param_1 < **(ushort **)(param_2 + 0x28)))
  {
    for (pbVar1 = *(byte **)(param_2 + 8); pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0xb0)
        ) {
      uVar2 = (ulonglong)*pbVar1;
      if (uVar2 < 0x1e) {
        if (uVar2 < 0x11) {
          if (uVar2 - 9 < 3) {
LAB_019b70a2:
            if (**(ushort **)(pbVar1 + 0xa8) == param_1) {
              return (char)(*(ushort **)(pbVar1 + 0xa8))[1];
            }
          }
          else if (uVar2 - 9 == 3) {
            iVar3 = 1;
            do {
              if (*(ushort *)(*(longlong *)(pbVar1 + 0xa8) + -0x40 + (longlong)iVar3 * 0x40) ==
                  param_1) {
                return *(undefined1 *)
                        (*(longlong *)(pbVar1 + 0xa8) + -0x3e + (longlong)iVar3 * 0x40);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 4);
          }
        }
        else {
          if (uVar2 - 0x11 < 4) goto LAB_019b70a2;
          if (uVar2 - 0x18 < 2) goto LAB_019b7105;
          if (uVar2 - 0x1a < 4) goto LAB_019b7162;
        }
      }
      else if (uVar2 < 0x57) {
        if (uVar2 - 0x1e < 2) {
LAB_019b71b9:
          if (pbVar1[0xa5] == 2) {
            iVar3 = 1;
            do {
              if (*(ushort *)(*(longlong *)(pbVar1 + 0xa8) + -0x40 + (longlong)iVar3 * 0x40) ==
                  param_1) {
                return *(undefined1 *)
                        (*(longlong *)(pbVar1 + 0xa8) + -0x3e + (longlong)iVar3 * 0x40);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 3);
          }
        }
        else if (uVar2 - 0x25 < 2) goto LAB_019b70a2;
      }
      else if (uVar2 - 0x57 < 2) {
LAB_019b7105:
        if (pbVar1[0xa5] == 3) {
          iVar3 = 1;
          do {
            if (*(ushort *)(*(longlong *)(pbVar1 + 0xa8) + -0x40 + (longlong)iVar3 * 0x40) ==
                param_1) {
              return *(undefined1 *)(*(longlong *)(pbVar1 + 0xa8) + -0x3e + (longlong)iVar3 * 0x40);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 3);
        }
      }
      else if (uVar2 - 0x59 < 4) {
LAB_019b7162:
        if (pbVar1[0xa5] == 8) {
          iVar3 = 1;
          do {
            if (*(ushort *)(*(longlong *)(pbVar1 + 0xa8) + -0x40 + (longlong)iVar3 * 0x40) ==
                param_1) {
              return *(undefined1 *)(*(longlong *)(pbVar1 + 0xa8) + -0x3e + (longlong)iVar3 * 0x40);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 3);
        }
      }
      else if (uVar2 - 0x5d < 2) goto LAB_019b71b9;
    }
  }
  return 0;
}

