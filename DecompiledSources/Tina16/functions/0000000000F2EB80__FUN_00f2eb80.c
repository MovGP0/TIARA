/* Ghidra address: 00f2eb80 */
/* Ghidra symbol: FUN_00f2eb80 */


int FUN_00f2eb80(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_res18;
  longlong local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_res18 = param_3 + 1;
    uVar4 = (ulonglong)param_3;
    if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar4)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined1 *)(param_2 + uVar4) = 0x22;
    FUN_00414b50();
    iVar7 = 0;
    uVar4 = 0;
    if (local_10 != 0) {
      uVar4 = (ulonglong)*(uint *)(local_10 + -4);
    }
    if (0 < (int)uVar4) {
      do {
        lVar5 = (longlong)(iVar7 + 1);
        if ((local_10 == 0) || ((ulonglong)*(uint *)(local_10 + -4) <= lVar5 - 1U)) {
          lVar5 = FUN_00410a90();
        }
        uVar2 = *(ushort *)(local_10 + -2 + lVar5 * 2);
        if (uVar2 < 0xe) {
          if (uVar2 == 0xd) {
            iVar8 = local_res18 + 1;
            uVar6 = (ulonglong)local_res18;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x5c;
            local_res18 = local_res18 + 2;
            uVar6 = (ulonglong)iVar8;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x72;
          }
          else if (uVar2 == 8) {
            iVar8 = local_res18 + 1;
            uVar6 = (ulonglong)local_res18;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x5c;
            local_res18 = local_res18 + 2;
            uVar6 = (ulonglong)iVar8;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x62;
          }
          else if (uVar2 == 9) {
            iVar8 = local_res18 + 1;
            uVar6 = (ulonglong)local_res18;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x5c;
            local_res18 = local_res18 + 2;
            uVar6 = (ulonglong)iVar8;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x74;
          }
          else if (uVar2 == 10) {
            iVar8 = local_res18 + 1;
            uVar6 = (ulonglong)local_res18;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x5c;
            local_res18 = local_res18 + 2;
            uVar6 = (ulonglong)iVar8;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x6e;
          }
          else {
            if (uVar2 != 0xc) goto LAB_00f2f024;
            uVar6 = (ulonglong)local_res18;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x5c;
            uVar6 = (ulonglong)(local_res18 + 1);
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar6 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x66;
            local_res18 = local_res18 + 2;
          }
        }
        else if (uVar2 == 0x22) {
          iVar8 = local_res18 + 1;
          uVar6 = (ulonglong)local_res18;
          if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
            uVar6 = FUN_00410a90();
          }
          *(undefined1 *)(param_2 + uVar6) = 0x5c;
          local_res18 = local_res18 + 2;
          uVar6 = (ulonglong)iVar8;
          if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
            uVar6 = FUN_00410a90();
          }
          *(undefined1 *)(param_2 + uVar6) = 0x22;
        }
        else if (uVar2 == 0x2f) {
          iVar8 = local_res18 + 1;
          uVar6 = (ulonglong)local_res18;
          if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
            uVar6 = FUN_00410a90();
          }
          *(undefined1 *)(param_2 + uVar6) = 0x5c;
          local_res18 = local_res18 + 2;
          uVar6 = (ulonglong)iVar8;
          if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
            uVar6 = FUN_00410a90();
          }
          *(undefined1 *)(param_2 + uVar6) = 0x2f;
        }
        else if (uVar2 == 0x5c) {
          iVar8 = local_res18 + 1;
          uVar6 = (ulonglong)local_res18;
          if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
            uVar6 = FUN_00410a90();
          }
          *(undefined1 *)(param_2 + uVar6) = 0x5c;
          local_res18 = local_res18 + 2;
          uVar6 = (ulonglong)iVar8;
          if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
            uVar6 = FUN_00410a90();
          }
          *(undefined1 *)(param_2 + uVar6) = 0x5c;
        }
        else {
LAB_00f2f024:
          if ((uVar2 < 0x20) || (0x7f < uVar2)) {
            uVar6 = (ulonglong)local_res18;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar2 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x5c;
            iVar8 = local_res18 + 2;
            uVar6 = (ulonglong)(local_res18 + 1);
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar2 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = 0x75;
            uVar3 = (uint)uVar2;
            iVar9 = local_res18 + 3;
            uVar10 = (uint)(uVar2 >> 0xc);
            if (0xff < uVar10) {
              uVar3 = FUN_00410a90();
            }
            uVar6 = (ulonglong)iVar8;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar3 = FUN_00410a90();
            }
            *(undefined *)(param_2 + uVar6) =
                 PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar10 & 0xff) * 2];
            iVar8 = local_res18 + 4;
            uVar10 = (uVar3 & 0xf00) >> 8;
            if (0xff < uVar10) {
              uVar3 = FUN_00410a90();
            }
            uVar6 = (ulonglong)iVar9;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar3 = FUN_00410a90();
            }
            *(undefined *)(param_2 + uVar6) =
                 PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar10 & 0xff) * 2];
            iVar9 = local_res18 + 5;
            uVar10 = (uVar3 & 0xf0) >> 4;
            if (0xff < uVar10) {
              uVar3 = FUN_00410a90();
            }
            uVar6 = (ulonglong)iVar8;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar3 = FUN_00410a90();
            }
            *(undefined *)(param_2 + uVar6) =
                 PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar10 & 0xff) * 2];
            local_res18 = local_res18 + 6;
            uVar3 = uVar3 & 0xf;
            if (0xff < uVar3) {
              uVar3 = FUN_00410a90();
            }
            uVar6 = (ulonglong)iVar9;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar3 = FUN_00410a90();
            }
            *(undefined *)(param_2 + uVar6) =
                 PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar3 & 0xff) * 2];
          }
          else {
            iVar8 = local_res18 + 1;
            uVar1 = (undefined1)uVar2;
            if (0xff < uVar2) {
              uVar1 = FUN_00410a90();
            }
            uVar6 = (ulonglong)local_res18;
            if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar6)) {
              uVar1 = FUN_00410a90();
            }
            *(undefined1 *)(param_2 + uVar6) = uVar1;
            local_res18 = iVar8;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar4);
    }
    uVar4 = (ulonglong)local_res18;
    if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar4)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined1 *)(param_2 + uVar4) = 0x22;
    local_res18 = local_res18 + 1;
  }
  else {
    uVar4 = (ulonglong)param_3;
    if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar4)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined1 *)(param_2 + uVar4) = 0x6e;
    uVar4 = (ulonglong)(param_3 + 1);
    if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar4)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined1 *)(param_2 + uVar4) = 0x75;
    uVar4 = (ulonglong)(param_3 + 2);
    if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar4)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined1 *)(param_2 + uVar4) = 0x6c;
    uVar4 = (ulonglong)(param_3 + 3);
    if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar4)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined1 *)(param_2 + uVar4) = 0x6c;
    local_res18 = param_3 + 4;
  }
  FUN_00414480(&local_10);
  return local_res18;
}

