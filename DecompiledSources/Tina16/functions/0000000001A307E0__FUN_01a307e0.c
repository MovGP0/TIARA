/* Ghidra address: 01a307e0 */
/* Ghidra symbol: FUN_01a307e0 */


void FUN_01a307e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_48;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x720) = 1;
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x700),0);
  *(longlong *)(param_1 + 0x6f8) = lVar2;
  local_28 = *(undefined8 *)(lVar2 + 8);
  local_20 = 0x11;
  FUN_00442f70(&local_18,L"Downloading model: \'%s\' ... ",&local_28,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_18);
  FUN_01a301a0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 8));
  FUN_004ae870(*(undefined8 *)(param_1 + 0x700),0);
  *(undefined1 *)(param_1 + 0x720) = 0;
  FUN_00414480(&local_18);
  return;
}

