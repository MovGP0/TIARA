/* Ghidra address: 015e5310 */
/* Ghidra symbol: FUN_015e5310 */


void FUN_015e5310(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),local_20);
  if (local_20[0] != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_28);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xb0))
                      (*(longlong **)(param_1 + 0x6f8),local_28);
    if (iVar2 == -1) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_30);
      (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x78))
                (*(longlong **)(param_1 + 0x6f8),local_30);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x6f8));
    }
  }
  FUN_00414560(&local_30,3);
  return;
}

