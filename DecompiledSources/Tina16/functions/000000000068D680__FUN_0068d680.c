/* Ghidra address: 0068d680 */
/* Ghidra symbol: FUN_0068d680 */


void FUN_0068d680(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 local_1c;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  local_1c = *(undefined4 *)((longlong)param_1 + 0x4c4);
  *(undefined4 *)(lVar1 + 0x10) = local_1c;
  if (*(char *)((longlong)param_1 + 0x4cc) == '\x02') {
    (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined4 *)(lVar1 + 8),&local_1c);
    *(undefined4 *)(lVar1 + 0x10) = local_1c;
  }
  return;
}

