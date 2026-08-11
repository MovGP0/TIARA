/* Ghidra address: 01a47dd0 */
/* Ghidra symbol: FUN_01a47dd0 */


void FUN_01a47dd0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  longlong *local_90;
  longlong *local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  
  local_a0 = auStack_f8;
  local_c0 = 0;
  local_b8 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  puVar1 = auStack_f8;
  if (param_3 != '\0') {
    FUN_01a5bac0(param_1);
    puVar1 = local_a0;
  }
  local_a0 = puVar1;
  FUN_01a40b80(param_1);
  local_28 = (longlong *)0x0;
  if (*(int *)(*(longlong *)(param_1 + 0x2968) + 0xa0) == 0) {
    iVar3 = FUN_004170c0(L"Local",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1);
    if ((iVar3 < 1) && (*(char *)(param_1 + 0x814) != '\0')) goto LAB_01a4817b;
    cVar2 = FUN_01b22620(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x2bb8),local_80
                         ,0);
    if (cVar2 != '\0') goto LAB_01a4817b;
    FUN_00414b50(&local_68,L"Tina LLM model is not installed!");
    FUN_01a3e1c0(param_1,local_68);
    FUN_0072d440(local_68,1,4,0);
    cVar2 = FUN_01a3ef90(param_1);
    if (cVar2 == '\0') {
      if (*(int *)PTR_DAT_02002560 == 0) {
        local_88 = (longlong *)FUN_007fc180(&PTR_FUN_01a2e738,1,*(undefined8 *)PTR_DAT_02004030);
        FUN_01a2f520(local_88,param_1,8,0);
        (**(code **)(*local_88 + 0x2d0))(local_88);
        FUN_00410f20(local_88);
        FUN_01a3f000(param_1,&local_78,1);
        cVar2 = FUN_01b22620(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x2bb8),
                             local_80,0);
        if (cVar2 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x18))
                    (*(longlong **)(param_1 + 0x8e8),&local_b8,0);
          FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_b8);
          FUN_01a54900(param_1);
          goto LAB_01a4817b;
        }
        local_b0 = *(undefined8 *)(param_1 + 0x2bb8);
        local_a8 = 0x11;
        FUN_00442f70(&local_68,L"Model %s is not downloaded!",&local_b0,0);
        FUN_01a3e1c0(param_1,local_68);
        FUN_0072d440(local_68,1,4,0);
      }
      else {
        local_b0 = *(undefined8 *)(param_1 + 0x2bb8);
        local_a8 = 0x11;
        FUN_00442f70(&local_68,L"Download the model using \'ollama pull %s\' in command window",
                     &local_b0,0);
        FUN_01a3e1c0(param_1,local_68);
        FUN_0147bce0(local_68,L"Message",1,10);
      }
    }
    else {
      local_b0 = *(undefined8 *)(param_1 + 0x2bc0);
      local_a8 = 0x11;
      FUN_00442f70(&local_68,L"Please open LM Studio and install the %s model!",&local_b0,0);
      FUN_01a3e1c0(param_1,local_68);
      FUN_0072d440(local_68,2,4,0);
    }
    goto LAB_01a48b39;
  }
