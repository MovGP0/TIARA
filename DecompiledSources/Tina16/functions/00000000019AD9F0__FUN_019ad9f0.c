/* Ghidra address: 019ad9f0 */
/* Ghidra symbol: FUN_019ad9f0 */


void FUN_019ad9f0(longlong *param_1,longlong *param_2,char param_3)

{
  wchar_t *pwVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  int local_7c;
  undefined8 *local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x78))(param_1,0,0,0);
  iVar3 = FUN_019954d0(param_1);
  lVar6 = FUN_00409570((longlong)((iVar3 + 1) * 8));
  iVar3 = (int)param_1[2];
  local_7c = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar7 = (longlong *)FUN_00b94e60(param_1,local_7c);
      if (plVar7 != (longlong *)0x0) {
        uVar8 = FUN_0198a580(plVar7);
        if ((byte)uVar8 < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) << ((byte)uVar8 & 0x1f) & 0x1aU)
                   != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          iVar4 = (**(code **)(*plVar7 + 0x1c8))();
          local_6c = 0;
          if (-1 < iVar4 + -1) {
            do {
              iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,local_6c);
              lVar9 = FUN_00418560(0x20,&DAT_019ad950);
              FUN_017ff4f0(plVar7,&local_40);
              FUN_00414ad0(lVar9,local_40);
              FUN_01cfaa80(plVar7,&local_48);
              FUN_00414ad0(lVar9 + 8,local_48);
              *(int *)(lVar9 + 0x10) = local_6c;
              if (lVar6 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
              }
              else {
                *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar6 + (longlong)iVar5 * 8);
                *(longlong *)(lVar6 + (longlong)iVar5 * 8) = lVar9;
              }
              local_6c = local_6c + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (param_3 == '\0') {
            FUN_01d09300(plVar7,param_2);
            FUN_01d09d60(plVar7,param_2);
          }
        }
      }
      local_7c = local_7c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_3 != '\0') {
    (**(code **)(*param_2 + 0x78))(param_2,L"DeleteAllWires()");
  }
  iVar3 = FUN_019954d0(param_1);
  local_7c = 0;
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    do {
      if (lVar6 != 0) {
        local_78 = *(undefined8 **)(lVar6 + (longlong)local_7c * 8);
        while( true ) {
          if (local_78 == (undefined8 *)0x0) {
            bVar11 = false;
          }
          else {
            pwVar1 = (wchar_t *)local_78[1];
            if (pwVar1 == L"Dummy") {
              bVar11 = true;
            }
            else if (pwVar1 == (wchar_t *)0x0) {
              bVar11 = false;
            }
            else {
              iVar4 = FUN_0043e420(pwVar1,L"Dummy");
              bVar11 = iVar4 == 0;
            }
          }
          if (!bVar11) break;
          local_78 = (undefined8 *)local_78[3];
        }
        if (local_78 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)0x0;
        }
        else {
          puVar2 = (undefined8 *)local_78[3];
        }
        while (puVar10 = puVar2, puVar10 != (undefined8 *)0x0) {
          while( true ) {
            if (puVar10 == (undefined8 *)0x0) {
              bVar11 = false;
            }
            else {
              pwVar1 = (wchar_t *)puVar10[1];
              if (pwVar1 == L"Dummy") {
                bVar11 = true;
              }
              else if (pwVar1 == (wchar_t *)0x0) {
                bVar11 = false;
              }
              else {
                iVar4 = FUN_0043e420(pwVar1,L"Dummy");
                bVar11 = iVar4 == 0;
              }
            }
            if (!bVar11) break;
            puVar10 = (undefined8 *)puVar10[3];
          }
          puVar2 = puVar10;
          if (puVar10 != (undefined8 *)0x0) {
            FUN_0043f750(&local_50,*(undefined4 *)(local_78 + 2));
            FUN_0043f750(&local_58,*(undefined4 *)(puVar10 + 2));
            FUN_00416cd0(&local_30,7,*local_78,&DAT_019adff8,local_50,&DAT_019adff8,*puVar10,
                         &DAT_019adff8,local_58);
            FUN_0043f750(&local_60,*(undefined4 *)(local_78 + 2));
            FUN_0043f750(&local_68,*(undefined4 *)(puVar10 + 2));
            FUN_00416cd0(&local_38,0xb,L"LocateWire(",local_30,&DAT_019ae02c,*local_78,&DAT_019ae02c
                         ,local_60,&DAT_019ae02c,*puVar10,&DAT_019ae02c,local_68,&DAT_019ae03c);
            (**(code **)(*param_2 + 0x78))(param_2,local_38);
            puVar2 = (undefined8 *)puVar10[3];
            local_78 = puVar10;
          }
        }
      }
      local_7c = local_7c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004095f0(lVar6);
  FUN_00414560(&local_68,8);
  return;
}

