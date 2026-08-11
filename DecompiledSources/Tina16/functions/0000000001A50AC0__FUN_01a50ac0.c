/* Ghidra address: 01a50ac0 */
/* Ghidra symbol: FUN_01a50ac0 */


void FUN_01a50ac0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,0xffffffff80000001);
  local_48 = &DAT_01a50df0;
  local_40 = L"LLMLocalv3";
  FUN_00416cd0(&local_28,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_28,1);
  if (cVar1 != '\0') {
    FUN_005eb630(local_10,L"Model",*(undefined8 *)(*(longlong *)(param_1 + 0x2968) + 8));
    FUN_005eba20(local_10,L"ExtrInstr",*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xa0));
    uVar2 = FUN_0064d120(param_1);
    FUN_005eba20(local_10,L"ClientHeight",uVar2);
    FUN_005eba20(local_10,L"mMessagesHeight",*(undefined4 *)(*(longlong *)(param_1 + 0x6b8) + 0x9c))
    ;
    FUN_005eba20(local_10,L"HistorySize",*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x48));
    FUN_005eb630(local_10,L"TinaLLM",*(undefined8 *)(*(longlong *)(param_1 + 0x2968) + 0x80));
    local_14 = 0;
    do {
      FUN_0043f750(&local_38,local_14);
      FUN_00416ba0(&local_30,L"PortNum",local_38);
      FUN_005eba20(local_10,local_30,
                   *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x68 + (longlong)local_14 * 4))
      ;
      local_14 = local_14 + 1;
    } while (local_14 != 3);
    FUN_005eba20(local_10,L"FindCircLLM",*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x58));
    FUN_005eba20(local_10,L"VoiceIndex",*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x60));
    FUN_005eba20(local_10,L"Interface",*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x5c));
    FUN_005eba20(local_10,L"Language",*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x54));
    FUN_005eba20(local_10,L"FollowLinks",*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x4c));
    FUN_005eba20(local_10,L"Flags",*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x50));
    FUN_005eba20(local_10,L"Version",*(undefined4 *)(param_1 + 0x924));
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_38,3);
  return;
}

