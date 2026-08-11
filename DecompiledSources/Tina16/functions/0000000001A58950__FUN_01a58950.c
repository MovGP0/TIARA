/* Ghidra address: 01a58950 */
/* Ghidra symbol: FUN_01a58950 */


void FUN_01a58950(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 *local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_80 = auStack_b8;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01a3e1c0(param_1,L"bProcessRequestClick");
  local_98 = L"answer_done.txt";
  FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a58d98);
  if ((*(int *)(param_1 + 0x930) != 0) && (*(char *)(param_1 + 0x2b40) != '\0')) {
    cVar1 = FUN_00440a20(local_30,1);
    if (cVar1 == '\0') goto code_r0x01a58cc2;
  }
  FUN_004412f0(local_30);
  if (*(int *)(param_1 + 0x944) != 1) {
    FUN_01a4b6c0(param_1);
  }
  FUN_01a3ea70(param_1);
  FUN_00414480(param_1 + 0x848);
  *(undefined1 *)(param_1 + 0x2b45) = 0;
  FUN_01a43260(param_1);
  FUN_01a40390(param_1);
  *(undefined1 *)(param_1 + 0x2938) = 1;
  if (*(char *)(param_1 + 0x2b40) == '\0') {
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_013b9dc0(*(undefined8 *)(param_1 + 0x2bc8));
    (**(code **)(*local_20 + 0x90))(local_20);
    (**(code **)(*local_20 + 0x78))(local_20,L"import time;start_time=time.time()");
    (**(code **)(*local_20 + 0x78))
              (local_20,L"from tpack_t.langchain_chat import TOllamaLangChainIntf");
    (**(code **)(*local_20 + 0x78))(local_20,L"intf = TOllamaLangChainIntf(start_time)");
    (**(code **)(*local_20 + 0x78))(local_20,L"intf.add_to_log_s(\'log started\')");
    (**(code **)(*local_20 + 0x78))(local_20,L"intf.loop()");
    local_98 = L"chat.py";
    FUN_00416cd0(&local_50,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a58d98);
    (**(code **)(*local_20 + 0x100))(local_20,local_50);
    (**(code **)(*local_28 + 0xd8))(local_28,local_50);
    (**(code **)(*local_28 + 0x38))(local_28,&local_38);
    local_98 = (wchar_t *)0x0;
    FUN_013bc030(*(undefined8 *)(param_1 + 0x2bc8),&local_40,local_38,1);
    FUN_01a43030(param_1,local_40);
    *(undefined1 *)(param_1 + 0x2b40) = 1;
  }
  FUN_01a43010(param_1,1);
  FUN_01a47810(param_1);
  *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + 1;
  *(undefined4 *)(param_1 + 0x950) = 0;
code_r0x01a58cc2:
  FUN_00410f20(local_20);
  FUN_00414560(&local_68,8);
  FUN_00414560(&local_res10,2);
  return;
}

