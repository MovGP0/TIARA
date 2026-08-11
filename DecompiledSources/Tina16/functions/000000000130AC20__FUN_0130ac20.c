/* Ghidra address: 0130ac20 */
/* Ghidra symbol: FUN_0130ac20 */


char FUN_0130ac20(longlong param_1,longlong param_2,wchar_t *param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  int local_b8;
  wchar_t *local_a0;
  undefined1 local_92;
  char local_91;
  longlong local_90;
  longlong local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  ulonglong local_40;
  longlong local_38;
  undefined4 local_2c;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_58 = 0;
  bVar1 = false;
  local_91 = '\0';
  local_a0 = param_3;
  local_92 = param_4;
  FUN_0044f850(&local_60,*(undefined8 *)(param_1 + 0x38));
  FUN_00441d00(&local_40,local_60,*(undefined8 *)(param_1 + 0x28));
  FUN_01315120(param_1,&local_68,local_40);
  FUN_00414b50(&local_40,local_68);
  lVar6 = FUN_013021e0(*(undefined8 *)PTR_DAT_02002f98);
  if (lVar6 != 0) {
    uVar7 = FUN_013021e0(*(undefined8 *)PTR_DAT_02002f98);
    local_38 = FUN_012e2590(uVar7,local_40);
  }
  if (local_a0 != (wchar_t *)0x0) {
    iVar3 = FUN_012e5a50(param_6,2);
    if (iVar3 != 0) {
      bVar1 = false;
      if (*(char *)(*(longlong *)(param_2 + 8) + 0x434) ==
          *(char *)(*(longlong *)(local_a0 + 4) + 0x434)) {
        bVar1 = true;
      }
      goto LAB_0130adb3;
    }
  }
  iVar3 = FUN_012e5a50(param_6,1);
  if (iVar3 == 0) {
    iVar3 = FUN_012e5a50(param_6,0);
    if (iVar3 == 0) goto LAB_0130adb3;
  }
  bVar1 = true;
LAB_0130adb3:
  if (bVar1) {
    local_2c = 0;
    iVar3 = FUN_012e5c10();
    local_7c = 0;
    if (-1 < iVar3 + -1) {
      do {
        iVar4 = FUN_012e5c10(param_6);
        if (iVar4 == 0) {
          local_e8 = L"No reference selected";
          local_e0 = 0;
          FUN_0130ea10(param_1,0xb,local_92,param_5);
          break;
        }
        if (local_7c == 0) {
          local_2c = FUN_012e5d70(param_6);
        }
        else {
          local_2c = FUN_012e5de0(param_6);
        }
        iVar4 = FUN_012e6020(param_6,local_2c);
        if (iVar4 == 0) {
          lVar6 = FUN_0131cb30(&DAT_01307750,1);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(int *)(lVar6 + 0x28) = local_7c;
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x60),lVar6);
          local_91 = '\x01';
        }
        else {
          cVar2 = FUN_012e5ee0(param_6,local_2c);
          if (cVar2 != '\0') {
            iVar4 = 0;
            if (*(char *)(*(longlong *)(param_1 + 8) + 0x5db) == '\x02') {
              iVar4 = *(short *)(*(longlong *)(param_1 + 8) + 0xb25) + -1;
            }
            local_44 = 0;
            if (-1 < iVar4) {
              iVar4 = iVar4 + 1;
              do {
                iVar5 = FUN_0130a780(auStack_108);
                if (iVar5 == -1) {
                  lVar6 = FUN_0131cb30(&DAT_01307750,1);
                  FUN_0130a4d0(auStack_108,&local_70);
                  FUN_00414ad0(lVar6 + 8,local_70);
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x60),lVar6);
                  local_e8 = L"Reference curve not found";
                  local_e0 = 0;
                  FUN_0130ea10(param_1,8,local_92,param_5);
                  break;
                }
                if (*(char *)(param_1 + 0x10) == '\0') {
                  local_88 = FUN_01d347d0(*(undefined8 *)(param_2 + 8),iVar5);
                  if (local_a0 != (wchar_t *)0x0) {
                    FUN_01cc0ae0(local_88,&local_78);
                    local_90 = FUN_01cc5ec0(local_a0,local_78,1);
                  }
                }
                else {
                  local_88 = FUN_01cc5ec0(param_2,local_50,1);
                  if (local_a0 != (wchar_t *)0x0) {
                    local_90 = FUN_01cc5ec0(local_a0,local_50,1);
                  }
                }
                bVar1 = false;
                if (local_a0 == (wchar_t *)0x0) {
LAB_0130b0a4:
                  iVar5 = FUN_012e5a50(param_6,1);
                  if (iVar5 != 0) {
                    local_90 = 0;
                    if (local_38 == 0) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                  }
                }
                else {
                  iVar5 = FUN_012e5a50(param_6,2);
                  if (iVar5 == 0) goto LAB_0130b0a4;
                  if ((((local_90 == 0) || (local_88 == 0)) ||
                      (*(char *)(local_88 + 0x18) != *(char *)(local_90 + 0x18))) ||
                     (*(char *)(local_88 + 0x2b) != *(char *)(local_90 + 0x2b))) {
                    local_91 = '\0';
                  }
                  else {
                    local_91 = '\x01';
                  }
                  if (local_91 != '\0') {
                    bVar1 = true;
                  }
                }
                if (bVar1) {
                  cVar2 = FUN_004113d0(local_88,&PTR_FUN_01cb38a0);
                  if (cVar2 != '\0') {
                    local_e8 = local_a0;
                    local_e0 = *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x434);
                    local_d8 = param_5;
                    local_d0 = local_2c;
                    local_c8 = local_38;
                    local_c0 = param_6;
                    local_b8 = local_44;
                    local_91 = FUN_0130b8b0(param_1,local_88,local_90,param_2);
                    if (local_91 == '\0') break;
                  }
                }
                else if (local_90 == 0) {
                  local_e8 = L"Reference curve not found";
                  local_e0 = 0;
                  FUN_0130ea10(param_1,8,local_92,param_5);
                }
                else if (local_88 == 0) {
                  local_e8 = L"Test curve not found";
                  local_e0 = 0;
                  FUN_0130ea10(param_1,8,local_92,param_5);
                }
                else {
                  local_e8 = L"No matching output in the reference file";
                  local_e0 = 0;
                  FUN_0130ea10(param_1,8,local_92,param_5);
                }
                local_44 = local_44 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
        }
        local_7c = local_7c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    local_e8 = L"Result types are different";
    local_e0 = 0;
    FUN_0130ea10(param_1,8,local_92,param_5);
  }
  FUN_00414560(&local_78,6);
  FUN_00414480(&local_40);
  return local_91;
}

