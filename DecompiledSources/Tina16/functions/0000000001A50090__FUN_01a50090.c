/* Ghidra address: 01a50090 */
/* Ghidra symbol: FUN_01a50090 */


void FUN_01a50090(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  wchar_t *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_a8;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_20 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_20,0xffffffff80000001);
  local_88 = &DAT_01a50864;
  local_80 = L"LLMLocalv3";
  FUN_00416cd0(&local_48,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar2 = FUN_005ea880(local_20,local_48,1);
  if (cVar2 != '\0') {
    cVar2 = FUN_005ebec0(local_20,L"Model");
    if (cVar2 != '\0') {
      FUN_005eb6d0(local_20,&local_28,L"Model");
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0xb0))
                        (*(longlong **)(param_1 + 0x8e0),local_28);
      if (-1 < iVar3) {
        FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_28);
      }
    }
    cVar2 = FUN_005ebec0(local_20,L"ClientHeight");
    if (cVar2 != '\0') {
      uVar4 = FUN_005eba50(local_20,L"ClientHeight");
      FUN_007fdf10(param_1,uVar4);
    }
    cVar2 = FUN_005ebec0(local_20,L"ExtrInstr");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xa0) = 1;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"ExtrInstr");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xa0) = uVar4;
    }
    cVar2 = FUN_005ebec0(local_20,L"mMessagesHeight");
    if (cVar2 != '\0') {
      uVar4 = FUN_005eba50(local_20,L"mMessagesHeight");
      FUN_0064cc50(*(undefined8 *)(param_1 + 0x6b8),uVar4);
    }
    cVar2 = FUN_005ebec0(local_20,L"HistorySize");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x48) = 5;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"HistorySize");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x48) = uVar4;
    }
    cVar2 = FUN_005ebec0(local_20,L"TinaLLM");
    if (cVar2 == '\0') {
      FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 0x80,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x18));
    }
    else {
      FUN_005eb6d0(local_20,&local_50,L"TinaLLM");
      FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 0x80,local_50);
    }
    local_2c = 0;
    do {
      FUN_0043f750(&local_60,local_2c);
      FUN_00416ba0(&local_58,L"PortNum",local_60);
      cVar2 = FUN_005ebec0(local_20,local_58);
      if (cVar2 != '\0') {
        FUN_0043f750(&local_70,local_2c);
        FUN_00416ba0(&local_68,L"PortNum",local_70);
        uVar4 = FUN_005eba50(local_20,local_68);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x68 + (longlong)local_2c * 4) = uVar4;
      }
      local_2c = local_2c + 1;
    } while (local_2c != 3);
    local_2c = 0;
    do {
      cVar2 = FUN_005ebec0(local_20,L"PortNum");
      if (cVar2 != '\0') {
        uVar4 = FUN_005eba50(local_20,L"PortNum");
        *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x68 + (longlong)local_2c * 4) = uVar4;
      }
      local_2c = local_2c + 1;
    } while (local_2c != 2);
    cVar2 = FUN_005ebec0(local_20,L"FindCircLLM");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x58) = 0;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"FindCircLLM");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x58) = uVar4;
    }
    cVar2 = FUN_005ebec0(local_20,L"VoiceIndex");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x60) = 0;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"VoiceIndex");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x60) = uVar4;
    }
    cVar2 = FUN_005ebec0(local_20,L"Interface");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x5c) = 0;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"Interface");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x5c) = uVar4;
    }
    cVar2 = FUN_005ebec0(local_20,L"Version");
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x924) = 2;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"Version");
      *(undefined4 *)(param_1 + 0x924) = uVar4;
    }
    if (*(int *)(param_1 + 0x924) < 2) {
      *(undefined4 *)(param_1 + 0x924) = 2;
    }
    cVar2 = FUN_005ebec0(local_20,L"FollowLinks");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x4c) = 0;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"FollowLinks");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x4c) = uVar4;
    }
    cVar2 = FUN_005ebec0(local_20,L"Flags");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x50) = 0;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"Flags");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x50) = uVar4;
    }
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x2968) + 0x50);
    (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
              (*(longlong **)(param_1 + 0x790),CONCAT31((int3)(uVar1 >> 8),(uVar1 & 1) != 0));
    cVar2 = FUN_005ebec0(local_20,L"Language");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x54) = 0;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"Language");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x54) = uVar4;
    }
    cVar2 = FUN_005ebec0(local_20,L"Prompt_AddNetList");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xb0) = 0;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"Prompt_AddNetList");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xb0) = uVar4;
    }
    cVar2 = FUN_005ebec0(local_20,L"Prompt_IgnoreCalculate");
    if (cVar2 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xb4) = 0;
    }
    else {
      uVar4 = FUN_005eba50(local_20,L"Prompt_IgnoreCalculate");
      *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xb4) = uVar4;
    }
    FUN_005ea630(local_20);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_70,6);
  FUN_00414480(&local_28);
  return;
}

