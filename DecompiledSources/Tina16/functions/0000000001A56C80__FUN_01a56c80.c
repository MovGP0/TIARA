/* Ghidra address: 01a56c80 */
/* Ghidra symbol: FUN_01a56c80 */


ulonglong FUN_01a56c80(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined *local_340;
  undefined1 *local_330;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268 [68];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  longlong *local_30;
  
  local_330 = auStack_368;
  local_40 = 0;
  local_48 = 0;
  local_268[0] = 0;
  local_270 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_38 = 0;
  iVar2 = FUN_004170c0(L"Local",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1);
  if ((iVar2 == 0) || (cVar1 = FUN_01b251d0(L"Main",L"OllamaTest"), cVar1 != '\0')) {
    FUN_01a57160(0,local_330);
  }
  else {
    iVar2 = FUN_004170c0(L"Local",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1);
    if (0 < iVar2) {
      if (*(int *)(*(longlong *)(param_1 + 0x2968) + 0xa0) == 0) {
        FUN_00414b50(&local_2a8,*(undefined8 *)(param_1 + 0x2bb8));
        FUN_00414480(&local_2b0);
      }
      else {
        FUN_00414b50(&local_2a8,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 8));
        FUN_00414b50(&local_2b0,L"library\\");
      }
    }
    FUN_01a56c20(&local_40);
    FUN_00416ba0(&local_298,local_40,L"\\.ollama\\models\\manifests\\registry.ollama.ai\\");
    local_348 = local_2a8;
    local_340 = &DAT_01a572b0;
    FUN_00416cd0(&local_298,4,local_298,local_2b0);
    FUN_00416ba0(local_268,local_298,L"latest");
    local_30 = (longlong *)0x0;
    local_2d8 = 0;
    cVar1 = FUN_00440a20(local_268[0],1);
    if (cVar1 != '\0') {
      local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*local_30 + 0xd8))(local_30,local_268[0]);
      (**(code **)(*local_30 + 0x38))(local_30,&local_2a0);
      local_2e0 = FUN_00f30500(local_2a0,0,0);
      local_2f8 = FUN_004113f0(local_2e0,&LAB_00f23b78);
      iVar2 = *(int *)(*(longlong *)(local_2f8 + 0x10) + 0x10);
      local_2bc = 0;
      if (-1 < iVar2 + -1) {
        do {
          local_308 = FUN_00f30ba0(local_2f8,local_2bc);
          (**(code **)(**(longlong **)(local_308 + 0x10) + 0x18))
                    (*(longlong **)(local_308 + 0x10),&local_288);
          iVar3 = FUN_00416db0(local_288,L"layers");
          if (iVar3 == 0) {
            local_318 = FUN_004113f0(*(undefined8 *)(local_308 + 0x18),&LAB_00f256b8);
            iVar3 = *(int *)(*(longlong *)(local_318 + 0x10) + 0x10);
            local_2c0 = 0;
            if (-1 < iVar3 + -1) {
              do {
                local_2f0 = FUN_00f33510(local_318,local_2c0);
                local_300 = FUN_004113f0(local_2f0,&LAB_00f23b78);
                iVar5 = *(int *)(*(longlong *)(local_300 + 0x10) + 0x10);
                local_2c4 = 0;
                if (-1 < iVar5 + -1) {
                  do {
                    local_310 = FUN_00f30ba0(local_300,local_2c4);
                    (**(code **)(**(longlong **)(local_310 + 0x10) + 0x18))
                              (*(longlong **)(local_310 + 0x10),&local_290);
                    iVar4 = FUN_00416db0(local_290,L"size");
                    if (iVar4 == 0) {
                      (**(code **)(**(longlong **)(local_310 + 0x18) + 0x18))
                                (*(longlong **)(local_310 + 0x18),&local_278);
                      local_2d0 = FUN_0043fd60(local_278);
                      if (local_2d8 < local_2d0) {
                        local_2d8 = local_2d0;
                      }
                    }
                    local_2c4 = local_2c4 + 1;
                    iVar5 = iVar5 + -1;
                  } while (iVar5 != 0);
                }
                local_2c0 = local_2c0 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          local_2bc = local_2bc + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    local_38 = local_2d8;
    if (local_30 != (longlong *)0x0) {
      FUN_00410f20(local_30);
    }
  }
  FUN_00414560(&local_2b0,10);
  FUN_00414560(&local_48,2);
  return local_38;
}

