/* Ghidra address: 00f32880 */
/* Ghidra symbol: FUN_00f32880 */


ulonglong FUN_00f32880(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined7 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  
  cVar1 = FUN_00f2e280(param_1);
  if (cVar1 == '\"') {
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    else {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    }
    if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
       (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
      lVar5 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar5 + 0x80000000U) {
        lVar5 = FUN_00410a90();
      }
      uVar8 = (ulonglong)(uint)-(int)lVar5;
    }
    else {
      lVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,0);
      (**(code **)(*param_2 + 8))(param_2,lVar5);
      *(undefined4 *)(param_1 + 0x48) = 0;
      do {
        bVar2 = FUN_00f2e280(param_1);
        if (bVar2 == 0x22) {
          if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          }
          else {
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
          }
          if (*(char *)(param_1 + 0x50) == '\0') {
            bVar10 = false;
            uVar6 = 0;
          }
          else {
            bVar10 = (undefined1 *)*param_2 == &LAB_00f233a8;
            uVar6 = (undefined7)((ulonglong)*param_2 >> 8);
          }
          if ((bVar10) && (param_2[3] == 0)) {
            uVar4 = (undefined4)CONCAT71(uVar6,1);
          }
          else {
            uVar4 = 0;
          }
          FUN_00f2e590(param_1,lVar5 + 0x10,uVar4);
          uVar8 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
          if (uVar8 + 0x80000000 < 0x100000000) {
            return uVar8;
          }
          uVar8 = FUN_00410a90();
          return uVar8;
        }
        if (bVar2 == 0x5c) {
          if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          }
          else {
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
          }
          if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
             (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
            lVar5 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
            if (0xffffffff < lVar5 + 0x80000000U) {
              lVar5 = FUN_00410a90();
            }
            return (ulonglong)(uint)-(int)lVar5;
          }
          if (*(char *)(param_1 + 0x20) == '\0') {
            bVar2 = **(byte **)(param_1 + 8);
          }
          else if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
            uVar8 = (ulonglong)*(int *)(param_1 + 0x30);
            lVar7 = *(longlong *)(param_1 + 0x28);
            if ((lVar7 == 0) || (*(ulonglong *)(lVar7 + -8) <= uVar8)) {
              uVar8 = FUN_00410a90();
            }
            bVar2 = *(byte *)(lVar7 + uVar8);
          }
          else {
            bVar2 = **(byte **)(param_1 + 8);
          }
          if (bVar2 < 0x67) {
            if (bVar2 == 0x66) {
              uVar3 = 0xc;
            }
            else if (bVar2 == 0x22) {
              uVar3 = 0x22;
            }
            else if (bVar2 == 0x2f) {
              uVar3 = 0x2f;
            }
            else if (bVar2 == 0x5c) {
              uVar3 = 0x5c;
            }
            else {
              if (bVar2 != 0x62) goto LAB_00f32bfe;
              uVar3 = 8;
            }
          }
          else if (bVar2 == 0x6e) {
            uVar3 = 10;
          }
          else if (bVar2 == 0x72) {
            uVar3 = 0xd;
          }
          else if (bVar2 == 0x74) {
            uVar3 = 9;
          }
          else {
            if (bVar2 != 0x75) {
LAB_00f32bfe:
              lVar5 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
              if (0xffffffff < lVar5 + 0x80000000U) {
                lVar5 = FUN_00410a90();
              }
              return (ulonglong)(uint)-(int)lVar5;
            }
            if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
              *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            }
            else {
              *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
            }
            cVar1 = FUN_00f2e3d0(param_1,4);
            if (cVar1 == '\0') {
              lVar5 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
              if (0xffffffff < lVar5 + 0x80000000U) {
                lVar5 = FUN_00410a90();
              }
              return (ulonglong)(uint)-(int)lVar5;
            }
            iVar9 = 0xc;
            uVar3 = 0;
            while( true ) {
              if (*(char *)(param_1 + 0x20) == '\0') {
                bVar2 = **(byte **)(param_1 + 8);
              }
              else if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
                uVar8 = (ulonglong)*(int *)(param_1 + 0x30);
                lVar7 = *(longlong *)(param_1 + 0x28);
                if ((lVar7 == 0) || (*(ulonglong *)(lVar7 + -8) <= uVar8)) {
                  uVar3 = FUN_00410a90();
                }
                bVar2 = *(byte *)(lVar7 + uVar8);
              }
              else {
                bVar2 = **(byte **)(param_1 + 8);
              }
              if (0x3f < (byte)(bVar2 - 0x30) ||
                  (1L << (bVar2 - 0x30 & 0x3f) & 0x7e0000007e03ffU) == 0) {
                lVar5 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
                if (0xffffffff < lVar5 + 0x80000000U) {
                  lVar5 = FUN_00410a90();
                }
                return (ulonglong)(uint)-(int)lVar5;
              }
              uVar3 = uVar3 | (uint)(byte)(&DAT_01efb7a8)[bVar2] << ((byte)iVar9 & 0x1f);
              iVar9 = iVar9 + -4;
              if (iVar9 < 0) break;
              if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
              else {
                *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
              }
            }
          }
        }
        else {
          uVar3 = (uint)bVar2;
        }
        FUN_00f2e400(param_1,uVar3);
        if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
        }
      } while ((*(ulonglong *)(param_1 + 8) <= *(ulonglong *)(param_1 + 0x18)) ||
              (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)));
      lVar5 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar5 + 0x80000000U) {
        lVar5 = FUN_00410a90();
      }
      uVar8 = (ulonglong)(uint)-(int)lVar5;
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
    if (0xffffffff < lVar5 + 0x80000000U) {
      lVar5 = FUN_00410a90();
    }
    uVar8 = (ulonglong)(uint)-(int)lVar5;
  }
  return uVar8;
}

