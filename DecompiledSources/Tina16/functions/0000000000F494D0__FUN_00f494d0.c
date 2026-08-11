/* Ghidra address: 00f494d0 */
/* Ghidra symbol: FUN_00f494d0 */


ulonglong FUN_00f494d0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 in_stack_ffffffffffffff50;
  ulonglong uVar20;
  longlong local_80;
  longlong local_68;
  longlong local_60;
  int local_54;
  ulonglong local_30;
  
  lVar8 = FUN_00f48930(*(undefined8 *)(param_1 + 8),param_2);
  local_60 = FUN_00f49450(param_1,lVar8);
  local_80 = 0;
  local_68 = 0;
  lVar9 = 0;
  for (lVar14 = *(longlong *)(param_1 + 8); lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x38)) {
    if ((*(short *)(lVar14 + 8) != param_2) &&
       (((*(int *)(lVar8 + 0xc) == *(int *)(lVar14 + 0xc) &&
         (*(int *)(lVar8 + 0x10) == *(int *)(lVar14 + 0x10))) ||
        ((*(int *)(lVar8 + 0xc) == *(int *)(lVar14 + 0x2c) &&
         (*(int *)(lVar8 + 0x10) == *(int *)(lVar14 + 0x30))))))) {
      local_80 = FUN_00f48820(&DAT_00f44e18,1,(longlong)*(short *)(lVar14 + 8),local_80);
      *(undefined8 *)(local_80 + 0xc) = *(undefined8 *)(lVar14 + 0xc);
      *(undefined8 *)(local_80 + 0x14) = *(undefined8 *)(lVar14 + 0x14);
      *(undefined8 *)(local_80 + 0x1c) = *(undefined8 *)(lVar14 + 0x1c);
      *(undefined8 *)(local_80 + 0x24) = *(undefined8 *)(lVar14 + 0x24);
      *(undefined8 *)(local_80 + 0x2c) = *(undefined8 *)(lVar14 + 0x2c);
      if (lVar9 == 0) {
        lVar9 = local_80;
      }
    }
  }
  for (lVar14 = *(longlong *)(param_1 + 8); lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x38)) {
    if ((*(short *)(lVar14 + 8) != param_2) &&
       (((*(int *)(lVar8 + 0x2c) == *(int *)(lVar14 + 0xc) &&
         (*(int *)(lVar8 + 0x30) == *(int *)(lVar14 + 0x10))) ||
        ((*(int *)(lVar8 + 0x2c) == *(int *)(lVar14 + 0x2c) &&
         (*(int *)(lVar8 + 0x30) == *(int *)(lVar14 + 0x30))))))) {
      local_68 = FUN_00f48820(&DAT_00f44e18,1,(longlong)*(short *)(lVar14 + 8),local_68);
      *(undefined8 *)(local_68 + 0xc) = *(undefined8 *)(lVar14 + 0xc);
      *(undefined8 *)(local_68 + 0x14) = *(undefined8 *)(lVar14 + 0x14);
      *(undefined8 *)(local_68 + 0x1c) = *(undefined8 *)(lVar14 + 0x1c);
      *(undefined8 *)(local_68 + 0x24) = *(undefined8 *)(lVar14 + 0x24);
      *(undefined8 *)(local_68 + 0x2c) = *(undefined8 *)(lVar14 + 0x2c);
    }
  }
  lVar14 = local_68;
  if (lVar9 != 0) {
    *(longlong *)(lVar9 + 0x38) = local_68;
    lVar14 = local_80;
  }
  local_30 = 0;
  uVar20 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff50 >> 8),1);
  lVar18 = local_60;
  DAT_0202ecf8 = FUN_00f46a40(&DAT_00f45fb8,1,
                              *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),1,local_60,
                              uVar20,lVar14,1,&local_30);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x38) = 0;
  }
  local_54 = 0;
  lVar14 = local_80;
  do {
    uVar19 = local_30;
    uVar13 = 0;
    iVar17 = 0;
    iVar1 = *(int *)(lVar8 + 0xc + (longlong)local_54 * 8);
    iVar2 = *(int *)(lVar8 + 0x10 + (longlong)local_54 * 8);
    if (local_54 == 4) {
      lVar18 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),iVar2);
      FUN_00f48d70(local_60,local_60,0,iVar1,lVar18);
    }
    for (; uVar19 != 0; uVar19 = *(ulonglong *)(uVar19 + 0x18)) {
      lVar18 = lVar14;
      uVar20 = uVar19;
      iVar6 = FUN_00f49b20(param_1,local_60,iVar1,iVar2,lVar14,uVar19);
      if (iVar17 < iVar6) {
        uVar13 = uVar19;
        iVar17 = iVar6;
      }
    }
    if (uVar13 != 0) {
      iVar17 = *(int *)(uVar13 + 8);
      iVar6 = *(int *)(uVar13 + 0xc);
      lVar9 = FUN_00f49100(param_1,(longlong)*(short *)(*(longlong *)(uVar13 + 0x10) + 8),iVar1,
                           iVar2);
      for (lVar14 = lVar9; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x20)) {
        iVar3 = *(int *)(lVar14 + 0x10);
        if ((iVar1 == iVar3) && (iVar2 == *(int *)(lVar14 + 0x14))) {
          iVar3 = *(int *)(lVar14 + 0x18);
          iVar4 = *(int *)(lVar14 + 0x1c);
        }
        else {
          iVar4 = *(int *)(lVar14 + 0x14);
        }
        if ((((iVar1 == iVar3) && (iVar1 == iVar17)) &&
            (uVar12 = iVar2 - iVar6 >> 0x1f, uVar15 = iVar4 - iVar6 >> 0x1f,
            uVar16 = iVar2 - iVar4 >> 0x1f,
            ((iVar2 - iVar6 ^ uVar12) - uVar12) + ((iVar4 - iVar6 ^ uVar15) - uVar15) ==
            (iVar2 - iVar4 ^ uVar16) - uVar16)) ||
           (((iVar2 == iVar4 && (iVar2 == iVar6)) &&
            (uVar12 = iVar1 - iVar17 >> 0x1f, uVar15 = iVar3 - iVar17 >> 0x1f,
            uVar16 = iVar1 - iVar3 >> 0x1f,
            ((iVar1 - iVar17 ^ uVar12) - uVar12) + ((iVar3 - iVar17 ^ uVar15) - uVar15) ==
            (iVar1 - iVar3 ^ uVar16) - uVar16)))) {
          if ((iVar17 != iVar3) || (iVar6 != iVar4)) {
            if ((iVar1 == *(int *)(lVar14 + 0x10)) && (iVar2 == *(int *)(lVar14 + 0x14))) {
              *(int *)(lVar14 + 0x18) = iVar17;
              *(int *)(lVar14 + 0x1c) = iVar6;
            }
            else {
              *(int *)(lVar14 + 0x10) = iVar17;
              *(int *)(lVar14 + 0x14) = iVar6;
            }
          }
          FUN_00410f20(*(undefined8 *)(lVar14 + 0x20));
          *(undefined8 *)(lVar14 + 0x20) = 0;
        }
        iVar1 = iVar3;
        iVar2 = iVar4;
      }
      uVar7 = *(undefined4 *)(lVar8 + 0xc + (longlong)local_54 * 8);
      uVar5 = *(undefined4 *)(lVar8 + 0x10 + (longlong)local_54 * 8);
      lVar18 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),uVar7);
      uVar20 = CONCAT44((int)(uVar20 >> 0x20),uVar5);
      local_60 = FUN_00f49cf0(param_1,local_60,uVar7,uVar5,lVar18,uVar20,iVar17,iVar6,lVar9);
    }
    local_54 = local_54 + 4;
    lVar14 = local_68;
  } while (local_54 < 5);
  uVar19 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),*(undefined4 *)(lVar8 + 0x10));
  FUN_00f48d70(local_60,local_60,0,*(undefined4 *)(lVar8 + 0xc),uVar19);
  uVar10 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  uVar7 = FUN_00b92120(*(undefined4 *)(local_60 + 0x10),*(undefined4 *)(local_60 + 0x14));
  uVar11 = FUN_00b95a80(uVar7);
  FUN_004ae7e0(uVar10,uVar11);
  for (lVar14 = local_60; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x20)) {
    uVar7 = FUN_00b92120(*(undefined4 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 0x1c));
    uVar11 = FUN_00b95a80(uVar7);
    FUN_004ae7e0(uVar10,uVar11);
  }
  FUN_01992db0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),uVar10,1,param_2,
               uVar19 & 0xffffffffffffff00,uVar20 & 0xffffffffffffff00);
  FUN_00410f20(uVar10);
  FUN_00410f20(local_30);
  FUN_00410f20(local_80);
  FUN_00410f20(local_68);
  FUN_00410f20(DAT_0202ecf8);
  FUN_00410f20(local_60);
  return CONCAT71((int7)((ulonglong)uVar10 >> 8),1) & 0xffffffff;
}

