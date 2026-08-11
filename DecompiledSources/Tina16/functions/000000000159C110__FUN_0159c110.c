/* Ghidra address: 0159c110 */
/* Ghidra symbol: FUN_0159c110 */


void FUN_0159c110(longlong param_1)

{
  longlong lVar1;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_015a2050(lVar1);
  local_18 = *(uint *)(lVar1 + 0x20);
  if (*(uint *)(param_1 + 0x18) < local_18) {
    local_18 = *(uint *)(param_1 + 0x18);
  }
  if (local_18 != 0) {
    FUN_01596930(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0x18),local_18);
    *(ulonglong *)(param_1 + 0x10) = (ulonglong)local_18 + *(longlong *)(param_1 + 0x10);
    *(ulonglong *)(lVar1 + 0x18) = (ulonglong)local_18 + *(longlong *)(lVar1 + 0x18);
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_18;
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - local_18;
    *(uint *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) - local_18;
    if (*(int *)(lVar1 + 0x20) == 0) {
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0xc);
    }
  }
  return;
}

