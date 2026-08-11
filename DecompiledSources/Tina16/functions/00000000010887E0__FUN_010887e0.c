/* Ghidra address: 010887e0 */
/* Ghidra symbol: FUN_010887e0 */


void FUN_010887e0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x348))(param_1,0);
  _MCU_SetAborted(param_1[0x164],0);
  if (param_1[0x9a4] != 0) {
    *(undefined4 *)(param_1[0x9a4] + 0x22c8) = 0;
  }
  cVar1 = FUN_00f81d20((int)param_1[0x15b]);
  if (cVar1 == '\0') {
    if (*(char *)((longlong)param_1 + 0x4c34) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xb55) = 1;
    }
    FUN_01088180(param_1,param_2);
  }
  return;
}

