/* Ghidra address: 00bc8300 */
/* Ghidra symbol: FUN_00bc8300 */


int FUN_00bc8300(undefined8 *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  ushort *puVar8;
  int iVar9;
  int local_64;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_64 = 0;
  puVar8 = (ushort *)param_1[0x27];
  puVar2 = param_2 + 3;
  iVar9 = (int)((param_1[0x29] - (longlong)puVar8) / 2);
  if (param_3 < iVar9) {
    iVar9 = param_3;
  }
  uVar4 = *param_2;
  if (uVar4 < 0x11) {
    if (uVar4 == 0x10) {
      for (; local_64 < iVar9; local_64 = local_64 + 1) {
        FUN_00416780(&local_50,*puVar8);
        iVar6 = FUN_004170c0(local_50,param_1[0x35],1);
        if (iVar6 < 1) break;
        puVar8 = puVar8 + 1;
      }
    }
    else if (uVar4 < 0xd) {
      if (uVar4 == 0xc) {
        for (; ((local_64 < iVar9 && (0x2f < *puVar8)) && (*puVar8 < 0x3a)); puVar8 = puVar8 + 1) {
          local_64 = local_64 + 1;
        }
      }
      else if (uVar4 == 3) {
        puVar8 = puVar8 + iVar9;
        local_64 = iVar9;
      }
      else if (uVar4 == 4) {
        while ((local_64 < iVar9 && (lVar7 = FUN_00bc3cd0(puVar2,*puVar8), lVar7 != 0))) {
          local_64 = local_64 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else if (uVar4 == 5) {
        while ((local_64 < iVar9 && (lVar7 = FUN_00bc3cd0(puVar2,*puVar8), lVar7 == 0))) {
          local_64 = local_64 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        if (uVar4 != 8) goto LAB_00bc8921;
        for (; (local_64 < iVar9 && (*puVar2 == *puVar8)); puVar8 = puVar8 + 1) {
          local_64 = local_64 + 1;
        }
      }
    }
    else if (uVar4 == 0xd) {
      for (; (local_64 < iVar9 && ((*puVar8 < 0x30 || (0x39 < *puVar8)))); puVar8 = puVar8 + 1) {
        local_64 = local_64 + 1;
      }
    }
    else if (uVar4 == 0xe) {
      for (; local_64 < iVar9; local_64 = local_64 + 1) {
        FUN_00416780(local_40,*puVar8);
        iVar6 = FUN_004170c0(local_40[0],param_1[0x36],1);
        if (iVar6 < 1) break;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      if (uVar4 != 0xf) goto LAB_00bc8921;
      for (; local_64 < iVar9; local_64 = local_64 + 1) {
        FUN_00416780(&local_48,*puVar8);
        iVar6 = FUN_004170c0(local_48,param_1[0x36],1);
        if (0 < iVar6) break;
        puVar8 = puVar8 + 1;
      }
    }
  }
  else if (uVar4 < 0x1a) {
    if (uVar4 == 0x19) {
      for (; (local_64 < iVar9 &&
             (((uVar4 = *puVar8, uVar4 == *puVar2 || (uVar4 == param_2[4])) || (uVar4 == param_2[5])
              ))); puVar8 = puVar8 + 1) {
        local_64 = local_64 + 1;
      }
    }
    else if (uVar4 == 0x11) {
      for (; local_64 < iVar9; local_64 = local_64 + 1) {
        FUN_00416780(&local_58,*puVar8);
        iVar6 = FUN_004170c0(local_58,param_1[0x35],1);
        if (0 < iVar6) break;
        puVar8 = puVar8 + 1;
      }
    }
    else if (uVar4 == 0x14) {
      for (; (local_64 < iVar9 && (*puVar2 == *puVar8)); puVar8 = puVar8 + 1) {
        local_64 = local_64 + 1;
      }
      if (local_64 < iVar9) {
        uVar4 = (*(code *)param_1[0x37])(param_1[0x38],*puVar2);
        for (; (local_64 < iVar9 && ((*puVar2 == *puVar8 || (uVar4 == *puVar8))));
            puVar8 = puVar8 + 1) {
          local_64 = local_64 + 1;
        }
      }
    }
    else if (uVar4 == 0x15) {
      while ((local_64 < iVar9 && (lVar7 = FUN_00bc82a0(param_1,puVar2,*puVar8), lVar7 != 0))) {
        local_64 = local_64 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      if (uVar4 != 0x16) goto LAB_00bc8921;
      while ((local_64 < iVar9 && (lVar7 = FUN_00bc82a0(param_1,puVar2,*puVar8), lVar7 == 0))) {
        local_64 = local_64 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  else if (uVar4 == 0x1a) {
    for (; (((local_64 < iVar9 && (*puVar8 != *puVar2)) && (*puVar8 != param_2[4])) &&
           (*puVar8 != param_2[5])); puVar8 = puVar8 + 1) {
      local_64 = local_64 + 1;
    }
  }
  else if (uVar4 == 0x1c) {
    puVar1 = (ushort *)param_1[(ulonglong)*puVar2 + 1];
    if ((puVar1 == (ushort *)0x0) ||
       (puVar2 = (ushort *)param_1[(ulonglong)*puVar2 + 0x10], puVar3 = puVar1,
       puVar2 == (ushort *)0x0)) goto LAB_00bc8946;
    do {
      for (; puVar3 < puVar2; puVar3 = puVar3 + 1) {
        if (((ushort *)param_1[0x29] <= puVar8) || (*puVar8 != *puVar3)) goto LAB_00bc8946;
        puVar8 = puVar8 + 1;
      }
      local_64 = local_64 + 1;
      param_1[0x27] = puVar8;
      puVar3 = puVar1;
    } while (local_64 < param_3);
  }
  else {
    if (uVar4 != 0x1d) {
LAB_00bc8921:
      local_64 = 0;
      (**(code **)*param_1)(param_1,1000);
      goto LAB_00bc8946;
    }
    puVar1 = (ushort *)param_1[(ulonglong)*puVar2 + 1];
    if ((puVar1 == (ushort *)0x0) ||
       (puVar2 = (ushort *)param_1[(ulonglong)*puVar2 + 0x10], puVar3 = puVar1,
       puVar2 == (ushort *)0x0)) goto LAB_00bc8946;
    do {
      for (; puVar3 < puVar2; puVar3 = puVar3 + 1) {
        if ((ushort *)param_1[0x29] <= puVar8) goto LAB_00bc8946;
        uVar4 = *puVar8;
        if ((uVar4 != *puVar3) &&
           (uVar5 = (*(code *)param_1[0x37])(param_1[0x38],*puVar3), uVar4 != uVar5))
        goto LAB_00bc8946;
        puVar8 = puVar8 + 1;
      }
      local_64 = local_64 + 1;
      param_1[0x27] = puVar8;
      puVar3 = puVar1;
    } while (local_64 < param_3);
  }
  param_1[0x27] = puVar8;
LAB_00bc8946:
  FUN_00414560(&local_58,4);
  return local_64;
}

