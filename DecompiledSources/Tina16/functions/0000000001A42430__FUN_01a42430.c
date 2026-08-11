/* Ghidra address: 01a42430 */
/* Ghidra symbol: FUN_01a42430 */


void FUN_01a42430(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_10 = 0;
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x2968) + 0x80);
  local_18 = 0x11;
  FUN_00442f70(&local_10,L"DesignSoft/TINA_AI%s_Q4",&local_20,0);
  FUN_00414ad0(param_1 + 0x8a0,local_10);
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x2968) + 0x80);
  local_18 = 0x11;
  FUN_00442f70(&local_28,L"tina_ai%s",&local_20,0);
  FUN_00414ad0(param_1 + 0x8a8,local_28);
  FUN_00414ad0(param_1 + 0x2bc0,*(undefined8 *)(param_1 + 0x8a0));
  cVar1 = FUN_01a3ef90(param_1);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_1 + 0x2bb8,*(undefined8 *)(param_1 + 0x8a0));
    FUN_00414ad0(param_1 + 0x868,L"llama3.1");
    FUN_00414ad0(param_1 + 0x2b28,*(undefined8 *)(param_1 + 0x8a0));
    FUN_00416cd0(param_1 + 0x2ba8,3,*(undefined8 *)(param_1 + 0x2bb8),&LAB_01a42704,L"llama3.1");
  }
  else {
    FUN_00414ad0(param_1 + 0x2bb8,*(undefined8 *)(param_1 + 0x8a8));
    FUN_00414ad0(param_1 + 0x868,L"meta-llama-3.1-8b-instruct");
    FUN_00414ad0(param_1 + 0x2b28,*(undefined8 *)(param_1 + 0x8a8));
    FUN_00414ad0(param_1 + 0x2ba8,*(undefined8 *)(param_1 + 0x2bb8));
  }
  FUN_01a54900(param_1);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

