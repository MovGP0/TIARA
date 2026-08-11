/* Ghidra address: 0081cc80 */
/* Ghidra symbol: FUN_0081cc80 */


undefined8 FUN_0081cc80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 unaff_RSI;
  undefined7 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 *puVar13;
  int local_74;
  int local_70;
  undefined1 local_6c [12];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_20 = 0;
  plVar4 = (longlong *)FUN_00781840();
  cVar2 = (**(code **)(*plVar4 + 0x90))(plVar4);
  if (cVar2 != '\0') {
    FUN_004238d0(&local_40,0,0,*(undefined4 *)(param_1 + 0x130),
                 CONCAT44(uVar8,*(undefined4 *)(param_1 + 0x78)));
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x4d1);
    uVar9 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if ((cVar2 == '\x04') || (cVar2 == '\x05')) {
      uVar8 = (undefined4)CONCAT71(uVar9,5);
    }
    else {
      uVar8 = (undefined4)CONCAT71(uVar9,2);
    }
    plVar4 = (longlong *)FUN_00781840();
    (**(code **)(*plVar4 + 0x228))(plVar4,local_6c,uVar8);
    uVar5 = FUN_00781840();
    puVar13 = &local_20;
    FUN_00779240(uVar5,0,local_6c,&local_40,puVar13);
    uVar8 = (undefined4)((ulonglong)puVar13 >> 0x20);
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (((*(char *)(lVar1 + 0x4d2) == '\x02') && (*(char *)(lVar1 + 0x4d6) != '\x01')) &&
       (*(char *)(lVar1 + 0x4d1) != '\0')) {
      local_74 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x130) / 2;
      local_70 = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x78) / 2;
      FUN_00809ac0(DAT_02012670,&local_30);
      uVar5 = FUN_00809b30(DAT_02012670,&local_74,0);
      FUN_00807850(uVar5,&local_40);
      uVar5 = FUN_00809b30(DAT_02012670,&local_74,0);
      FUN_00807810(uVar5,&local_50);
      FUN_004238d0();
      iVar3 = 0;
      iVar6 = 0;
      iVar7 = 0;
      iVar10 = 0;
      if (((local_3c == local_4c) || (local_3c < 1)) ||
         ((-1 < *(int *)(param_1 + 300) ||
          (uVar11 = (int)*(uint *)(param_1 + 300) >> 0x1f,
          99 < (int)((*(uint *)(param_1 + 300) ^ uVar11) - uVar11))))) {
        iVar12 = *(int *)(param_1 + 300);
        if ((iVar12 < local_3c) && (local_3c - iVar12 < 100)) {
          iVar6 = local_3c - iVar12;
        }
        else {
          iVar12 = *(int *)(param_1 + 300);
          if ((iVar12 < local_5c) && (local_5c - iVar12 < 100)) {
            iVar6 = local_5c - iVar12;
          }
          else if ((*(int *)(param_1 + 300) < local_2c) &&
                  (local_2c - *(int *)(param_1 + 300) < 100)) {
            iVar6 = local_2c - *(int *)(param_1 + 300);
          }
        }
      }
      else {
        uVar11 = (int)*(uint *)(param_1 + 300) >> 0x1f;
        iVar6 = (*(uint *)(param_1 + 300) ^ uVar11) - uVar11;
      }
      if ((((local_40 == local_50) || (local_40 < 1)) || (-1 < *(int *)(param_1 + 0xf8))) ||
         (uVar11 = (int)*(uint *)(param_1 + 0xf8) >> 0x1f,
         99 < (int)((*(uint *)(param_1 + 0xf8) ^ uVar11) - uVar11))) {
        iVar12 = *(int *)(param_1 + 0xf8);
        if ((iVar12 < local_40) && (local_40 - iVar12 < 100)) {
          iVar3 = local_40 - iVar12;
        }
        else {
          iVar12 = *(int *)(param_1 + 0xf8);
          if ((iVar12 < local_60) && (local_60 - iVar12 < 100)) {
            iVar3 = local_60 - iVar12;
          }
          else if ((*(int *)(param_1 + 0xf8) < local_30) &&
                  (local_30 - *(int *)(param_1 + 0xf8) < 100)) {
            iVar3 = local_30 - *(int *)(param_1 + 0xf8);
          }
        }
      }
      else {
        uVar11 = (int)*(uint *)(param_1 + 0xf8) >> 0x1f;
        iVar3 = (*(uint *)(param_1 + 0xf8) ^ uVar11) - uVar11;
      }
      iVar12 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x130);
      if ((local_38 < iVar12) && (iVar12 - local_38 < 100)) {
        iVar7 = iVar12 - local_38;
      }
      else {
        iVar12 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x130);
        if ((local_58 < iVar12) && (iVar12 - local_58 < 100)) {
          iVar7 = iVar12 - local_58;
        }
        else {
          iVar12 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x130);
          if ((local_28 < iVar12) && (iVar12 - local_28 < 100)) {
            iVar7 = iVar12 - local_28;
          }
        }
      }
      iVar12 = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x78);
      if ((local_34 < iVar12) && (iVar12 - local_34 < 100)) {
        iVar10 = iVar12 - local_34;
      }
      else {
        iVar12 = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x78);
        if ((local_54 < iVar12) && (iVar12 - local_54 < 100)) {
          iVar10 = iVar12 - local_54;
        }
        else if ((local_24 < *(int *)(param_1 + 300) + *(int *)(param_1 + 0x78)) &&
                ((*(int *)(param_1 + 300) + *(int *)(param_1 + 0x78)) - local_24 < 100)) {
          iVar10 = (*(int *)(param_1 + 300) + *(int *)(param_1 + 0x78)) - local_24;
        }
      }
      if ((((iVar3 != 0) || (iVar7 != 0)) || (iVar6 != 0)) || (iVar10 != 0)) {
        thunk_FUN_0415dadf(local_20,iVar3,iVar6,*(int *)(param_1 + 0x130) - iVar7,
                           CONCAT44(uVar8,*(int *)(param_1 + 0x78) - iVar10));
      }
    }
  }
  return local_20;
}

