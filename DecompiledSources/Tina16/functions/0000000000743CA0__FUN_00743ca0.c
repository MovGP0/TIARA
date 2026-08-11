/* Ghidra address: 00743ca0 */
/* Ghidra symbol: FUN_00743ca0 */


void FUN_00743ca0(longlong *param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  iVar3 = FUN_00654c00(param_1);
  if (iVar3 < 1) goto LAB_007441bc;
  local_64 = 0;
  local_60 = 0;
  (**(code **)(*param_1 + 0x1a8))(param_1,param_3);
  if (*(char *)((longlong)param_1 + 0xae) != '\0') {
    iVar3 = *param_3;
    iVar2 = param_3[1];
    FUN_00423010(&local_58,iVar3,iVar2,
                 iVar3 + ((int)param_1[0x5f] - ((int)param_1[0x13] - (param_3[2] - iVar3))),
                 iVar2 + (*(int *)((longlong)param_1 + 0x2fc) -
                         (*(int *)((longlong)param_1 + 0x9c) - (param_3[3] - iVar2))));
    *(undefined8 *)param_3 = local_58;
    *(undefined8 *)(param_3 + 2) = uStack_50;
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x4b9);
  if (bVar1 < 5) {
    if ((bVar1 == 4) || (bVar1 == 0)) {
      local_30 = *(undefined8 *)param_3;
    }
    else if (bVar1 == 1) {
LAB_00743de7:
      local_40 = param_3[2];
      iStack_3c = param_3[1];
      local_30 = CONCAT44(iStack_3c,local_40);
    }
    else {
      if (bVar1 == 2) goto LAB_00743e05;
      if (bVar1 == 3) goto LAB_00743e22;
    }
  }
  else if (bVar1 == 5) {
LAB_00743e05:
    iStack_44 = param_3[3];
    local_48 = *param_3;
    local_30 = CONCAT44(iStack_44,local_48);
  }
  else {
    if (bVar1 == 6) goto LAB_00743de7;
    if (bVar1 == 7) {
LAB_00743e22:
      local_30 = *(undefined8 *)(param_3 + 2);
    }
  }
  iVar3 = *(int *)(param_1[0x96] + 0x10);
  local_5c = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar5 = FUN_004aeac0(param_1[0x96],local_5c);
      if ((*(char *)(lVar5 + 0xa9) != '\0') || ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)
         ) {
        local_38 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x20))
                             (*(longlong **)(lVar5 + 0xd8),2);
        iVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x20))(*(longlong **)(lVar5 + 0xd8),3);
        iVar2 = local_38;
        bVar1 = *(byte *)((longlong)param_1 + 0x4b9);
        if (bVar1 < 5) {
          if (bVar1 == 4) {
LAB_00744000:
            if (((0 < local_60) && (param_3[3] <= local_30._4_4_ + iVar4)) &&
               ((char)param_1[0x97] != '\0')) {
              iVar9 = local_60 *
                      *(int *)(&DAT_01e06e9c + (ulonglong)*(byte *)((longlong)param_1 + 0x4b9) * 4);
              local_60 = 0;
              local_30 = CONCAT44(param_3[1],(int)local_30 + iVar9);
            }
          }
          else if (bVar1 == 0) {
LAB_00743f35:
            if (((0 < local_64) && (param_3[2] <= (int)local_30 + local_38)) &&
               ((char)param_1[0x97] != '\0')) {
              iVar9 = local_64 *
                      *(int *)(&DAT_01e06ebc + (ulonglong)*(byte *)((longlong)param_1 + 0x4b9) * 4);
              local_64 = 0;
              local_30 = CONCAT44(local_30._4_4_ + iVar9,*param_3);
            }
          }
          else {
            if (bVar1 != 1) {
              if (bVar1 == 2) goto LAB_00743f35;
              if (bVar1 != 3) goto LAB_007440a8;
            }
            local_30._0_4_ = (int)local_30 - local_38;
            if (((0 < local_64) && ((int)local_30 < 1)) && ((char)param_1[0x97] != '\0')) {
              iVar9 = local_64 *
                      *(int *)(&DAT_01e06ebc + (ulonglong)*(byte *)((longlong)param_1 + 0x4b9) * 4);
              local_64 = 0;
              local_30 = CONCAT44(local_30._4_4_ + iVar9,param_3[2] - local_38);
            }
          }
        }
        else {
          if (bVar1 != 5) {
            if (bVar1 == 6) goto LAB_00744000;
            if (bVar1 != 7) goto LAB_007440a8;
          }
          local_30._4_4_ = local_30._4_4_ - iVar4;
          if (((0 < local_60) && (local_30._4_4_ < 1)) && ((char)param_1[0x97] != '\0')) {
            iVar9 = local_60 *
                    *(int *)(&DAT_01e06e9c + (ulonglong)*(byte *)((longlong)param_1 + 0x4b9) * 4);
            local_60 = 0;
            local_30 = CONCAT44(param_3[3] - iVar4,(int)local_30 + iVar9);
          }
        }
LAB_007440a8:
        if (local_64 < iVar4) {
          local_64 = iVar4;
        }
        if (local_60 < local_38) {
          local_60 = local_38;
        }
        uVar8 = (ulonglong)
                (uint)((int)local_30 +
                      *(int *)(&DAT_01e06efc + (ulonglong)*(byte *)((longlong)param_1 + 0x4b9) * 4)
                      * local_38);
        local_34 = iVar4;
        FUN_00665b50(*(undefined8 *)(lVar5 + 0xd8),uVar8,
                     local_30._4_4_ +
                     *(int *)(&DAT_01e06edc + (ulonglong)*(byte *)((longlong)param_1 + 0x4b9) * 4) *
                     iVar4,local_38,iVar4,0);
        bVar1 = *(byte *)((longlong)param_1 + 0x4b9);
        if (bVar1 < 8) {
          uVar7 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (bVar1 & 0x1f);
          uVar8 = (ulonglong)uVar7;
          bVar10 = (uVar7 & 5) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          local_30 = CONCAT44(local_30._4_4_,
                              (int)local_30 + iVar2 * *(int *)(&DAT_01e06e9c + (ulonglong)bVar1 * 4)
                             );
        }
        else {
          if (bVar1 < 8) {
            bVar10 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (bVar1 & 0x1f) & 0x50U) != 0;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            local_30 = CONCAT44(local_30._4_4_ +
                                iVar4 + *(int *)(&DAT_01e06ebc + (ulonglong)bVar1 * 4),(int)local_30
                               );
          }
        }
      }
      local_5c = local_5c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  pcVar6 = (code *)FUN_00411550(param_1,0xffc4);
  (*pcVar6)(param_1);
LAB_007441bc:
  if (*(char *)((longlong)param_1 + 0x391) != '\0') {
    pcVar6 = (code *)FUN_00411550(param_1,0xffee);
    (*pcVar6)(param_1);
  }
  return;
}

