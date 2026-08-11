/* Ghidra address: 00844350 */
/* Ghidra symbol: FUN_00844350 */


int FUN_00844350(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = FUN_00842050(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xd0) + 0x4e8,
                       param_1 + 0x38);
  if (*(int *)(param_1 + 0xd8) == 0) {
    local_20 = (int)uVar1;
    local_20 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x4e8) - local_20;
  }
  else {
    uStack_1c = (int)((ulonglong)uVar1 >> 0x20);
    local_20 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x4ec) - uStack_1c;
  }
  if (local_20 < 1) {
    local_20 = 1;
  }
  return local_20;
}

