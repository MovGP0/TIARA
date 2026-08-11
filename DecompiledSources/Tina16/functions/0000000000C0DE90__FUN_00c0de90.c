/* Ghidra address: 00c0de90 */
/* Ghidra symbol: FUN_00c0de90 */


undefined8 FUN_00c0de90(longlong param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  int iVar10;
  int local_70;
  int local_6c;
  int local_60;
  int iStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_70 = *param_2;
  local_6c = param_2[1];
  (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
            (*(longlong **)(param_1 + 0x4e8),&local_48,local_6c + -1);
  iVar10 = 0;
  if (local_48 != 0) {
    iVar10 = *(int *)(local_48 + -4);
  }
  if (local_70 <= iVar10) {
    uVar7 = 0;
    psVar9 = &DAT_01e9dd7c;
    do {
      sVar1 = *psVar9;
      if (*(short *)(local_48 + -2 + (longlong)local_70 * 2) == sVar1) {
        sVar2 = (&DAT_01e9dd7c)[(int)(uVar7 ^ 1)];
        iVar10 = 1;
        if ((uVar7 & 1) == 0) goto LAB_00c0e098;
        goto joined_r0x00c0e041;
      }
      uVar7 = uVar7 + 1;
      psVar9 = psVar9 + 1;
    } while (uVar7 != 8);
  }
  goto LAB_00c0e1ef;
LAB_00c0e098:
  while( true ) {
    iVar6 = 0;
    if (local_48 != 0) {
      iVar6 = *(int *)(local_48 + -4);
    }
    while (local_70 < iVar6) {
      local_70 = local_70 + 1;
      sVar3 = *(short *)(local_48 + -2 + (longlong)local_70 * 2);
      iStack_5c = local_6c;
      local_60 = local_70;
      if ((sVar3 == sVar1) || (sVar3 == sVar2)) {
        cVar5 = FUN_00c0e230(param_1,&local_60,&local_50,&local_58);
        if (cVar5 == '\0') {
          bVar4 = false;
        }
        else {
          lVar8 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x98))
                            (*(longlong **)(param_1 + 0x538),3);
          if ((local_58 == lVar8) ||
             (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x98))
                                (*(longlong **)(param_1 + 0x538),0), local_58 == lVar8)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
        }
        if ((sVar3 != sVar1) || (bVar4)) {
          if ((sVar3 == sVar2) && ((!bVar4 && (iVar10 = iVar10 + -1, iVar10 == 0)))) {
            local_40 = CONCAT44(iStack_5c,local_60);
            goto LAB_00c0e1ef;
          }
        }
        else {
          iVar10 = iVar10 + 1;
        }
      }
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if (local_6c == iVar6) break;
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),&local_48,local_6c);
    local_70 = 0;
    local_6c = local_6c + 1;
  }
  goto LAB_00c0e1ef;
  while ((sVar3 != sVar2 || ((bVar4 || (iVar10 = iVar10 + -1, iVar10 != 0))))) {
joined_r0x00c0e041:
    do {
      if (local_70 < 2) {
        if (local_6c == 1) goto LAB_00c0e1ef;
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),&local_48,local_6c + -2);
        local_70 = 0;
        if (local_48 != 0) {
          local_70 = *(int *)(local_48 + -4);
        }
        local_70 = local_70 + 1;
        local_6c = local_6c + -1;
        goto joined_r0x00c0e041;
      }
      local_70 = local_70 + -1;
      sVar3 = *(short *)(local_48 + -2 + (longlong)local_70 * 2);
      iStack_5c = local_6c;
      local_60 = local_70;
    } while ((sVar3 != sVar1) && (sVar3 != sVar2));
    cVar5 = FUN_00c0e230(param_1,&local_60,&local_50,&local_58);
    if (cVar5 == '\0') {
      bVar4 = false;
    }
    else {
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x98))
                        (*(longlong **)(param_1 + 0x538),3);
      if ((local_58 == lVar8) ||
         (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x98))
                            (*(longlong **)(param_1 + 0x538),0), local_58 == lVar8)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    if ((sVar3 == sVar1) && (!bVar4)) {
      iVar10 = iVar10 + 1;
      goto joined_r0x00c0e041;
    }
  }
  local_40 = CONCAT44(iStack_5c,local_60);
LAB_00c0e1ef:
  FUN_00414560(&local_50,2);
  return local_40;
}

