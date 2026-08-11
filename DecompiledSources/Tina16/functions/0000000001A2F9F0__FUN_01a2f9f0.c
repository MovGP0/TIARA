/* Ghidra address: 01a2f9f0 */
/* Ghidra symbol: FUN_01a2f9f0 */


void FUN_01a2f9f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  wchar_t *local_e0;
  undefined1 *local_d0;
  int local_c4;
  byte local_ba;
  byte local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  longlong local_88;
  longlong local_78;
  longlong local_60;
  wchar_t *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_20;
  
  local_d0 = auStack_108;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = (wchar_t *)0x0;
  local_20 = 0;
  local_30 = 0;
  local_60 = *(longlong *)(param_1 + 0x710);
  if (*(char *)(param_1 + 0x720) == '\0') {
    if (*(char *)(param_1 + 0x708) == '\0') {
      if (*(int *)(*(longlong *)(param_1 + 0x700) + 0x10) < 1) {
        local_d0 = auStack_108;
        FUN_01a2f9d0(param_1,0);
      }
      else {
        local_d0 = auStack_108;
        FUN_01a307e0(param_1);
      }
    }
    else {
      local_e8 = L"ollama_downloader_result.json";
      local_d0 = auStack_108;
      FUN_00416cd0(&local_38,3,*(undefined8 *)(local_60 + 0x2ba0),&DAT_01a2ffec);
      cVar2 = FUN_00440a20(local_38,1);
      if (cVar2 != '\0') {
        FUN_00414480(&local_20);
        FUN_005d10a0(local_38,0,0);
        FUN_005d1300(&local_20,local_38);
        FUN_00414b50(&local_50,local_20);
        FUN_00414480(&local_20);
        local_30 = FUN_00f30500(local_50,0,0);
        if (local_30 != 0) {
          local_b9 = 0;
          local_ba = 0;
          local_a4 = 0;
          FUN_00414480(&local_58);
          local_78 = FUN_004113f0(local_30,&LAB_00f23b78);
          uVar5 = *(uint *)(*(longlong *)(local_78 + 0x10) + 0x10);
          local_9c = 0;
          if (-1 < (int)(uVar5 - 1)) {
            do {
              uVar6 = (ulonglong)uVar5;
              local_88 = FUN_00f30ba0(local_78,local_9c);
              (**(code **)(**(longlong **)(local_88 + 0x10) + 0x18))
                        (*(longlong **)(local_88 + 0x10),&local_40);
              (**(code **)(**(longlong **)(local_88 + 0x18) + 0x18))
                        (*(longlong **)(local_88 + 0x18),&local_48);
              iVar3 = FUN_00416db0(local_40,L"percent");
              if (iVar3 == 0) {
                local_a0 = FUN_0043fc00(local_48);
                if ((local_a4 == 0) && (local_a0 == 100)) {
                  local_a0 = 99;
                }
                FUN_00c39530(*(undefined8 *)(param_1 + 0x6d0),local_a0);
              }
              iVar3 = FUN_00416db0(local_40,L"total");
              if (iVar3 == 0) {
                local_b0 = FUN_0043fd60(local_48);
                local_b9 = 1;
              }
              iVar3 = FUN_00416db0(local_40,L"completed");
              if (iVar3 == 0) {
                local_b8 = FUN_0043fd60(local_48);
                local_ba = 1;
              }
              iVar3 = FUN_00416db0(local_40,L"error");
              if (iVar3 == 0) {
                FUN_01a2f9d0(param_1,0);
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
                (**(code **)(*plVar1 + 0x78))(plVar1,L"Error occured");
                uVar6 = **(ulonglong **)(param_1 + 0x700);
                (**(code **)(uVar6 + 0x10))(*(ulonglong **)(param_1 + 0x700));
                uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
                FUN_004134c0(uVar4);
              }
              iVar3 = FUN_00416db0(local_40,L"model_list");
              if (iVar3 == 0) {
                FUN_01a40140(local_60,local_48);
              }
              iVar3 = FUN_00416db0(local_40,L"digest");
              if (iVar3 == 0) {
                local_c4 = 0;
                if (local_48 != 0) {
                  local_c4 = *(int *)(local_48 + -4);
                }
                local_a8 = local_c4;
                FUN_00416dc0(&local_58,local_48,local_c4 + -3,3);
              }
              iVar3 = FUN_00416db0(local_40,L"finished");
              if (iVar3 == 0) {
                local_a4 = FUN_0043fc00(local_48);
              }
              local_9c = local_9c + 1;
              uVar5 = (int)uVar6 - 1;
            } while (uVar5 != 0);
          }
          if (local_a4 == 2) {
            local_e8 = local_58;
            local_e0 = L"already downloaded";
            FUN_01a2f120(param_1,1,1,2);
          }
          else if ((local_ba & local_b9) != 0) {
            local_e8 = local_58;
            local_e0 = (wchar_t *)0x0;
            FUN_01a2f120(param_1,local_b8,local_b0,local_a4);
          }
          if (0 < local_a4) {
            FUN_01a30160(param_1,0);
          }
        }
      }
    }
    if (local_30 != 0) {
      FUN_00410f20(local_30);
    }
  }
  else {
    FUN_01a2ff80(0,auStack_108);
  }
  FUN_00414560(&local_58,5);
  FUN_00414480(&local_20);
  return;
}

