/* Ghidra address: 01a47810 */
/* Ghidra symbol: FUN_01a47810 */


void FUN_01a47810(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if (0 < *(int *)(param_1 + 0x930)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
    (**(code **)(*plVar1 + 0x78))(plVar1,0);
    FUN_006e7230(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x4f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x288))(*(longlong **)(param_1 + 0x6b8),0);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),local_20);
  uVar2 = 0;
  if (local_20[0] != 0) {
    uVar2 = *(undefined4 *)(local_20[0] + -4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x290))(*(longlong **)(param_1 + 0x6b8),uVar2);
  FUN_006e7230(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x4f0),1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"User:");
  if (*(char *)(param_1 + 0x2b48) == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_28);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x20));
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x78))(plVar1,0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_30);
  uVar2 = 0;
  if (local_30 != 0) {
    uVar2 = *(undefined4 *)(local_30 + -4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x290))(*(longlong **)(param_1 + 0x6b8),uVar2);
  FUN_006e7230(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x4f0),1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Assistant:");
  FUN_006e7230(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x4f0),0);
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x288))(*(longlong **)(param_1 + 0x6b8),0);
  FUN_01a4b730(param_1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined4 *)(param_1 + 0x92c) = uVar2;
  FUN_00414560(&local_30,3);
  return;
}

