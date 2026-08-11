/* Ghidra address: 01bc4230 */
/* Ghidra symbol: FUN_01bc4230 */


void FUN_01bc4230(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_10);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_10);
  if (iVar2 == -1) {
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0xb8),0xff000008);
  }
  else {
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0xb8),0xff000010);
  }
  FUN_00414480(&local_10);
  return;
}

