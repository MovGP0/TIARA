/* Ghidra address: 01812240 */
/* Ghidra symbol: FUN_01812240 */


ulonglong FUN_01812240(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *local_18;
  
  local_18 = *(code **)(param_2 + 0x18);
  if (((ulonglong)local_18 & 0xffffffffffffff00) == 0) {
    uVar1 = (ulonglong)local_18 & 0xff;
  }
  else if (((ulonglong)local_18 & 0xff00000000000000) == 0xff00000000000000) {
    uVar1 = (ulonglong)*(byte *)((longlong)param_1 + ((ulonglong)local_18 & 0xffffffffffffff));
  }
  else {
    if (((ulonglong)local_18 & 0xff00000000000000) == 0xfe00000000000000) {
      local_18 = *(code **)(*param_1 + ((ulonglong)local_18 & 0xffff));
    }
    if (*(int *)(param_2 + 0x20) == -0x80000000) {
      uVar1 = (*local_18)(param_1);
    }
    else {
      uVar1 = (*local_18)(param_1,*(int *)(param_2 + 0x20));
    }
  }
  return uVar1;
}

