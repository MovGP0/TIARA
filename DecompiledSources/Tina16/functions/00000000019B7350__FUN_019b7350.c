/* Ghidra address: 019b7350 */
/* Ghidra symbol: FUN_019b7350 */


undefined8 FUN_019b7350(ushort param_1,longlong param_2)

{
  bool bVar1;
  byte *pbVar2;
  ushort *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 in_XMM0_Qa;
  
  if (param_1 == 8) {
    in_XMM0_Qa = 0x3ff0000000000000;
  }
  else if (param_1 == 9) {
    in_XMM0_Qa = 0;
  }
  else if (*(ushort *)(param_2 + 0x10) < param_1) {
    in_XMM0_Qa = 0;
  }
  else {
    puVar3 = *(ushort **)(param_2 + 0x28);
    if ((puVar3 == (ushort *)0x0) || (param_1 < *puVar3)) {
      pbVar2 = *(byte **)(param_2 + 8);
      bVar1 = false;
      while ((pbVar2 != (byte *)0x0 && (!bVar1))) {
        uVar4 = (ulonglong)*pbVar2;
        if (uVar4 < 0x1e) {
          if (uVar4 < 0x11) {
            if (uVar4 - 9 < 3) {
LAB_019b745f:
              if (**(ushort **)(pbVar2 + 0xa8) == param_1) {
                in_XMM0_Qa = *(undefined8 *)(*(ushort **)(pbVar2 + 0xa8) + 4);
                bVar1 = true;
              }
            }
            else if (uVar4 - 9 == 3) {
              iVar5 = 1;
              do {
                if (*(ushort *)(*(longlong *)(pbVar2 + 0xa8) + -0x40 + (longlong)iVar5 * 0x40) ==
                    param_1) {
                  in_XMM0_Qa = *(undefined8 *)
                                (*(longlong *)(pbVar2 + 0xa8) + -0x38 + (longlong)iVar5 * 0x40);
                  bVar1 = true;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 != 4);
            }
          }
          else {
            if (uVar4 - 0x11 < 4) goto LAB_019b745f;
            if (uVar4 - 0x18 < 2) goto LAB_019b74c3;
            if (uVar4 - 0x1a < 4) goto LAB_019b751d;
          }
        }
        else if (uVar4 < 0x57) {
          if (uVar4 - 0x1e < 2) {
LAB_019b7574:
            if (pbVar2[0xa5] == 2) {
              iVar5 = 1;
              do {
                if (*(ushort *)(*(longlong *)(pbVar2 + 0xa8) + -0x40 + (longlong)iVar5 * 0x40) ==
                    param_1) {
                  in_XMM0_Qa = *(undefined8 *)
                                (*(longlong *)(pbVar2 + 0xa8) + -0x38 + (longlong)iVar5 * 0x40);
                  bVar1 = true;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 != 3);
            }
          }
          else if (uVar4 - 0x25 < 2) goto LAB_019b745f;
        }
        else if (uVar4 - 0x57 < 2) {
LAB_019b74c3:
          if (pbVar2[0xa5] == 3) {
            iVar5 = 1;
            do {
              if (*(ushort *)(*(longlong *)(pbVar2 + 0xa8) + -0x40 + (longlong)iVar5 * 0x40) ==
                  param_1) {
                in_XMM0_Qa = *(undefined8 *)
                              (*(longlong *)(pbVar2 + 0xa8) + -0x38 + (longlong)iVar5 * 0x40);
                bVar1 = true;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 != 3);
          }
        }
        else if (uVar4 - 0x59 < 4) {
LAB_019b751d:
          if (pbVar2[0xa5] == 8) {
            iVar5 = 1;
            do {
              if (*(ushort *)(*(longlong *)(pbVar2 + 0xa8) + -0x40 + (longlong)iVar5 * 0x40) ==
                  param_1) {
                in_XMM0_Qa = *(undefined8 *)
                              (*(longlong *)(pbVar2 + 0xa8) + -0x38 + (longlong)iVar5 * 0x40);
                bVar1 = true;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 != 3);
          }
        }
        else if (uVar4 - 0x5d < 2) goto LAB_019b7574;
        pbVar2 = *(byte **)(pbVar2 + 0xb0);
      }
    }
    else {
      bVar1 = false;
      for (; puVar3 != (ushort *)0x0; puVar3 = *(ushort **)(puVar3 + 0xfc)) {
        iVar5 = 0;
        do {
          if (puVar3[iVar5] == param_1) {
            return *(undefined8 *)(puVar3 + (longlong)iVar5 * 4 + 0x34);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x32);
      }
    }
    if (!bVar1) {
      in_XMM0_Qa = 0;
    }
  }
  return in_XMM0_Qa;
}

