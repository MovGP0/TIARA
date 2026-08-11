/* Ghidra address: 01a51fc0 */
/* Ghidra symbol: FUN_01a51fc0 */


undefined1 FUN_01a51fc0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  int local_124;
  undefined1 *local_120;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined1 local_61;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_120 = auStack_158;
  local_78[0] = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_48 = (wchar_t *)0x0;
  local_40[0] = 0;
  local_50 = 0;
  local_98 = 0;
  local_30[0] = 0;
  local_58 = 0;
  local_61 = 0;
  local_60 = 0;
  FUN_00414480(param_1 + 0x838);
  local_138 = L"llm_def.json";
  FUN_00416cd0(local_78,3,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\");
  cVar2 = FUN_00440a20(local_78[0],1);
  if (cVar2 != '\0') {
    FUN_00414480(&local_58);
    FUN_005d10a0(local_78[0],0,0);
    FUN_005d1300(&local_58,local_78[0]);
    local_60 = FUN_00f30500(local_58,0,0);
    FUN_00414480(&local_58);
    lVar3 = FUN_004113f0(local_60,&LAB_00f23b78);
    if (local_60 != 0) {
      iVar5 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10);
      local_124 = iVar5 + -1;
      local_a4 = 0;
      local_d0 = lVar3;
      if (-1 < local_124) {
        do {
          local_124 = iVar5;
          local_e8 = FUN_00f30ba0(local_d0,local_a4);
          (**(code **)(**(longlong **)(local_e8 + 0x10) + 0x18))
                    (*(longlong **)(local_e8 + 0x10),&local_48);
          cVar2 = FUN_004113d0(*(undefined8 *)(local_e8 + 0x18),&LAB_00f23b78);
          if (cVar2 == '\0') {
            FUN_00414480(local_40);
          }
          else {
            FUN_00414b50(local_40,local_48);
          }
          (**(code **)(**(longlong **)(local_e8 + 0x18) + 0x18))
                    (*(longlong **)(local_e8 + 0x18),&local_80);
          uVar1 = *(undefined8 *)(local_e8 + 0x18);
          cVar2 = FUN_004113d0(uVar1,&LAB_00f23b78);
          if (cVar2 == '\0') {
            FUN_01a51960(auStack_158,local_e8);
          }
          else {
            local_d8 = FUN_004113f0(uVar1,&LAB_00f23b78);
            iVar5 = *(int *)(*(longlong *)(local_d8 + 0x10) + 0x10);
            local_a8 = 0;
            if (-1 < iVar5 + -1) {
              do {
                local_f0 = FUN_00f30ba0(local_d8,local_a8);
                (**(code **)(**(longlong **)(local_f0 + 0x10) + 0x18))
                          (*(longlong **)(local_f0 + 0x10),&local_48);
                cVar2 = FUN_004113d0(*(undefined8 *)(local_f0 + 0x18),&LAB_00f23b78);
                if (cVar2 != '\0') {
                  local_138 = local_48;
                  FUN_00416cd0(local_40,3,local_40[0],&DAT_01a5250c);
                }
                uVar1 = *(undefined8 *)(local_f0 + 0x18);
                cVar2 = FUN_004113d0(uVar1,&LAB_00f23b78);
                if (cVar2 == '\0') {
                  FUN_01a51960(auStack_158,local_f0);
                }
                else {
                  local_e0 = FUN_004113f0(uVar1,&LAB_00f23b78);
                  iVar4 = *(int *)(*(longlong *)(local_e0 + 0x10) + 0x10);
                  local_ac = 0;
                  if (-1 < iVar4 + -1) {
                    do {
                      local_f8 = FUN_00f30ba0(local_e0,local_ac);
                      (**(code **)(**(longlong **)(local_f8 + 0x10) + 0x18))
                                (*(longlong **)(local_f8 + 0x10),&local_48);
                      cVar2 = FUN_004113d0(*(undefined8 *)(local_f8 + 0x18),&LAB_00f23b78);
                      if (cVar2 == '\0') {
                        FUN_01a51960(auStack_158,local_f8);
                      }
                      local_ac = local_ac + 1;
                      iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                  }
                }
                local_a8 = local_a8 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
          }
          local_a4 = local_a4 + 1;
          local_124 = local_124 + -1;
          iVar5 = local_124;
        } while (local_124 != 0);
      }
    }
    FUN_01a52510(param_1);
    local_61 = 1;
  }
  if (local_60 != 0) {
    FUN_00410f20(local_60);
  }
  FUN_00414560(&local_98,5);
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  return local_61;
}

