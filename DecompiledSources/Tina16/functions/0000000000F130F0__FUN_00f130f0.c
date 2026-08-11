/* Ghidra address: 00f130f0 */
/* Ghidra symbol: FUN_00f130f0 */


void FUN_00f130f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 local_48 [32];
  
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))
            ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x60));
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_005fd4e0(param_2[0xf],0xff);
  }
  FUN_005fd6d0(param_2[0xf],1);
  iVar1 = FUN_0040c770((double)(*(int *)(param_1 + 0x98) *
                               (*(int *)(*(longlong *)(param_1 + 0x78) + 0x1c) -
                               *(int *)(*(longlong *)(param_1 + 0x78) + 0x14))) /
                       (double)*(int *)PTR_DAT_02003b30);
  lVar5 = FUN_00f13040(param_1);
  if (lVar5 != 0) {
    lVar5 = FUN_00f13040(param_1);
    uVar9 = *(int *)(param_1 + 200) - *(int *)(lVar5 + 200);
    uVar10 = (int)uVar9 >> 0x1f;
    if (((int)((uVar9 ^ uVar10) - uVar10) < 4) &&
       (lVar5 = FUN_00f13040(param_1), uVar9 = *(int *)(param_1 + 0xcc) - *(int *)(lVar5 + 0xcc),
       uVar10 = (int)uVar9 >> 0x1f, (int)((uVar9 ^ uVar10) - uVar10) < 4)) {
      lVar5 = FUN_00f13040(param_1);
      lVar6 = FUN_00f13040(param_1);
      FUN_00c44460(local_48,*(undefined8 *)(lVar5 + 0xb8),*(undefined8 *)(lVar6 + 0xc0));
      dVar12 = (double)FUN_00c446d0(local_48);
      FUN_00c44460(local_48,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
      dVar13 = (double)FUN_00c446d0(local_48);
      dVar12 = dVar12 - dVar13;
      if ((((dVar12 <= 0.0) ||
           ((3.141592653589793 <= dVar12 || (*(char *)(param_1 + 0x9c) != '\0')))) &&
          ((dVar12 <= 0.0 ||
           ((dVar12 <= 3.141592653589793 || (*(char *)(param_1 + 0x9c) != '\x01')))))) &&
         (((0.0 <= dVar12 ||
           ((dVar12 <= -3.141592653589793 || (*(char *)(param_1 + 0x9c) != '\x01')))) &&
          ((0.0 <= dVar12 || ((-3.141592653589793 <= dVar12 || (*(char *)(param_1 + 0x9c) != '\0')))
           ))))) {
        iVar4 = *(int *)(param_1 + 200);
        iVar11 = *(int *)(param_1 + 0xcc);
        lVar5 = FUN_00f13040(param_1);
        lVar6 = FUN_00f13040(param_1);
        (**(code **)(*param_2 + 0x60))
                  (param_2,iVar4 - iVar1,iVar11 - iVar1,iVar4 + iVar1,iVar11 + iVar1,
                   *(int *)(param_1 + 200) + *(int *)(lVar5 + 0xd0),
                   *(int *)(param_1 + 0xcc) + *(int *)(lVar6 + 0xd4),
                   *(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0),
                   *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
        return;
      }
      iVar4 = *(int *)(param_1 + 200);
      iVar11 = *(int *)(param_1 + 0xcc);
      lVar5 = FUN_00f13040(param_1);
      lVar6 = FUN_00f13040(param_1);
      (**(code **)(*param_2 + 0x60))
                (param_2,iVar4 - iVar1,iVar11 - iVar1,iVar4 + iVar1,iVar11 + iVar1,
                 iVar4 + *(int *)(param_1 + 0xd0),iVar11 + *(int *)(param_1 + 0xd4),
                 *(int *)(param_1 + 200) + *(int *)(lVar5 + 0xd0),
                 *(int *)(param_1 + 0xcc) + *(int *)(lVar6 + 0xd4));
      return;
    }
    lVar5 = FUN_00f13040(param_1);
    uVar9 = (*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0)) - *(int *)(lVar5 + 200);
    uVar10 = (int)uVar9 >> 0x1f;
    if (((int)((uVar9 ^ uVar10) - uVar10) < 4) &&
       (lVar5 = FUN_00f13040(param_1),
       uVar9 = (*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4)) - *(int *)(lVar5 + 0xcc),
       uVar10 = (int)uVar9 >> 0x1f, (int)((uVar9 ^ uVar10) - uVar10) < 4)) {
      lVar5 = FUN_00f13040(param_1);
      lVar6 = FUN_00f13040(param_1);
      FUN_00c44460(local_48,*(undefined8 *)(lVar5 + 0xb8),*(undefined8 *)(lVar6 + 0xc0));
      dVar12 = (double)FUN_00c446d0(local_48);
      FUN_00c44460(local_48,*(ulonglong *)(param_1 + 0xb8) ^ 0x8000000000000000,
                   *(ulonglong *)(param_1 + 0xc0) ^ 0x8000000000000000);
      dVar13 = (double)FUN_00c446d0(local_48);
      dVar12 = dVar12 - dVar13;
      if (((((dVar12 <= 0.0) ||
            ((3.141592653589793 <= dVar12 || (*(char *)(param_1 + 0x9c) != '\0')))) &&
           ((dVar12 <= 0.0 ||
            ((dVar12 <= 3.141592653589793 || (*(char *)(param_1 + 0x9c) != '\x01')))))) &&
          ((0.0 <= dVar12 ||
           ((dVar12 <= -3.141592653589793 || (*(char *)(param_1 + 0x9c) != '\x01')))))) &&
         ((0.0 <= dVar12 || ((-3.141592653589793 <= dVar12 || (*(char *)(param_1 + 0x9c) != '\0'))))
         )) {
        iVar4 = *(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0);
        iVar11 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4);
        lVar5 = FUN_00f13040(param_1);
        lVar6 = FUN_00f13040(param_1);
        lVar7 = FUN_00f13040(param_1);
        lVar8 = FUN_00f13040(param_1);
        (**(code **)(*param_2 + 0x60))
                  (param_2,iVar4 - iVar1,iVar11 - iVar1,iVar4 + iVar1,iVar11 + iVar1,
                   *(int *)(lVar5 + 200) + *(int *)(lVar6 + 0xd0),
                   *(int *)(lVar7 + 0xcc) + *(int *)(lVar8 + 0xd4),*(undefined4 *)(param_1 + 200),
                   *(undefined4 *)(param_1 + 0xcc));
        return;
      }
      iVar4 = *(int *)(param_1 + 200);
      iVar2 = iVar4 + *(int *)(param_1 + 0xd0);
      iVar11 = *(int *)(param_1 + 0xcc);
      iVar3 = iVar11 + *(int *)(param_1 + 0xd4);
      lVar5 = FUN_00f13040(param_1);
      lVar6 = FUN_00f13040(param_1);
      lVar7 = FUN_00f13040(param_1);
      lVar8 = FUN_00f13040(param_1);
      (**(code **)(*param_2 + 0x60))
                (param_2,iVar2 - iVar1,iVar3 - iVar1,iVar2 + iVar1,iVar3 + iVar1,iVar4,iVar11,
                 *(int *)(lVar5 + 200) + *(int *)(lVar6 + 0xd0),
                 *(int *)(lVar7 + 0xcc) + *(int *)(lVar8 + 0xd4));
      return;
    }
    lVar5 = FUN_00f13040(param_1);
    lVar6 = FUN_00f13040(param_1);
    uVar9 = (*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0)) -
            (*(int *)(lVar5 + 200) + *(int *)(lVar6 + 0xd0));
    uVar10 = (int)uVar9 >> 0x1f;
    if ((int)((uVar9 ^ uVar10) - uVar10) < 4) {
      lVar5 = FUN_00f13040(param_1);
      lVar6 = FUN_00f13040(param_1);
      uVar9 = (*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4)) -
              (*(int *)(lVar5 + 0xcc) + *(int *)(lVar6 + 0xd4));
      uVar10 = (int)uVar9 >> 0x1f;
      if ((int)((uVar9 ^ uVar10) - uVar10) < 4) {
        lVar5 = FUN_00f13040(param_1);
        lVar6 = FUN_00f13040(param_1);
        FUN_00c44460(local_48,*(ulonglong *)(lVar5 + 0xb8) ^ 0x8000000000000000,
                     *(ulonglong *)(lVar6 + 0xc0) ^ 0x8000000000000000);
        dVar12 = (double)FUN_00c446d0(local_48);
        FUN_00c44460(local_48,*(ulonglong *)(param_1 + 0xb8) ^ 0x8000000000000000,
                     *(ulonglong *)(param_1 + 0xc0) ^ 0x8000000000000000);
        dVar13 = (double)FUN_00c446d0(local_48);
        dVar12 = dVar12 - dVar13;
        if (((((dVar12 <= 0.0) || (3.141592653589793 <= dVar12)) ||
             (*(char *)(param_1 + 0x9c) != '\0')) &&
            (((dVar12 <= 0.0 || (dVar12 <= 3.141592653589793)) ||
             (*(char *)(param_1 + 0x9c) != '\x01')))) &&
           ((((0.0 <= dVar12 || (dVar12 <= -3.141592653589793)) ||
             (*(char *)(param_1 + 0x9c) != '\x01')) &&
            (((0.0 <= dVar12 || (-3.141592653589793 <= dVar12)) ||
             (*(char *)(param_1 + 0x9c) != '\0')))))) {
          iVar4 = *(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0);
          iVar11 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4);
          lVar5 = FUN_00f13040(param_1);
          lVar6 = FUN_00f13040(param_1);
          (**(code **)(*param_2 + 0x60))
                    (param_2,iVar4 - iVar1,iVar11 - iVar1,iVar4 + iVar1,iVar11 + iVar1,
                     *(undefined4 *)(lVar5 + 200),*(undefined4 *)(lVar6 + 0xcc),
                     *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
          return;
        }
        iVar4 = *(int *)(param_1 + 200);
        iVar2 = iVar4 + *(int *)(param_1 + 0xd0);
        iVar11 = *(int *)(param_1 + 0xcc);
        iVar3 = iVar11 + *(int *)(param_1 + 0xd4);
        lVar5 = FUN_00f13040(param_1);
        lVar6 = FUN_00f13040(param_1);
        (**(code **)(*param_2 + 0x60))
                  (param_2,iVar2 - iVar1,iVar3 - iVar1,iVar2 + iVar1,iVar3 + iVar1,iVar4,iVar11,
                   *(undefined4 *)(lVar5 + 200),*(undefined4 *)(lVar6 + 0xcc));
        return;
      }
    }
    lVar5 = FUN_00f13040(param_1);
    lVar6 = FUN_00f13040(param_1);
    uVar9 = *(int *)(param_1 + 200) - (*(int *)(lVar5 + 200) + *(int *)(lVar6 + 0xd0));
    uVar10 = (int)uVar9 >> 0x1f;
    if ((int)((uVar9 ^ uVar10) - uVar10) < 4) {
      lVar5 = FUN_00f13040(param_1);
      lVar6 = FUN_00f13040(param_1);
      uVar9 = *(int *)(param_1 + 0xcc) - (*(int *)(lVar5 + 0xcc) + *(int *)(lVar6 + 0xd4));
      uVar10 = (int)uVar9 >> 0x1f;
      if ((int)((uVar9 ^ uVar10) - uVar10) < 4) {
        lVar5 = FUN_00f13040(param_1);
        lVar6 = FUN_00f13040(param_1);
        FUN_00c44460(local_48,*(ulonglong *)(lVar5 + 0xb8) ^ 0x8000000000000000,
                     *(ulonglong *)(lVar6 + 0xc0) ^ 0x8000000000000000);
        dVar12 = (double)FUN_00c446d0(local_48);
        FUN_00c44460(local_48,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
        dVar13 = (double)FUN_00c446d0(local_48);
        dVar12 = dVar12 - dVar13;
        if (((((0.0 < dVar12) && (dVar12 < 3.141592653589793)) &&
             (*(char *)(param_1 + 0x9c) == '\0')) ||
            ((((0.0 < dVar12 && (3.141592653589793 < dVar12)) &&
              (*(char *)(param_1 + 0x9c) == '\x01')) ||
             (((dVar12 < 0.0 && (-3.141592653589793 < dVar12)) &&
              (*(char *)(param_1 + 0x9c) == '\x01')))))) ||
           (((dVar12 < 0.0 && (dVar12 < -3.141592653589793)) && (*(char *)(param_1 + 0x9c) == '\0'))
           )) {
          iVar4 = *(int *)(param_1 + 200);
          iVar11 = *(int *)(param_1 + 0xcc);
          lVar5 = FUN_00f13040(param_1);
          lVar6 = FUN_00f13040(param_1);
          (**(code **)(*param_2 + 0x60))
                    (param_2,iVar4 - iVar1,iVar11 - iVar1,iVar4 + iVar1,iVar11 + iVar1,
                     iVar4 + *(int *)(param_1 + 0xd0),iVar11 + *(int *)(param_1 + 0xd4),
                     *(undefined4 *)(lVar5 + 200),*(undefined4 *)(lVar6 + 0xcc));
        }
        else {
          iVar4 = *(int *)(param_1 + 200);
          iVar11 = *(int *)(param_1 + 0xcc);
          lVar5 = FUN_00f13040(param_1);
          lVar6 = FUN_00f13040(param_1);
          (**(code **)(*param_2 + 0x60))
                    (param_2,iVar4 - iVar1,iVar11 - iVar1,iVar4 + iVar1,iVar11 + iVar1,
                     *(undefined4 *)(lVar5 + 200),*(undefined4 *)(lVar6 + 0xcc),
                     *(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0),
                     *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
        }
      }
    }
  }
  return;
}

