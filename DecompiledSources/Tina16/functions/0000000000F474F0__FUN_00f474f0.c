/* Ghidra address: 00f474f0 */
/* Ghidra symbol: FUN_00f474f0 */


void FUN_00f474f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int in_stack_00000050;
  int in_stack_00000058;
  int in_stack_00000060;
  int in_stack_00000068;
  int in_stack_00000070;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_7c;
  longlong *local_78;
  int local_6c;
  byte local_66;
  byte local_65;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  
  in_stack_00000058 = in_stack_00000058 + 0xc;
  in_stack_00000068 = in_stack_00000068 + 0xc;
  plVar9 = (longlong *)0x0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar7 = *(int *)(lVar1 + 0x10);
  iVar11 = 0;
  local_88 = param_1;
  local_7c = param_2;
  local_64 = param_4;
  local_3c = param_3;
  if (-1 < iVar7 + -1) {
    do {
      uVar8 = FUN_00b94e60(lVar1,iVar11);
      cVar4 = FUN_00f47480(auStack_a8,uVar8);
      if (cVar4 != '\0') {
        plVar9 = (longlong *)FUN_00b94e60(lVar1,iVar11);
        break;
      }
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_78 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    iVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9);
    if (local_40 < iVar7) {
      (**(code **)(*local_78 + 0x1f0))(local_78,local_40,&local_44,&local_48);
    }
    else {
      local_78 = (longlong *)0x0;
    }
    local_6c = 0;
    local_60 = 0;
    local_5c = 0;
    iVar11 = 0;
    iVar7 = (**(code **)(*local_78 + 0x1c8))();
    iVar12 = 0;
    if (-1 < iVar7 + -1) {
      do {
        (**(code **)(*local_78 + 0x1f0))(local_78,iVar12,&local_54,&local_58);
        if (local_54 < local_44) {
          iVar11 = iVar11 + 1;
        }
        if (local_44 < local_54) {
          local_60 = local_60 + 1;
        }
        if (local_58 < local_48) {
          local_6c = local_6c + 1;
        }
        if (local_48 < local_58) {
          local_5c = local_5c + 1;
        }
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    sVar5 = (**(code **)(*local_78 + 0xf8))(local_78);
    if ((((((sVar5 == 0x2d) || (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x15))
          || (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3f6)) ||
         ((sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3f7 ||
          (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3b)))) ||
        (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3ef)) ||
       (((sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x76 ||
         (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x69)) ||
        ((uVar6 = (**(code **)(*local_78 + 0xf8))(local_78), 39999 < uVar6 &&
         (uVar6 = (**(code **)(*local_78 + 0xf8))(local_78), uVar6 < 0x9c49)))))) {
      sVar5 = (**(code **)(*local_78 + 0xf8))(local_78);
      if ((((sVar5 == 0x2d) || (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3ef))
          || (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x76)) ||
         ((sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x69 ||
          ((uVar6 = (**(code **)(*local_78 + 0xf8))(local_78), 39999 < uVar6 &&
           (uVar6 = (**(code **)(*local_78 + 0xf8))(local_78), uVar6 < 0x9c49)))))) {
        iVar7 = 1;
      }
      else {
        sVar5 = (**(code **)(*local_78 + 0xf8))(local_78);
        if (sVar5 == 0x15) {
          if (local_40 == 2) {
            iVar7 = 3;
          }
          else {
            iVar7 = 2;
          }
        }
        else {
          sVar5 = (**(code **)(*local_78 + 0xf8))(local_78);
          if (sVar5 == 0x3b) {
            if (local_40 == 0) {
              iVar7 = 2;
            }
            else {
              iVar7 = 1;
            }
          }
          else {
            iVar7 = 2;
          }
        }
      }
      local_65 = 0;
      if (iVar7 <= iVar11) {
        local_65 = 4;
      }
      if (iVar7 <= local_60) {
        local_65 = local_65 | 1;
      }
      if (iVar7 <= local_6c) {
        local_65 = local_65 | 2;
      }
      if (iVar7 <= local_5c) {
        local_65 = local_65 | 8;
      }
    }
    else {
      if ((iVar11 == 3) || (iVar11 == 2)) {
        local_65 = 4;
      }
      else if ((local_60 == 3) || (local_60 == 2)) {
        local_65 = 1;
      }
      else if ((local_6c == 3) || (local_6c == 2)) {
        local_65 = 2;
      }
      else if ((local_5c == 3) || (local_5c == 2)) {
        local_65 = 8;
      }
      else {
        local_65 = 0;
      }
      if ((((((local_65 == 0) || (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3eb)
             ) || (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3ea)) ||
           (((sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3f1 ||
             (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3ed)) ||
            ((sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3f9 ||
             ((sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3d ||
              (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x3e)))))))) ||
          (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x65)) ||
         (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 0x66)) {
        if (iVar11 == 1) {
          local_65 = local_65 | 4;
        }
        if (local_60 == 1) {
          local_65 = local_65 | 1;
        }
        if (local_6c == 1) {
          local_65 = local_65 | 2;
        }
        if ((local_5c == 1) || (sVar5 = (**(code **)(*local_78 + 0xf8))(local_78), sVar5 == 2)) {
          local_65 = local_65 | 8;
        }
      }
      sVar5 = (**(code **)(*local_78 + 0xf8))(local_78);
      if (sVar5 == 0x67) {
        if (local_40 == 2) {
          local_65 = local_65 | 2;
        }
        else if (local_40 == 1) {
          local_65 = local_65 | 1;
        }
        else if (local_40 == 4) {
          local_65 = local_65 | 1;
        }
      }
    }
  }
  local_3c = local_64;
  plVar9 = (longlong *)0x0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar7 = *(int *)(lVar1 + 0x10);
  iVar11 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar8 = FUN_00b94e60(lVar1,iVar11);
      cVar4 = FUN_00f47480(auStack_a8,uVar8);
      if (cVar4 != '\0') {
        plVar9 = (longlong *)FUN_00b94e60(lVar1,iVar11);
        break;
      }
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (plVar9 != (longlong *)0x0) {
    iVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9);
    if (local_40 < iVar7) {
      (**(code **)(*plVar9 + 0x1f0))(plVar9,local_40,&local_4c,&local_50);
    }
    else {
      plVar9 = (longlong *)0x0;
    }
    local_6c = 0;
    local_60 = 0;
    local_5c = 0;
    iVar11 = 0;
    iVar7 = (**(code **)(*plVar9 + 0x1c8))();
    iVar12 = 0;
    if (-1 < iVar7 + -1) {
      do {
        (**(code **)(*plVar9 + 0x1f0))(plVar9,iVar12,&local_54,&local_58);
        if (local_54 < local_4c) {
          iVar11 = iVar11 + 1;
        }
        if (local_4c < local_54) {
          local_60 = local_60 + 1;
        }
        if (local_58 < local_50) {
          local_6c = local_6c + 1;
        }
        if (local_50 < local_58) {
          local_5c = local_5c + 1;
        }
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if ((((sVar5 == 0x2d) || (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x15)) ||
        ((sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3f6 ||
         ((((sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3f7 ||
            (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3b)) ||
           (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3ef)) ||
          ((sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x76 ||
           (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x69)))))))) ||
       ((uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9), 39999 < uVar6 &&
        (uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9), uVar6 < 0x9c49)))) {
      sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if ((((sVar5 == 0x2d) || (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3ef)) ||
          (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x76)) ||
         ((sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x69 ||
          ((uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9), 39999 < uVar6 &&
           (uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9), uVar6 < 0x9c49)))))) {
        iVar7 = 1;
      }
      else {
        sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (sVar5 == 0x15) {
          if (local_40 == 2) {
            iVar7 = 3;
          }
          else {
            iVar7 = 2;
          }
        }
        else {
          sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (sVar5 == 0x3b) {
            if (local_40 == 0) {
              iVar7 = 2;
            }
            else {
              iVar7 = 1;
            }
          }
          else {
            iVar7 = 2;
          }
        }
      }
      local_66 = 0;
      if (iVar7 <= iVar11) {
        local_66 = 4;
      }
      if (iVar7 <= local_60) {
        local_66 = local_66 | 1;
      }
      if (iVar7 <= local_6c) {
        local_66 = local_66 | 2;
      }
      if (iVar7 <= local_5c) {
        local_66 = local_66 | 8;
      }
    }
    else {
      if ((iVar11 == 3) || (iVar11 == 2)) {
        local_66 = 4;
      }
      else if ((local_60 == 3) || (local_60 == 2)) {
        local_66 = 1;
      }
      else if ((local_6c == 3) || (local_6c == 2)) {
        local_66 = 2;
      }
      else if ((local_5c == 3) || (local_5c == 2)) {
        local_66 = 8;
      }
      else {
        local_66 = 0;
      }
      if (((((local_66 == 0) || (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3eb)) ||
           (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3ea)) ||
          (((sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3f1 ||
            (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3ed)) ||
           ((sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3f9 ||
            ((sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3d ||
             (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x3e)))))))) ||
         ((sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x65 ||
          (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 0x66)))) {
        if (iVar11 == 1) {
          local_66 = local_66 | 4;
        }
        if (local_60 == 1) {
          local_66 = local_66 | 1;
        }
        if (local_6c == 1) {
          local_66 = local_66 | 2;
        }
        if ((local_5c == 1) || (sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9), sVar5 == 2)) {
          local_66 = local_66 | 8;
        }
      }
      sVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (sVar5 == 0x67) {
        if (local_40 == 2) {
          local_66 = local_66 | 2;
        }
        else if (local_40 == 1) {
          local_66 = local_66 | 1;
        }
        else if (local_40 == 4) {
          local_66 = local_66 | 1;
        }
      }
    }
  }
  iVar11 = local_44;
  iVar7 = local_48;
  bVar3 = local_65;
  if (((local_44 != local_4c) || (local_48 != local_50)) &&
     ((local_78 != (longlong *)0x0 && (plVar9 != (longlong *)0x0)))) {
    bVar13 = in_stack_00000070 == 1;
    bVar2 = bVar13;
    if (local_4c < local_44) {
      bVar2 = !bVar13;
    }
    if (local_48 < local_50) {
      bVar2 = !bVar2;
    }
    plVar10 = plVar9;
    if (local_44 == local_4c) {
      if (((bVar13 == local_50 < local_48) && ((local_65 & 1) != 0)) ||
         ((bVar2 = false, bVar13 == local_48 < local_50 && ((local_65 & 4) != 0)))) {
        local_58 = local_48;
        local_48 = local_50;
        local_50 = iVar7;
        local_65 = local_66;
        local_66 = bVar3;
        bVar13 = !bVar13;
        plVar10 = local_78;
        local_78 = plVar9;
        bVar2 = false;
      }
    }
    bVar3 = local_65;
    plVar9 = plVar10;
    if ((local_48 == local_50) &&
       (((bVar2 = true, bVar13 == local_44 < local_4c && ((local_65 & 8) != 0)) ||
        ((bVar13 == local_4c < local_44 && ((local_65 & 2) != 0)))))) {
      local_54 = local_44;
      local_44 = local_4c;
      local_4c = iVar11;
      local_65 = local_66;
      local_66 = bVar3;
      bVar13 = bVar13 == false;
      plVar9 = local_78;
      local_78 = plVar10;
    }
    uVar8 = FUN_00f48820(&DAT_00f44e18,1,local_7c,*(undefined8 *)(local_88 + 8));
    *(undefined8 *)(local_88 + 8) = uVar8;
    FUN_01b1cd00(&stack0x00000050,&stack0x00000058);
    FUN_01b1cd00(&stack0x00000060,&stack0x00000068);
    lVar1 = *(longlong *)(local_88 + 8);
    *(int *)(lVar1 + 0xc) = local_44;
    *(int *)(lVar1 + 0x10) = local_48;
    *(int *)(lVar1 + 0x2c) = local_4c;
    *(int *)(lVar1 + 0x30) = local_50;
    if (bVar2) {
      *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(lVar1 + 0xc);
      if ((*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x10)) ||
         ((*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x30) &&
          (bVar13 == *(int *)(lVar1 + 0xc) < *(int *)(lVar1 + 0x2c))))) {
        if ((*(int *)(lVar1 + 0x10) + 0xf < in_stack_00000068) &&
           ((((short)local_78[10] < 1 ||
             (*(int *)(lVar1 + 0x10) + (int)(short)local_78[10] < in_stack_00000068)) &&
            ((local_65 & 8) == 0)))) {
          *(int *)(lVar1 + 0x18) = in_stack_00000068;
        }
        else if (((*(int *)(lVar1 + 0xc) < *(int *)(lVar1 + 0x2c)) && ((local_65 & 1) != 0)) ||
                ((*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0xc) && ((local_65 & 4) != 0)))) {
          if (*(int *)(lVar1 + 0x10) + -0x30 < *(int *)(lVar1 + 0x30)) {
            if (*(int *)(lVar1 + 0x10) + -0x20 < *(int *)(lVar1 + 0x30)) {
              if (*(int *)(lVar1 + 0x10) + -0x10 < *(int *)(lVar1 + 0x30)) {
                *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x10) + 0x10;
              }
              else {
                *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x10) + -8;
              }
            }
            else {
              *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x10) + -0x10;
            }
          }
          else {
            *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x10) + -0x18;
          }
        }
        else {
          *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar1 + 0x10);
        }
      }
      else if ((((in_stack_00000058 < *(int *)(lVar1 + 0x10) + -0xf) &&
                ((-1 < (short)local_78[10] ||
                 (in_stack_00000058 < *(int *)(lVar1 + 0x10) + (int)(short)local_78[10])))) &&
               ((local_65 & 2) == 0)) && ((local_48 != local_50 || ((local_66 & 2) == 0)))) {
        *(int *)(lVar1 + 0x18) = in_stack_00000058;
      }
      else if (((*(int *)(lVar1 + 0xc) < *(int *)(lVar1 + 0x2c)) && ((local_65 & 1) != 0)) ||
              ((*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0xc) && ((local_65 & 4) != 0)))) {
        if (*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x10) + 0x30) {
          if (*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x10) + 0x20) {
            if (*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x10) + 0x10) {
              *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x10) + -0x10;
            }
            else {
              *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x10) + 8;
            }
          }
          else {
            *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x10) + 0x10;
          }
        }
        else {
          *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x10) + 0x18;
        }
      }
      else {
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar1 + 0x10);
      }
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar1 + 0x18);
      if (*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0xc)) {
        if ((in_stack_00000050 < *(int *)(lVar1 + 0x2c) + -0xf) && ((local_66 & 4) == 0)) {
          *(int *)(lVar1 + 0x1c) = in_stack_00000050;
        }
        else if (((*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x30)) && ((local_66 & 2) != 0)) ||
                ((*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x20) && ((local_66 & 8) != 0)))) {
          if (*(int *)(lVar1 + 0xc) < *(int *)(lVar1 + 0x2c) + 0x30) {
            if (*(int *)(lVar1 + 0xc) < *(int *)(lVar1 + 0x2c) + 0x20) {
              if (*(int *)(lVar1 + 0xc) < *(int *)(lVar1 + 0x2c) + 0x10) {
                *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x2c) + -0x10;
              }
              else {
                *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x2c) + 8;
              }
            }
            else {
              *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x2c) + 0x10;
            }
          }
          else {
            *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x2c) + 0x18;
          }
        }
        else {
          *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(lVar1 + 0x2c);
        }
      }
      else if ((*(int *)(lVar1 + 0x2c) + 0xf < in_stack_00000060) && ((local_66 & 1) == 0)) {
        *(int *)(lVar1 + 0x1c) = in_stack_00000060;
      }
      else if (((*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x30)) && ((local_66 & 2) != 0)) ||
              ((*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x20) && ((local_66 & 8) != 0)))) {
        if (*(int *)(lVar1 + 0x2c) + -0x30 < *(int *)(lVar1 + 0xc)) {
          if (*(int *)(lVar1 + 0x2c) + -0x20 < *(int *)(lVar1 + 0xc)) {
            if (*(int *)(lVar1 + 0x2c) + -0x10 < *(int *)(lVar1 + 0xc)) {
              *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x2c) + 0x10;
            }
            else {
              *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x2c) + -8;
            }
          }
          else {
            *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x2c) + -0x10;
          }
        }
        else {
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x2c) + -0x18;
        }
      }
      else {
        *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(lVar1 + 0x2c);
      }
      *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(lVar1 + 0x1c);
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar1 + 0x30);
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar1 + 0x10);
      if ((*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0xc)) ||
         ((*(int *)(lVar1 + 0xc) == *(int *)(lVar1 + 0x2c) &&
          (bVar13 == *(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x10))))) {
        if ((*(int *)(lVar1 + 0xc) + 0xf < in_stack_00000060) && ((local_65 & 1) == 0)) {
          *(int *)(lVar1 + 0x14) = in_stack_00000060;
        }
        else if (((*(int *)(lVar1 + 0x10) < *(int *)(lVar1 + 0x30)) && ((local_65 & 8) != 0)) ||
                ((*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x10) && ((local_65 & 2) != 0)))) {
          if (*(int *)(lVar1 + 0xc) + -0x30 < *(int *)(lVar1 + 0x2c)) {
            if (*(int *)(lVar1 + 0xc) + -0x20 < *(int *)(lVar1 + 0x2c)) {
              if (*(int *)(lVar1 + 0xc) + -0x10 < *(int *)(lVar1 + 0x2c)) {
                *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0xc) + 0x10;
              }
              else {
                *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0xc) + -8;
              }
            }
            else {
              *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0xc) + -0x10;
            }
          }
          else {
            *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0xc) + -0x18;
          }
        }
        else {
          *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(lVar1 + 0xc);
        }
      }
      else if ((in_stack_00000050 < *(int *)(lVar1 + 0xc) + -0xf) && ((local_65 & 4) == 0)) {
        *(int *)(lVar1 + 0x14) = in_stack_00000050;
      }
      else if (((*(int *)(lVar1 + 0x10) < *(int *)(lVar1 + 0x30)) && ((local_65 & 8) != 0)) ||
              ((*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x10) && ((local_65 & 2) != 0)))) {
        if (*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0xc) + 0x30) {
          if (*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0xc) + 0x20) {
            if (*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0xc) + 0x10) {
              *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0xc) + -0x10;
            }
            else {
              *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0xc) + 8;
            }
          }
          else {
            *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0xc) + 0x10;
          }
        }
        else {
          *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0xc) + 0x18;
        }
      }
      else {
        *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(lVar1 + 0xc);
      }
      *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(lVar1 + 0x14);
      if (*(int *)(lVar1 + 0x30) < *(int *)(lVar1 + 0x10)) {
        if (((in_stack_00000058 < *(int *)(lVar1 + 0x30) + -0xf) &&
            ((-1 < (short)plVar9[10] ||
             (in_stack_00000058 < *(int *)(lVar1 + 0x30) + (int)(short)plVar9[10])))) &&
           ((local_66 & 2) == 0)) {
          *(int *)(lVar1 + 0x20) = in_stack_00000058;
        }
        else if (((*(int *)(lVar1 + 0x1c) < *(int *)(lVar1 + 0x2c)) && ((local_66 & 4) != 0)) ||
                ((*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0x1c) && ((local_66 & 1) != 0)))) {
          if (*(int *)(lVar1 + 0x10) < *(int *)(lVar1 + 0x30) + 0x30) {
            if (*(int *)(lVar1 + 0x10) < *(int *)(lVar1 + 0x30) + 0x20) {
              if (*(int *)(lVar1 + 0x10) < *(int *)(lVar1 + 0x30) + 0x10) {
                *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x30) + -0x10;
              }
              else {
                *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x30) + 8;
              }
            }
            else {
              *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x30) + 0x10;
            }
          }
          else {
            *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x30) + 0x18;
          }
        }
        else {
          *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar1 + 0x30);
        }
      }
      else if ((*(int *)(lVar1 + 0x30) + 0xf < in_stack_00000068) &&
              ((((short)plVar9[10] < 1 ||
                (*(int *)(lVar1 + 0x30) + (int)(short)plVar9[10] < in_stack_00000068)) &&
               ((local_66 & 8) == 0)))) {
        *(int *)(lVar1 + 0x20) = in_stack_00000068;
      }
      else if (((*(int *)(lVar1 + 0x1c) < *(int *)(lVar1 + 0x2c)) && ((local_66 & 4) != 0)) ||
              ((*(int *)(lVar1 + 0x2c) < *(int *)(lVar1 + 0x1c) && ((local_66 & 1) != 0)))) {
        if (*(int *)(lVar1 + 0x30) + -0x30 < *(int *)(lVar1 + 0x10)) {
          if (*(int *)(lVar1 + 0x30) + -0x20 < *(int *)(lVar1 + 0x10)) {
            if (*(int *)(lVar1 + 0x30) + -0x10 < *(int *)(lVar1 + 0x10)) {
              *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x30) + 0x10;
            }
            else {
              *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x30) + -8;
            }
          }
          else {
            *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x30) + -0x10;
          }
        }
        else {
          *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x30) + -0x18;
        }
      }
      else {
        *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar1 + 0x30);
      }
      *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(lVar1 + 0x2c);
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar1 + 0x20);
    }
    FUN_00f494d0(local_88,local_7c);
  }
  return;
}

