/* Ghidra address: 005de400 */
/* Ghidra symbol: FUN_005de400 */


void FUN_005de400(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_004b3260(*(undefined8 *)(param_1 + 0x90));
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x90))(*(longlong **)(param_1 + 0x90));
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
    while (**(short **)(param_1 + 0x50) != 0) {
      FUN_004167d0(&local_38,*(undefined8 *)(param_1 + 0x50));
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),local_38)
      ;
      local_20 = *(undefined8 *)(param_1 + 0x50);
      iVar1 = FUN_00414d00(local_20);
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + (ulonglong)(iVar1 + 1) * 2;
    }
  }
  FUN_004b3390(*(undefined8 *)(param_1 + 0x90));
  FUN_00414480(&local_38);
  return;
}

