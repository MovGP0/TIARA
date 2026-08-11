/* Ghidra address: 00687040 */
/* Ghidra symbol: FUN_00687040 */


void FUN_00687040(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 local_1c;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(int *)(lVar1 + 0x10) = (int)param_1[0x9d];
  if (*(char *)((longlong)param_1 + 0x54a) == '\x04') {
    local_1c = (undefined4)param_1[0x9d];
    (**(code **)(*param_1 + 0x310))(param_1,*(undefined4 *)(lVar1 + 8),&local_1c);
    *(undefined4 *)(lVar1 + 0x10) = local_1c;
  }
  return;
}

