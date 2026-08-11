/* Ghidra address: 019ae040 */
/* Ghidra symbol: FUN_019ae040 */


void FUN_019ae040(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  int local_8c;
  undefined8 *local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x78))(param_1,0,0,0);
  iVar1 = FUN_019954d0(param_1);
  lVar4 = FUN_00409570((longlong)((iVar1 + 1) * 8));
  iVar1 = (int)param_1[2];
  local_8c = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_1,local_8c);
      if (plVar5 != (longlong *)0x0) {
        uVar6 = FUN_0198a580(plVar5);
        if ((byte)uVar6 < 8) {
          bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 0x1aU)
                  != 0;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          iVar2 = (**(code **)(*plVar5 + 0x1c8))();
          local_7c = 0;
          if (-1 < iVar2 + -1) {
            do {
              iVar3 = (**(code **)(*plVar5 + 0x210))(plVar5,local_7c);
              lVar7 = FUN_00418560(0x20,&DAT_019ad950);
              FUN_017ff4f0(plVar5,&local_40);
              FUN_00414ad0(lVar7,local_40);
              *(int *)(lVar7 + 0x10) = local_7c;
              if (lVar4 == 0) {
                *(undefined8 *)(lVar7 + 0x18) = 0;
              }
              else {
                *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar4 + (longlong)iVar3 * 8);
                *(longlong *)(lVar4 + (longlong)iVar3 * 8) = lVar7;
              }
              local_7c = local_7c + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
      }
      local_8c = local_8c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*param_2 + 0x210))(param_2,0);
  local_88 = (undefined8 *)0x0;
  if (((-1 < iVar1) && (iVar2 = FUN_019954d0(param_1), iVar1 <= iVar2)) && (lVar4 != 0)) {
    local_88 = *(undefined8 **)(lVar4 + (longlong)iVar1 * 8);
  }
  puVar8 = local_88;
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (local_88 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)local_88[3];
      }
    }
    else {
      for (; local_88 != (undefined8 *)0x0; local_88 = (undefined8 *)local_88[3]) {
        FUN_017ff4f0(param_4,&local_50);
        iVar1 = FUN_00416db0(*local_88,local_50);
        if (iVar1 == 0) break;
      }
      for (; (puVar8 != (undefined8 *)0x0 && (puVar8 == local_88)); puVar8 = (undefined8 *)puVar8[3]
          ) {
      }
    }
  }
  else {
    for (; local_88 != (undefined8 *)0x0; local_88 = (undefined8 *)local_88[3]) {
      FUN_017ff4f0(param_3,&local_48);
      iVar1 = FUN_00416db0(*local_88,local_48);
      if (iVar1 == 0) break;
    }
    for (; (puVar8 != (undefined8 *)0x0 && (puVar8 == local_88)); puVar8 = (undefined8 *)puVar8[3])
    {
    }
  }
  if ((local_88 != (undefined8 *)0x0) && (puVar8 != (undefined8 *)0x0)) {
    FUN_0043f750(&local_58,*(undefined4 *)(local_88 + 2));
    FUN_0043f750(&local_60,*(undefined4 *)(puVar8 + 2));
    FUN_00416cd0(&local_30,7,*local_88,&DAT_019ae600,local_58,&DAT_019ae600,*puVar8,&DAT_019ae600,
                 local_60);
    FUN_0043f750(&local_68,*(undefined4 *)(local_88 + 2));
    FUN_0043f750(&local_70,*(undefined4 *)(puVar8 + 2));
    FUN_00416cd0(&local_38,0xb,L"LocateWire(",local_30,&DAT_019ae634,*local_88,&DAT_019ae634,
                 local_68,&DAT_019ae634,*puVar8,&DAT_019ae634,local_70,&LAB_019ae644);
    FUN_00415dd0(&local_78,local_38,0);
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_78,0,1);
  }
  FUN_004095f0(lVar4);
  FUN_004144d0(&local_78);
  FUN_00414560(&local_70,9);
  return;
}

