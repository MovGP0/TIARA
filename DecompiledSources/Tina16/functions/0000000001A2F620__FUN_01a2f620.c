/* Ghidra address: 01a2f620 */
/* Ghidra symbol: FUN_01a2f620 */


void FUN_01a2f620(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_28 = *(longlong *)(param_1 + 0x710);
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(int *)(param_1 + 0x70c) == 4) {
    FUN_004b4b10(local_20,*(undefined8 *)(local_28 + 0x2ba8));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4f0);
    (**(code **)(*plVar1 + 0x10))(plVar1,local_20);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),0);
  }
  if ((*(uint *)(param_1 + 0x70c) & 1) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"No model found!");
  }
  if ((*(uint *)(param_1 + 0x70c) & 2) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"No embeddings model found!");
  }
  if ((*(uint *)(param_1 + 0x70c) & 8) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))
              (plVar1,L"Tina LLM model not found. Press Start to download the model...!");
  }
  if ((*(uint *)(param_1 + 0x70c) & 0x10) != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x718);
    local_40 = 0x11;
    FUN_00442f70(&local_38,L"Model %s not found. Press Start to download the model...!",&local_48,0)
    ;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

