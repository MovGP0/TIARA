/* Ghidra address: 01a40c10 */
/* Ghidra symbol: FUN_01a40c10 */


void FUN_01a40c10(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  wchar_t *local_120;
  undefined1 local_118;
  wchar_t *local_110;
  undefined1 local_108;
  wchar_t *local_100;
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  bool local_19;
  
  local_70 = auStack_158;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x798),1);
  FUN_007e2f80(*(undefined8 *)(param_1 + 0x798),1);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x7a0),1);
  FUN_007e2f80(*(undefined8 *)(param_1 + 0x7a0),1);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x7b0),1);
  FUN_007e2f80(*(undefined8 *)(param_1 + 0x7b0),1);
  cVar2 = FUN_01a511d0(param_1,L"Autotest",0);
  if (cVar2 == '\0') {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x780),0);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x780),0);
  }
  uVar3 = FUN_01b251d0(L"Main",L"AIDiag");
  *(undefined1 *)(param_1 + 0x815) = uVar3;
  FUN_01a50090(param_1);
  *(undefined4 *)(param_1 + 0x944) = 0;
  local_138 = L"ai_sample_questions.txt";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\aiprompts\\");
  cVar2 = FUN_00440a20(local_38,1);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_38);
  }
  local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)PTR_DAT_02002560);
  local_80 = 0;
  FUN_00442f70(&local_78,L"FormShow.1: FIsRunningOnWine=%d",&local_88,0);
  FUN_01a3e1c0(param_1,local_78);
  *(int *)(param_1 + 0x2b58) =
       (int)(700 / (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x6e0) + 0x78));
  FUN_013b7990(PTR_DAT_02004010,param_1 + 0x2b18,param_1 + 0x2b20,&local_48);
  FUN_01a51650(param_1);
  if (*(int *)PTR_DAT_02002560 == 0) {
    uVar4 = FUN_01a3e3d0(param_1,param_1 + 0x818);
    *(undefined4 *)(param_1 + 0x294c) = uVar4;
  }
  FUN_01a3c500(local_30,*(undefined4 *)(param_1 + 0x294c));
  *(undefined4 *)(param_1 + 0x2950) = *(undefined4 *)(param_1 + 0x294c);
  local_88 = local_30[0];
  local_80 = 0x11;
  FUN_00442f70(&local_90,L"FormShow: GPU: %s",&local_88,0);
  FUN_01a3e1c0(param_1,local_90);
  FUN_00414ad0(param_1 + 0x898,L"127.0.0.1");
  FUN_01a3efd0(param_1,*(undefined4 *)(param_1 + 0x294c));
  local_88 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x30) + 0x10);
  local_80 = 0x11;
  FUN_00442f70(&local_98,L"llamafile-%s.exe",&local_88,0);
  FUN_00414ad0(param_1 + 0x870,local_98);
  local_c0 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x30) + 0x10);
  local_b8 = 0x11;
  local_b0 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x30) + 0x10);
  local_a8 = 0x11;
  FUN_00442f70(&local_a0,
               L"https://github.com/Mozilla-Ocho/llamafile/releases/download/%s/llamafile-%s.exe",
               &local_c0,1);
  FUN_00414ad0(param_1 + 0x878,local_a0);
  FUN_01a3c600(&local_d0,*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x5c));
  local_88 = local_d0;
  local_80 = 0x11;
  FUN_00442f70(&local_c8,L"FormShow: Interface set to: %s",&local_88,0);
  FUN_01a3e1c0(param_1,local_c8);
  cVar2 = FUN_01a58510(param_1,&local_50);
  if (cVar2 == '\0') {
    if (0 < *(int *)PTR_DAT_02002560) {
      local_120 = L"https://ollama.com/download/linux";
      local_118 = 0x11;
      local_110 = L"https://ollama.com/download/mac";
      local_108 = 0x11;
      local_100 = L"127.0.0.1";
      local_f8 = 0x11;
      local_f0 = *(undefined4 *)
                  (*(longlong *)(param_1 + 0x2968) + 0x68 +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c) * 4);
      local_e8 = 0;
      FUN_00442f70(&local_e0,
                   L"The environment to run the LLM could not be found. Please install Ollama (linux: %s, MacOS: %s) and ensure it is running, (tried: http://%s:%d)"
                   ,&local_120,3);
      FUN_0072d440(local_e0,1,4,0);
    }
    FUN_00805200(param_1);
  }
  else {
    FUN_01a3e1c0(param_1,L"FormShow: LocalLLMFrameWork_Installed OK");
    FUN_01a42430(param_1);
    if (((*(int *)PTR_DAT_02002560 == 0) && (*(int *)(param_1 + 0x294c) == 0)) && (DAT_01fc7b78 < 0)
       ) {
      FUN_0072d440(L"NO GPU detected, operation might be slow.\nFor faster operation you may try a Free Internet Model by selecting it at the top of AI Assistant."
                   ,0,4,0);
    }
    if (DAT_01fc7b78 < 0) {
      local_19 = true;
    }
    else {
      local_19 = *(int *)(param_1 + 0x294c) != DAT_01fc7b78;
    }
    DAT_01fc7b78 = *(int *)(param_1 + 0x294c);
    if (local_19 != false) {
      if (*(int *)(param_1 + 0x294c) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xa0) = 1;
      }
      else {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xa0) = 1;
      }
    }
    FUN_01a3f000(param_1,&local_50,1);
    if (*(int *)PTR_DAT_02002560 == 0) {
      local_88 = *(undefined8 *)(param_1 + 0x818);
      local_80 = 0x11;
      FUN_00442f70(&local_d8,L"GPU: %s",&local_88,0);
      FUN_01a52e50(param_1,local_d8,0);
    }
    local_138 = L"answer_done.txt";
    FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a41a54);
    cVar2 = FUN_00440a20(local_38,1);
    if (cVar2 != '\0') {
      FUN_004412f0(local_38);
    }
    local_138 = L"log.json";
    FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a41a54);
    cVar2 = FUN_00440a20(local_38,1);
    if (cVar2 != '\0') {
      iVar5 = FUN_01b21610(local_38);
      if (0x100000 < iVar5) {
        FUN_004412f0(local_38);
      }
    }
    local_138 = L"log_short.json";
    FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a41a54);
    cVar2 = FUN_00440a20(local_38,1);
    if (cVar2 != '\0') {
      iVar5 = FUN_01b21610(local_38);
      if (0x100000 < iVar5) {
        FUN_004412f0(local_38);
      }
    }
    local_138 = L"errors.txt";
    FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a41a54);
    cVar2 = FUN_00440a20(local_38,1);
    if (cVar2 != '\0') {
      FUN_004412f0(local_38);
    }
    FUN_01a54070(param_1,*(undefined8 *)(param_1 + 0x2960),1);
    FUN_01a474e0(param_1);
    FUN_01a4cb70(param_1);
    FUN_01a54900(param_1);
    FUN_01a3d890();
    FUN_01a45610(param_1,param_1 + 0x29c0);
    FUN_01a45610(param_1,param_1 + 0x2a48);
    FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x718));
    uVar4 = FUN_0064d120(param_1);
    *(undefined4 *)(param_1 + 0x934) = uVar4;
    *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(*(longlong *)(param_1 + 0x6b8) + 0x9c);
    FUN_01a5ae10(param_1);
  }
  FUN_01a3e1c0(param_1,L"FormShow: end");
  FUN_00414560(&local_e0,4);
  FUN_00414560(&local_a0,3);
  FUN_00414480(&local_78);
  FUN_00414560(&local_68,8);
  return;
}

