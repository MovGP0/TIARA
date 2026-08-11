/* Ghidra address: 015186d0 */
/* Ghidra symbol: FUN_015186d0 */


undefined8 FUN_015186d0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0xa9) == '\0') {
    if (*(short *)(param_1 + 0xb2) != 0) {
      *(short *)(param_1 + 0xb2) = *(short *)(param_1 + 0xb2) + -1;
    }
    if (*(short *)(param_1 + 0xb0) != 0) {
      *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + -1;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x84) == 1) || (*(short *)(param_1 + 0xac) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (*(ushort *)(param_1 + 0xac) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (longlong)(int)(*(ushort *)(param_1 + 0xac) - 1) %
              (longlong)(int)(uint)*(ushort *)(param_1 + 0x98) & 0xffffffff;
    }
    if ((*(int *)(param_1 + 0x84) != 1) && (*(short *)(param_1 + 0xac) != 0)) {
      iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      iVar9 = 0;
      if (-1 < iVar5 + -1) {
        do {
          if (((*(char *)(*(longlong *)(param_1 + 200) +
                          (longlong)(int)(iVar9 * (uint)*(ushort *)(param_1 + 0x98)) +
                         (ulonglong)*(ushort *)(param_1 + 0xae)) !=
                *(char *)(*(longlong *)(param_1 + 200) +
                          (longlong)(int)(iVar9 * (uint)*(ushort *)(param_1 + 0x98)) +
                         (uVar8 & 0xffff))) &&
              (iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                                 (*(longlong **)(param_1 + 8)),
              *(char *)(*(longlong *)(param_1 + 0xc0) +
                       (longlong)(*(int *)(param_1 + 0xbc) * iVar6 + iVar9)) != '\x02')) || (bVar4))
          {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    if (bVar4) {
      bVar4 = true;
      if (*(int *)(param_1 + 0x84) != 1) {
        iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
        iVar9 = 0;
        if (-1 < iVar5 + -1) {
          do {
            bVar1 = (&DAT_01f5eba8)
                    [*(byte *)(*(longlong *)(param_1 + 200) +
                               (longlong)(int)(iVar9 * (uint)*(ushort *)(param_1 + 0x98)) +
                              (uVar8 & 0xffff))];
            bVar2 = (&DAT_01f5eba8)
                    [*(byte *)(*(longlong *)(param_1 + 200) +
                               (longlong)(int)(iVar9 * (uint)*(ushort *)(param_1 + 0x98)) +
                              (ulonglong)*(ushort *)(param_1 + 0xae))];
            iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
            bVar3 = *(byte *)(*(longlong *)(param_1 + 0xc0) +
                             (longlong)(*(int *)(param_1 + 0xbc) * iVar6 + iVar9));
            if (bVar3 < 4) {
              if (bVar3 == 3) {
                bVar4 = (bool)(bVar4 & bVar1 < bVar2);
              }
              else if (bVar3 == 0) {
                bVar4 = (bool)(bVar4 & bVar2 == 0);
              }
              else if (bVar3 == 1) {
                bVar4 = (bool)(bVar4 & bVar2 == 1);
              }
            }
            else if (bVar3 == 4) {
              bVar4 = (bool)(bVar4 & bVar2 < bVar1);
            }
            else if (bVar3 == 5) {
              bVar4 = (bool)(bVar4 & bVar2 != bVar1);
            }
            iVar9 = iVar9 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      if (bVar4) {
        if (((((*(int *)(param_1 + 0x80) == 0) || (*(int *)(param_1 + 0xb8) == 1)) ||
             (*(int *)(param_1 + 0x84) == 1)) && (*(int *)(param_1 + 0xbc) == 0)) ||
           ((*(int *)(param_1 + 0x80) == 1 && (*(int *)(param_1 + 0xbc) == 1)))) {
          *(uint *)(param_1 + 0xb4) =
               ((uint)*(ushort *)(param_1 + 0xac) + *(int *)(param_1 + 0x90)) -
               *(int *)(param_1 + 0x94);
        }
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      if (((*(int *)(param_1 + 0x84) == 1) || (*(int *)(param_1 + 0xb8) <= *(int *)(param_1 + 0xbc))
          ) || ((*(int *)(param_1 + 0x80) == 0 && (0 < *(int *)(param_1 + 0xbc))))) {
        iVar5 = (uint)*(ushort *)(param_1 + 0x98) -
                ((uint)*(ushort *)(param_1 + 0xac) - *(int *)(param_1 + 0xb4));
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        *(short *)(param_1 + 0xb0) = (short)iVar5;
        iVar5 = (*(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x94)) -
                (uint)*(ushort *)(param_1 + 0xac);
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        *(short *)(param_1 + 0xb2) = (short)iVar5;
        *(undefined1 *)(param_1 + 0xa9) = 0;
      }
    }
  }
  if ((*(char *)(param_1 + 0xa9) == '\0') && (*(short *)(param_1 + 0xb2) == 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

