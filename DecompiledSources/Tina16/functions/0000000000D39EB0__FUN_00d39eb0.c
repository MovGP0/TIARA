/* Ghidra address: 00d39eb0 */
/* Ghidra symbol: FUN_00d39eb0 */


void FUN_00d39eb0(longlong param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_30;
  
  iVar3 = *param_2;
  if (iVar3 < 0x114) {
    if (iVar3 == 0x113) {
      if ((*(char *)(param_1 + 0x60) != '\0') && (*(longlong *)(param_2 + 2) == 0x93)) {
        DAT_01ecd0f4 = '\0';
        thunk_FUN_0413e052(*(undefined8 *)(param_1 + 8),0x100,0x28,0);
        thunk_FUN_040dee27(*(undefined8 *)(param_1 + 8),0x93);
      }
    }
    else if (iVar3 < 0x84) {
      if (iVar3 == 0x83) {
LAB_00d3a361:
        if ((*(char *)(param_1 + 0x29) != '\0') && (*(char *)(param_1 + 0x2a) != '\0')) {
          cVar1 = FUN_00788df0(param_1);
          if (cVar1 != '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 0x40) = 0;
          return;
        }
        uVar7 = FUN_00788400(param_1,param_2);
        *(undefined8 *)(param_2 + 6) = uVar7;
        return;
      }
      if (iVar3 == 0xf) {
        if (*(char *)(param_1 + 0x29) == '\0') {
          uVar7 = FUN_00788400(param_1,param_2);
          *(undefined8 *)(param_2 + 6) = uVar7;
          return;
        }
        FUN_00788d60(param_1,0);
        uVar7 = FUN_00788400(param_1,param_2);
        *(undefined8 *)(param_2 + 6) = uVar7;
        FUN_00788d60(param_1,1);
        return;
      }
      if (iVar3 == 0x14) {
        if ((*(char *)(param_1 + 0x29) != '\0') && (*(char *)(param_1 + 0x2a) != '\0')) {
          thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x317,*(undefined8 *)(param_2 + 2),
                             *(undefined8 *)(param_2 + 4));
          param_2[6] = 1;
          param_2[7] = 0;
          return;
        }
        uVar7 = FUN_00788400(param_1,param_2);
        *(undefined8 *)(param_2 + 6) = uVar7;
        return;
      }
      if (iVar3 == 0x47) {
        if ((*(char *)(param_1 + 0x29) == '\0') || (*(char *)(param_1 + 0x2a) == '\0')) {
          uVar7 = FUN_00788400(param_1,param_2);
          *(undefined8 *)(param_2 + 6) = uVar7;
          return;
        }
        if (DAT_01ecd0f4 != '\0') {
          thunk_FUN_04176ccd(*(undefined8 *)(param_1 + 8),0x93,10,0);
        }
      }
    }
    else {
      if (iVar3 == 0x85) goto LAB_00d3a361;
      if (iVar3 == 0x100) {
        if ((*(char *)(param_1 + 0x29) == '\0') || (*(char *)(param_1 + 0x2a) == '\0')) {
          uVar7 = FUN_00788400(param_1,param_2);
          *(undefined8 *)(param_2 + 6) = uVar7;
          return;
        }
        uVar7 = FUN_00d39420(param_1,*(undefined8 *)(param_1 + 8));
        *(undefined8 *)(param_1 + 0x80) = uVar7;
        if (*(int *)(param_1 + 100) != -1) {
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 100);
        }
        lVar6 = *(longlong *)(param_2 + 2);
        if (((lVar6 == 0xd) || (lVar6 == 0x25)) || (lVar6 == 0x27)) {
          if (*(int *)(param_1 + 100) != -1) {
            uVar7 = FUN_00d394b0(param_1,*(int *)(param_1 + 100));
            cVar1 = FUN_00d3ad30(uVar7);
            if (cVar1 != '\0') {
              DAT_01ecd0f4 = '\x01';
            }
          }
          uVar7 = FUN_00788400(param_1,param_2);
          *(undefined8 *)(param_2 + 6) = uVar7;
          return;
        }
        if (param_2[2] == 0x26) {
          if (*(int *)(param_1 + 0x68) < 1) {
            uVar5 = thunk_FUN_041b99e8(*(undefined8 *)(param_1 + 0x80));
            *(undefined4 *)(param_1 + 0x68) = uVar5;
          }
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
          cVar1 = FUN_00d39e50(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x68));
          if ((cVar1 != '\0') && (iVar3 = *(int *)(param_1 + 0x68), -1 < iVar3)) {
            do {
              cVar1 = FUN_00d39e50(*(undefined8 *)(param_1 + 0x80),iVar3);
              if (cVar1 == '\0') {
                *(int *)(param_1 + 0x68) = iVar3;
                break;
              }
              iVar3 = iVar3 + -1;
            } while (iVar3 != -1);
          }
          thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x1e5,(longlong)*(int *)(param_1 + 0x68),0
                            );
          param_2[6] = 0;
          param_2[7] = 0;
          return;
        }
        if (param_2[2] != 0x28) {
          uVar7 = FUN_00788400(param_1,param_2);
          *(undefined8 *)(param_2 + 6) = uVar7;
          return;
        }
        iVar3 = thunk_FUN_041b99e8(*(undefined8 *)(param_1 + 0x80));
        if (iVar3 + -1 <= *(int *)(param_1 + 0x68)) {
          *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
        }
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        cVar1 = FUN_00d39e50(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x68));
        if (cVar1 != '\0') {
          iVar4 = thunk_FUN_041b99e8(*(undefined8 *)(param_1 + 0x80));
          iVar3 = *(int *)(param_1 + 0x68);
          if (iVar3 <= iVar4 + -1) {
            iVar4 = ((iVar4 + -1) - iVar3) + 1;
            do {
              cVar1 = FUN_00d39e50(*(undefined8 *)(param_1 + 0x80),iVar3);
              if (cVar1 == '\0') {
                *(int *)(param_1 + 0x68) = iVar3;
                break;
              }
              iVar3 = iVar3 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        if (*(int *)(param_1 + 0x78) == 1) {
          *(undefined4 *)(param_1 + 100) = 0xffffffff;
        }
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x1e5,(longlong)*(int *)(param_1 + 0x68),0);
        param_2[6] = 0;
        param_2[7] = 0;
        return;
      }
    }
  }
  else if (iVar3 < 0x318) {
    if ((iVar3 == 0x317) || (iVar3 == 0x1e5)) {
      if ((*param_2 == 0x1e5) &&
         ((((sVar2 = thunk_FUN_040bd713(1), sVar2 < 0 && (*(char *)(param_1 + 0x60) != '\0')) &&
           (*(char *)(param_1 + 0x61) == '\0')) && (*(char *)(param_1 + 0x62) != '\0')))) {
        thunk_FUN_03cc0d62(&local_30);
        lVar6 = thunk_FUN_04129e10(local_30);
        if (lVar6 == *(longlong *)(param_1 + 8)) {
          *(undefined1 *)(param_1 + 0x61) = 1;
          thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x1ed,0,0);
        }
      }
      if ((*(char *)(param_1 + 0x29) == '\0') || (*(char *)(param_1 + 0x2a) == '\0')) {
        uVar7 = FUN_00788400(param_1,param_2);
        *(undefined8 *)(param_2 + 6) = uVar7;
        return;
      }
    }
    else if (iVar3 == 0x1ed) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      FUN_00788d60(param_1,0);
      uVar7 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 6) = uVar7;
      FUN_00788d60(param_1,1);
    }
    else if (iVar3 == 0x1ee) {
      *(undefined1 *)(param_1 + 0x62) = 1;
    }
  }
  else {
    if (iVar3 == 0x318) {
      if ((*(char *)(param_1 + 0x29) != '\0') && (*(char *)(param_1 + 0x2a) != '\0')) {
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x317,*(undefined8 *)(param_2 + 2),
                           *(undefined8 *)(param_2 + 4));
        return;
      }
      uVar7 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 6) = uVar7;
      return;
    }
    if (iVar3 == 0x4c9) {
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
  }
  FUN_007899d0(param_1,param_2);
  return;
}

