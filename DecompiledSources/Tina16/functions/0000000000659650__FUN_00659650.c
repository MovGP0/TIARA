/* Ghidra address: 00659650 */
/* Ghidra symbol: FUN_00659650 */


void FUN_00659650(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  char local_19;
  
  local_40 = auStack_68;
  local_30 = (**(code **)(*param_1 + 0x100))(param_1);
  local_28 = *param_1;
  if (local_30 == local_28) {
    local_19 = *(char *)((longlong)param_1 + 0xa9);
    pcVar1 = (code *)FUN_00411550(param_1,0xffca);
    (*pcVar1)(param_1,0,*(longlong *)(param_2 + 0x10) + 0x60);
    if (local_19 != '\0') {
      FUN_0064e1d0(param_1);
    }
  }
  else {
    FUN_006519b0(param_1,param_2);
  }
  return;
}

