/* Ghidra address: 01087a10 */
/* Ghidra symbol: FUN_01087a10 */


void FUN_01087a10(longlong *param_1)

{
  _MCU_SetAborted(param_1[0x164],0);
  if ((*(char *)((longlong)param_1 + 0xbfd) == '\0') && (param_1[0x9a4] != 0)) {
    *(undefined4 *)(param_1[0x9a4] + 0x22c8) = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x4c9c) = 0;
  if (*(char *)((longlong)param_1 + 0x4c34) == '\0') {
    FUN_01085cd0(param_1);
    FUN_010879a0(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x340))(param_1,0,0);
    FUN_0108b840(param_1,1);
    FUN_01085cd0(param_1);
  }
  return;
}

