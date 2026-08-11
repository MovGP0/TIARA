/* Ghidra address: 00663cf0 */
/* Ghidra symbol: FUN_00663cf0 */


void FUN_00663cf0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 0x28) + 0x20) == '\x01') {
      local_28 = FUN_00660730(lVar1,2);
      local_24 = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x18) / 2;
      local_20 = FUN_006607d0(*(undefined8 *)(param_1 + 0x88),2);
      local_20 = local_28 + local_20;
      local_1c = local_24 + *(int *)(param_1 + 0x18);
    }
    else {
      local_28 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x18) / 2;
      local_24 = FUN_00660730(lVar1,1);
      local_20 = local_28 + *(int *)(param_1 + 0x18);
      local_1c = FUN_006607d0(*(undefined8 *)(param_1 + 0x88),1);
      local_1c = local_24 + local_1c;
    }
    uVar2 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x20));
    uVar2 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x78),uVar2);
    thunk_FUN_04161b78(*(undefined8 *)(param_1 + 0x78),local_28,local_24,local_20 - local_28,
                       local_1c - local_24,0x5a0049);
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x78),uVar2);
  }
  return;
}

