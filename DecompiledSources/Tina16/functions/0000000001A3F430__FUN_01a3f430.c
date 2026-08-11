/* Ghidra address: 01a3f430 */
/* Ghidra symbol: FUN_01a3f430 */


undefined1 FUN_01a3f430(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  wchar_t *local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  int local_9c;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_49;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_f0 = auStack_168;
  local_130 = 0;
  local_128 = 0;
  local_118 = 0;
  local_120 = 0;
  local_f8 = (undefined *)0x0;
  local_100 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_30 = 0;
  local_49 = 1;
  FUN_00414480(param_2);
  local_48 = 0;
  FUN_00414480(param_1 + 0x838);
  *(undefined1 *)(param_1 + 0x814) = 0;
  if (*(char *)(param_1 + 0x293a) == '\0') {
    FUN_01a3da00();
    *(undefined1 *)(param_1 + 0x293a) = 1;
  }
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_38 + 0x78))
            (local_38,L"from tpack_t.ollama_downloader import TOllamaDownloader");
  (**(code **)(*local_38 + 0x78))(local_38,L"intf = TOllamaDownloader()");
  (**(code **)(*local_38 + 0x78))(local_38,L"intf.get_model_list()");
  local_148 = L"ollama_list.py";
  FUN_00416cd0(&local_80,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3fe20);
  (**(code **)(*local_38 + 0x100))(local_38,local_80);
  (**(code **)(*local_38 + 0x90))(local_38);
  FUN_01a3e910(param_1,local_80);
  FUN_01a3ea70(param_1);
  FUN_01a3ed60(param_1);
  local_148 = L"ollama_downloader_result.json";
  FUN_00416cd0(&local_58,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3fe20);
  cVar1 = FUN_00440a20(local_58,1);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_2,L"Error occured while getting model list!");
    local_49 = 0;
  }
  else {
    FUN_00414480(&local_30);
    FUN_005d10a0(local_58,0,0);
    FUN_005d1300(&local_30,local_58);
    local_48 = FUN_00f30500(local_30,0,0);
    FUN_00414480(&local_30);
    local_b8 = FUN_004113f0(local_48,&LAB_00f23b78);
    iVar4 = *(int *)(*(longlong *)(local_b8 + 0x10) + 0x10);
    local_8c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_c8 = FUN_00f30ba0(local_b8,local_8c);
        (**(code **)(**(longlong **)(local_c8 + 0x10) + 0x18))
                  (*(longlong **)(local_c8 + 0x10),&local_70);
        iVar2 = FUN_00416db0(local_70,L"models");
        if (iVar2 == 0) {
          local_d8 = FUN_004113f0(*(undefined8 *)(local_c8 + 0x18),&LAB_00f256b8);
          iVar2 = *(int *)(*(longlong *)(local_d8 + 0x10) + 0x10);
          local_90 = 0;
          if (-1 < iVar2 + -1) {
            do {
              local_b0 = FUN_00f33510(local_d8,local_90);
              local_c0 = FUN_004113f0(local_b0,&LAB_00f23b78);
              iVar5 = *(int *)(*(longlong *)(local_c0 + 0x10) + 0x10);
              local_94 = 0;
              if (-1 < iVar5 + -1) {
                do {
                  local_d0 = FUN_00f30ba0(local_c0,local_94);
                  (**(code **)(**(longlong **)(local_d0 + 0x10) + 0x18))
                            (*(longlong **)(local_d0 + 0x10),&local_78);
                  iVar3 = FUN_00416db0(local_78,L"name");
                  if (iVar3 == 0) {
                    (**(code **)(**(longlong **)(local_d0 + 0x18) + 0x18))
                              (*(longlong **)(local_d0 + 0x18),&local_60);
                    local_9c = FUN_004170c0(L":latest",local_60,1);
                    if (0 < local_9c) {
                      FUN_00416dc0(&local_60,local_60,1,local_9c + -1);
                    }
                    FUN_00416ba0(&local_100,L"%s: ",local_60);
                    local_110 = L"Local";
                    local_108 = 0x11;
                    FUN_00442f70(&local_f8,local_100,&local_110,0);
                    (**(code **)(*local_38 + 0x78))(local_38,local_f8);
                  }
                  local_94 = local_94 + 1;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
              local_90 = local_90 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        local_8c = local_8c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(*local_38 + 0x28))(local_38);
    *(bool *)(param_1 + 0x814) = 0 < iVar4;
    local_40 = FUN_01b21190(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x28),0x2c,0);
    (**(code **)(*local_38 + 0x88))(local_38,local_40);
    FUN_004b37d0(local_38,&local_60);
    FUN_00414ad0(param_1 + 0x838,local_60);
    FUN_004b4b10(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x838));
    FUN_00416ba0(&local_120,L"%s: ",*(undefined8 *)(param_1 + 0x2b28));
    local_110 = L"Local";
    local_108 = 0x11;
    FUN_00442f70(&local_118,local_120,&local_110,0);
    local_9c = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0xb0))
                         (*(longlong **)(param_1 + 0x8e0),local_118);
    if (0 < local_9c) {
      (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0xa0))
                (*(longlong **)(param_1 + 0x8e0),local_9c,0);
    }
    if (param_3 != '\0') {
      FUN_01a4fea0(param_1);
      if (*(longlong *)(*(longlong *)(param_1 + 0x2968) + 8) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x18))
                  (*(longlong **)(param_1 + 0x8e0),&local_128,0);
        FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_128);
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x2968) + 8) != 0) {
        FUN_01a54900(param_1);
      }
    }
    FUN_004b37d0(*(undefined8 *)(param_1 + 0x8e0),&local_130);
    FUN_00414ad0(param_1 + 0x838,local_130);
    FUN_01a513b0(param_1,L"ModelList",*(undefined8 *)(param_1 + 0x838));
    FUN_01a3ffa0(param_1);
  }
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  if (local_48 != 0) {
    FUN_00410f20(local_48);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x808));
  *(undefined8 *)(param_1 + 0x808) = 0;
  FUN_00414560(&local_130,4);
  FUN_00414560(&local_100,2);
  FUN_00414560(&local_80,6);
  FUN_00414480(&local_30);
  return local_49;
}

