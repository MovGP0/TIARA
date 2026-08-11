/* Ghidra address: 010875a0 */
/* Ghidra symbol: FUN_010875a0 */


void FUN_010875a0(longlong *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
  _MCU_SetAborted(param_1[0x164],1);
  if (*(char *)((longlong)param_1 + 0x4c34) == '\0') {
    (**(code **)(*param_1 + 0x348))(param_1,1);
  }
  else {
    (**(code **)(*param_1 + 0x340))(param_1,1,1);
    FUN_0108b840(param_1,0);
    (**(code **)(*param_1 + 0x348))(param_1,1);
    (**(code **)(*param_1 + 0x328))(param_1);
  }
  return;
}

