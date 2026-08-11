/* Ghidra address: 00663ba0 */
/* Ghidra symbol: FUN_00663ba0 */


void FUN_00663ba0(longlong param_1)

{
  longlong lVar1;
  code *local_28;
  longlong local_20;
  
  FUN_00664e30(DAT_020122b8,0);
  FUN_00663cf0(param_1);
  thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(*(longlong *)(lVar1 + 0x28) + 0x20) == '\x01') {
    *(int *)(lVar1 + 0x40) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x18) / 2;
  }
  else {
    *(int *)(lVar1 + 0x40) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x18) / 2;
  }
  FUN_00663a70(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x28));
  local_28 = FUN_00663cb0;
  local_20 = param_1;
  FUN_006612d0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x28),&local_28);
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}

