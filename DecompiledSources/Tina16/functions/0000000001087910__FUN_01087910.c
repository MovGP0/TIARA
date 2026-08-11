/* Ghidra address: 01087910 */
/* Ghidra symbol: FUN_01087910 */


void FUN_01087910(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x348))(param_1,0);
  _MCU_SetAborted(param_1[0x164],0);
  if (param_1[0x9a4] != 0) {
    *(undefined4 *)(param_1[0x9a4] + 0x22c8) = 0;
  }
  cVar1 = FUN_00f81d20((int)param_1[0x15b]);
  if (cVar1 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
    if (*(char *)((longlong)param_1 + 0x4c34) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xb55) = 1;
    }
    if (*(char *)((longlong)param_1 + 0x4c34) == '\0') {
      FUN_010878b0(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x340))(param_1,0,0);
    }
  }
  return;
}

