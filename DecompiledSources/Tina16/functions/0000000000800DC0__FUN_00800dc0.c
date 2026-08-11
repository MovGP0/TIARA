/* Ghidra address: 00800dc0 */
/* Ghidra symbol: FUN_00800dc0 */


void FUN_00800dc0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  FUN_007fad50(param_1,param_2);
  FUN_00806950(param_1,param_2);
  if ((*(longlong *)(param_1 + 0x78) == 0) && (*(longlong *)(param_1 + 0x358) == 0)) {
    lVar4 = 0;
    lVar9 = 0;
    if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
      if (((*(byte *)(param_1 + 0x6a8) & 8) == 0) || (*(char *)(param_1 + 0x640) != '\0')) {
        if (*(char *)(param_1 + 0x4d6) == '\0') {
          cVar2 = *(char *)(param_1 + 0x640);
        }
        else {
          cVar2 = '\0';
        }
      }
      else {
        cVar2 = '\x01';
      }
    }
    else {
      cVar2 = '\x02';
    }
    lVar10 = *(longlong *)(param_1 + 0x660);
    if ((lVar10 == 0) && (*(longlong *)(param_1 + 0x668) == 0)) {
      if (cVar2 == '\0') {
        if (*(char *)(DAT_02012668 + 0x193) == '\0') {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(DAT_02012668 + 0x2d0);
          uVar5 = *(undefined8 *)(param_2 + 0x20);
          uVar6 = thunk_FUN_04118143(uVar5,0xffffffec);
          thunk_FUN_03c9d277(uVar5,0xffffffec,uVar6 & 0xffffffffffffff7f);
          lVar10 = lVar9;
        }
        else if ((*(char *)(param_1 + 0x680) == '\0') &&
                (param_1 != *(longlong *)(DAT_02012668 + 0xa8))) {
          if ((*(longlong *)(DAT_02012668 + 0xa8) == 0) ||
             (cVar2 = FUN_0065be20(*(longlong *)(DAT_02012668 + 0xa8)), cVar2 == '\0')) {
            *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(DAT_02012668 + 0x2d0);
            lVar10 = lVar9;
          }
          else {
            uVar5 = FUN_0080f4a0(DAT_02012668);
            *(undefined8 *)(param_2 + 0x20) = uVar5;
            lVar4 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
            lVar10 = lVar9;
            if (*(longlong *)(param_2 + 0x20) == lVar4) {
              uVar5 = FUN_008003d0(*(undefined8 *)(DAT_02012668 + 0xa8));
              iVar3 = FUN_004aeba0(uVar5,param_1);
              if (iVar3 < 0) {
                uVar5 = FUN_008003d0(*(undefined8 *)(DAT_02012668 + 0xa8));
                FUN_004ae7e0(uVar5,param_1);
              }
              FUN_004d26c0(param_1,*(undefined8 *)(DAT_02012668 + 0xa8));
            }
          }
        }
        else {
          *(undefined8 *)(param_2 + 0x20) = 0;
          lVar10 = lVar9;
        }
      }
      else if (cVar2 == '\x01') {
        if (*(char *)(param_1 + 0x680) == '\0') {
          uVar5 = FUN_0080f430(DAT_02012668);
          *(undefined8 *)(param_2 + 0x20) = uVar5;
        }
        else {
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
        if ((*(longlong *)(param_2 + 0x20) != 0) &&
           (((iVar3 = FUN_007f9220(*(undefined8 *)(param_2 + 0x20)), iVar3 != 0 ||
             (iVar3 = thunk_FUN_0419e3da(*(undefined8 *)(param_2 + 0x20)), iVar3 == 0)) ||
            (iVar3 = thunk_FUN_03986dbd(*(undefined8 *)(param_2 + 0x20)), iVar3 == 0)))) {
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
        if ((*(longlong *)(param_2 + 0x20) != 0) &&
           (uVar6 = thunk_FUN_04118143(*(longlong *)(param_2 + 0x20),0xffffffec),
           (uVar6 & 0x80) == 0x80)) {
          uVar5 = FUN_00800d10(*(undefined8 *)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = uVar5;
        }
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (((lVar4 == 0) || (*(longlong *)(DAT_02012670 + 0xd8) == 0)) ||
           (*(longlong *)(*(longlong *)(DAT_02012670 + 0xd8) + 0x468) != lVar4)) {
          lVar10 = lVar9;
          if (lVar4 == 0) {
            if (*(char *)(DAT_02012668 + 0x193) == '\0') {
              *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(DAT_02012668 + 0x2d0);
              uVar5 = *(undefined8 *)(param_2 + 0x20);
              uVar6 = thunk_FUN_04118143(uVar5,0xffffffec);
              thunk_FUN_03c9d277(uVar5,0xffffffec,uVar6 & 0xffffffffffffff7f);
            }
            else if ((*(char *)(param_1 + 0x680) == '\0') &&
                    (param_1 != *(longlong *)(DAT_02012668 + 0xa8))) {
              if ((*(longlong *)(DAT_02012668 + 0xa8) == 0) ||
                 (cVar2 = FUN_0065be20(*(longlong *)(DAT_02012668 + 0xa8)), cVar2 == '\0')) {
                *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(DAT_02012668 + 0x2d0);
              }
              else {
                uVar5 = FUN_0080f4a0(DAT_02012668);
                *(undefined8 *)(param_2 + 0x20) = uVar5;
                lVar4 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
                if (*(longlong *)(param_2 + 0x20) == lVar4) {
                  uVar5 = FUN_008003d0(*(undefined8 *)(DAT_02012668 + 0xa8));
                  iVar3 = FUN_004aeba0(uVar5,param_1);
                  if (iVar3 < 0) {
                    uVar5 = FUN_008003d0(*(undefined8 *)(DAT_02012668 + 0xa8));
                    FUN_004ae7e0(uVar5,param_1);
                  }
                  FUN_004d26c0(param_1,*(undefined8 *)(DAT_02012668 + 0xa8));
                }
              }
            }
            else {
              *(undefined8 *)(param_2 + 0x20) = 0;
            }
          }
        }
        else {
          lVar10 = *(longlong *)(DAT_02012670 + 0xd8);
        }
      }
      else {
        lVar10 = lVar4;
        if (cVar2 == '\x02') {
          if ((*(longlong *)(param_1 + 0x648) == 0) || ((*(ushort *)(param_1 + 0x34) & 0x10) != 0))
          {
            uVar5 = FUN_0080f4a0(DAT_02012668);
            *(undefined8 *)(param_2 + 0x20) = uVar5;
          }
          else {
            uVar5 = FUN_0065b870(*(longlong *)(param_1 + 0x648));
            *(undefined8 *)(param_2 + 0x20) = uVar5;
            lVar4 = *(longlong *)(param_1 + 0x648);
          }
          lVar9 = *(longlong *)(param_2 + 0x20);
          if (((lVar9 == 0) || (*(longlong *)(DAT_02012668 + 0xa8) == 0)) ||
             (*(longlong *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x468) != lVar9)) {
            lVar10 = lVar4;
            if ((lVar9 == 0) &&
               (*(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(DAT_02012668 + 0x2d0),
               *(char *)(DAT_02012668 + 0x193) == '\0')) {
              uVar5 = *(undefined8 *)(param_2 + 0x20);
              uVar6 = thunk_FUN_04118143(uVar5,0xffffffec);
              thunk_FUN_03c9d277(uVar5,0xffffffec,uVar6 & 0xffffffffffffff7f);
            }
          }
          else {
            lVar10 = *(longlong *)(DAT_02012668 + 0xa8);
          }
        }
      }
    }
    else if (*(longlong *)(param_1 + 0x668) == 0) {
      uVar5 = FUN_0065b870();
      *(undefined8 *)(param_2 + 0x20) = uVar5;
    }
    else {
      *(longlong *)(param_2 + 0x20) = *(longlong *)(param_1 + 0x668);
      lVar10 = lVar9;
    }
    if (lVar10 == 0) {
      if (*(longlong *)(param_2 + 0x20) != *(longlong *)(DAT_02012668 + 0x2d0)) {
        *(longlong *)(param_1 + 0x668) = *(longlong *)(param_2 + 0x20);
      }
    }
    else {
      uVar5 = FUN_008003d0(lVar10);
      iVar3 = FUN_004aeba0(uVar5,param_1);
      if (iVar3 < 0) {
        uVar5 = FUN_008003d0(lVar10);
        FUN_004ae7e0(uVar5,param_1);
      }
      FUN_004d26c0(param_1,lVar10);
      *(longlong *)(param_1 + 0x660) = lVar10;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xbffcffff;
  }
  *(undefined4 *)(param_2 + 0x30) = 8;
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || (*(longlong *)(param_1 + 0x78) != 0)) {
    if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || (*(longlong *)(param_1 + 0x78) == 0)) {
      if (*(byte *)(param_1 + 0x4d7) < 8) {
        bVar11 = ((int)CONCAT71((uint7)(byte)(*(ushort *)(param_1 + 0x34) >> 8),1) <<
                  (*(byte *)(param_1 + 0x4d7) & 0x1f) & 0x16U) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        *(undefined4 *)(param_2 + 0x10) = 0x80000000;
        *(undefined4 *)(param_2 + 0x14) = 0x80000000;
      }
    }
    pcVar7 = (code *)FUN_00411550(param_1,0xffa5);
    uVar6 = param_2 + 8;
    (*pcVar7)(param_1,uVar6,param_2 + 0xc,param_2 + 0x30);
    bVar1 = *(byte *)(param_1 + 0x4d1);
    if (*(char *)(param_1 + 0x4d6) == '\x01') {
      if (bVar1 < 8) {
        uVar8 = (int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar1 & 0x1f);
        uVar6 = (ulonglong)uVar8;
        bVar11 = (uVar8 & 9) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        bVar1 = 2;
      }
    }
    if (bVar1 < 8) {
      uVar8 = (int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar1 & 0x1f);
      uVar6 = (ulonglong)uVar8;
      bVar11 = (uVar8 & 0x24) != 0;
    }
    else {
      bVar11 = false;
    }
    if ((bVar11) &&
       (((*(ushort *)(param_1 + 0x34) & 0x10) == 0 || (*(longlong *)(param_1 + 0x78) == 0)))) {
      if (*(byte *)(param_1 + 0x4d7) < 8) {
        bVar11 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (*(byte *)(param_1 + 0x4d7) & 0x1f) & 10U)
                 != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        *(undefined4 *)(param_2 + 0x18) = 0x80000000;
        *(undefined4 *)(param_2 + 0x1c) = 0x80000000;
      }
    }
    if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 7U) != 0) {
      if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
        if (*(char *)(param_1 + 0x4d2) == '\x01') {
          if ((*(char *)(DAT_02012668 + 0x193) == '\0') || (*(char *)(param_1 + 0x680) == '\0')) {
            *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20000000;
          }
          else {
            *(undefined1 *)(DAT_02012668 + 0x1a8) = 1;
          }
        }
        else if (*(char *)(param_1 + 0x4d2) == '\x02') {
          *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000000;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x4d2) = 0;
    }
    if ((*(ushort *)(param_1 + 0x34) & 0x200) != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff3fffff;
    }
    if (*(char *)(param_1 + 0x4d6) == '\x01') {
      *(undefined **)(param_2 + 0x38) = &DAT_004292f0;
    }
    pcVar7 = (code *)FUN_00411550(param_1,0xffa6);
    (*pcVar7)(param_1,param_2 + 8,param_2 + 0xc);
    if ((*(char *)(DAT_02012668 + 0x193) != '\0') &&
       ((*(char *)(param_1 + 0x680) != '\0' ||
        (((((*(ushort *)(param_1 + 0x34) & 0x10) != 0 || ((*(uint *)(param_1 + 0xa4) & 0x2000) != 0)
           ) && (*(char *)(param_1 + 0x4d6) != '\x01')) &&
         (param_1 == *(longlong *)(DAT_02012668 + 0xa8))))))) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x40000;
    }
    cVar2 = FUN_007fda00(param_1);
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x4d2) == '\x02')) {
      FUN_004238d0(&local_38,0,0,*(undefined4 *)(param_1 + 0x538),*(undefined4 *)(param_1 + 0x53c));
      iVar3 = thunk_FUN_04176e9f(&local_38,*(undefined4 *)(param_2 + 8),
                                 -(uint)(*(longlong *)(param_1 + 0x500) != 0),
                                 *(undefined4 *)(param_2 + 0xc));
      if (iVar3 != 0) {
        *(int *)(param_2 + 0x18) = local_30 - local_38;
        *(int *)(param_2 + 0x1c) = local_2c - local_34;
      }
    }
  }
  else {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0xcf0000;
  }
  return;
}