LAB_01a4817b:
  iVar3 = FUN_004170c0(L"Local",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1);
  if (iVar3 < 1) {
LAB_01a48399:
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01a41cf0(param_1);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_40);
    FUN_01a531c0(param_1);
    if ((local_40 == 0) && (*(char *)(param_1 + 0x293d) == '\0')) {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,
                           L"The question field is empty. Please specify a question!");
      FUN_004134c0(uVar4);
    }
    if (((local_40 != 0) || (*(char *)(param_1 + 0x293d) != '\0')) &&
       (*(char *)(param_1 + 0x2938) == '\0')) {
      FUN_01a50fe0(param_1,L"ModelList",param_1 + 0x838);
      FUN_004b4b10(local_28,*(undefined8 *)(param_1 + 0x838));
      cVar2 = FUN_01a3ee70(param_1,&local_58);
      if (cVar2 == '\0') {
        uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_58);
        FUN_004134c0(uVar4);
      }
      if (*(int *)(param_1 + 0x94c) == 0) {
        FUN_0043e1a0(&local_68,local_40);
        FUN_01a3cda0(local_40,param_1 + 0x858,param_1 + 0x860);
        FUN_00414480(param_1 + 0x858);
        FUN_00414480(param_1 + 0x860);
        *(undefined4 *)(param_1 + 0x2948) = 0;
        cVar2 = FUN_01a3d230(local_68);
        if (cVar2 == '\0') {
          cVar2 = FUN_01a3d280(local_68);
          if (cVar2 != '\0') {
            FUN_00414ad0(param_1 + 0x858,L"riddle");
            FUN_00414ad0(param_1 + 0x860,L"start");
            *(undefined4 *)(param_1 + 0x94c) = 1;
            *(undefined4 *)(param_1 + 0x948) = 1;
            *(undefined4 *)(param_1 + 0x2948) = 2;
          }
        }
        else {
          FUN_00414ad0(param_1 + 0x858,L"quiz");
          FUN_00414ad0(param_1 + 0x860,L"start");
          *(undefined4 *)(param_1 + 0x94c) = 1;
          *(undefined4 *)(param_1 + 0x948) = 1;
          *(undefined4 *)(param_1 + 0x2948) = 1;
        }
      }
      else {
        if ((0 < *(int *)(param_1 + 0x94c)) && (*(int *)(param_1 + 0x2948) == 1)) {
          cVar2 = FUN_01a3d450(local_40);
          if (cVar2 != '\0') {
            *(undefined4 *)(param_1 + 0x94c) = 0;
            *(undefined4 *)(param_1 + 0x948) = 1;
            *(undefined4 *)(param_1 + 0x2948) = 0;
            FUN_00414480(param_1 + 0x858);
            FUN_00414480(param_1 + 0x860);
            FUN_01a4b830(param_1,L"Quiz stopped");
            goto LAB_01a48b39;
          }
        }
        if ((0 < *(int *)(param_1 + 0x94c)) && (*(int *)(param_1 + 0x2948) == 2)) {
          cVar2 = FUN_01a3d570(local_40);
          if (cVar2 != '\0') {
            *(undefined4 *)(param_1 + 0x94c) = 0;
            *(undefined4 *)(param_1 + 0x948) = 1;
            *(undefined4 *)(param_1 + 0x2948) = 0;
            FUN_00414480(param_1 + 0x858);
            FUN_00414480(param_1 + 0x860);
            FUN_01a4b830(param_1,L"Riddle stopped");
            goto LAB_01a48b39;
          }
        }
      }
      FUN_01a3e1c0(param_1,L"bProcessRequestClick");
      local_d8 = L"answer_done.txt";
      FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a48f80);
      if ((*(int *)(param_1 + 0x930) == 0) || (*(char *)(param_1 + 0x2b40) == '\0')) {
LAB_01a48807:
        FUN_004412f0(local_38);
        if (*(int *)(param_1 + 0x944) != 1) {
          FUN_01a4b6c0(param_1);
        }
        FUN_01a3ea70(param_1);
        FUN_00414480(param_1 + 0x848);
        *(undefined1 *)(param_1 + 0x2b45) = 0;
        FUN_01a43260(param_1);
        FUN_01a40390(param_1);
        *(undefined1 *)(param_1 + 0x2938) = 1;
        uVar4 = FUN_00b921a0(0);
        *(undefined8 *)(param_1 + 0x2988) = uVar4;
        if ((*(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c) == 2) &&
           (*(char *)(param_1 + 0x2b41) == '\0')) {
          FUN_01a5a610(param_1,param_1 + 2000,param_1 + 0x2b41);
        }
        if (*(char *)(param_1 + 0x2b40) == '\0') {
          local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          FUN_013b9dc0(*(undefined8 *)(param_1 + 0x2bc8));
          (**(code **)(*local_28 + 0x90))(local_28);
          (**(code **)(*local_28 + 0x78))(local_28,L"import time;start_time=time.time()");
          (**(code **)(*local_28 + 0x78))
                    (local_28,L"from tpack_t.langchain_chat import TOllamaLangChainIntf");
          (**(code **)(*local_28 + 0x78))(local_28,L"intf = TOllamaLangChainIntf(start_time)");
          (**(code **)(*local_28 + 0x78))(local_28,L"intf.add_to_log_s(\'log started\')");
          (**(code **)(*local_28 + 0x78))(local_28,L"intf.loop()");
          local_d8 = L"chat.py";
          FUN_00416cd0(&local_60,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a48f80);
          (**(code **)(*local_28 + 0x100))(local_28,local_60);
          (**(code **)(*local_30 + 0xd8))(local_30,local_60);
          (**(code **)(*local_30 + 0x38))(local_30,&local_48);
          local_d8 = L"ai_sched.py";
          FUN_013bc030(*(undefined8 *)(param_1 + 0x2bc8),&local_50,local_48,1);
          FUN_01a43030(param_1,local_50);
          *(undefined1 *)(param_1 + 0x2b40) = 1;
        }
        FUN_01a43010(param_1,1);
        FUN_01a47810(param_1);
        *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + 1;
        *(undefined4 *)(param_1 + 0x950) = 0;
      }
      else {
        cVar2 = FUN_00440a20(local_38,1);
        if (cVar2 != '\0') goto LAB_01a48807;
      }
      if (local_28 != (longlong *)0x0) {
        FUN_00410f20(local_28);
      }
      goto LAB_01a48b47;
    }
  }
  else {
    cVar2 = FUN_01b22620(*(undefined8 *)(param_1 + 0x8e0),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 8),local_80,0);
    if (cVar2 != '\0') goto LAB_01a48399;
    local_b0 = *(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 8);
    local_a8 = 0x11;
    FUN_00442f70(&local_68,L"Model %s is not installed!",&local_b0,0);
    FUN_01a3e1c0(param_1,local_68);
    FUN_0072d440(local_68,1,4,0);
    cVar2 = FUN_01a3ef90(param_1);
    if (cVar2 == '\0') {
      local_90 = (longlong *)FUN_007fc180(&PTR_FUN_01a2e738,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_01a2f520(local_90,param_1,0x10,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 8));
      (**(code **)(*local_90 + 0x2d0))(local_90);
      FUN_00410f20(local_90);
      FUN_01a3f000(param_1,&local_78,1);
      cVar2 = FUN_01b22620(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x2bb8),
                           local_80,0);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x18))
                  (*(longlong **)(param_1 + 0x8e8),&local_c0,0);
        FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_c0);
        FUN_01a54900(param_1);
        goto LAB_01a48399;
      }
      local_b0 = *(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 8);
      local_a8 = 0x11;
      FUN_00442f70(&local_68,L"Model %s is not downloaded!",&local_b0,0);
      FUN_01a3e1c0(param_1,local_68);
      FUN_0072d440(local_68,1,4,0);
    }
  }
LAB_01a48b39:
  FUN_01a48ba0(0,local_a0);
LAB_01a48b47:
  FUN_00414560(&local_c0,2);
  FUN_00414560(&local_78,9);
  return;
}

