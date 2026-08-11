/* Ghidra address: 010529b0 */
/* Ghidra symbol: FUN_010529b0 */


void FUN_010529b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_00f8d140(*(undefined8 *)(param_1 + 0x9d8));
  if ((cVar1 != '\0') && (cVar1 = FUN_00f8d6b0(*(undefined8 *)(param_1 + 0x9d8)), cVar1 == '\0')) {
    return;
  }
  cVar1 = FUN_00f629a0(*(undefined8 *)(param_1 + 0x980));
  if (cVar1 != '\0') {
    FUN_01053ee0(param_1);
  }
  cVar1 = FUN_01053ed0(param_1);
  if (cVar1 == '\0') {
    _MCU_SetDebugMode(*(undefined8 *)(param_1 + 0x970),2);
    _MCU_SetAborted(*(undefined8 *)(param_1 + 0x970),0);
    *(undefined1 *)(param_1 + 0x6c4) = 0;
    FUN_00f8d1c0(*(undefined8 *)(param_1 + 0x9d8),0);
    FUN_00f8d300(*(undefined8 *)(param_1 + 0x9d8),1);
    FUN_01052800(param_1,2);
    FUN_00f8d300(*(undefined8 *)(param_1 + 0x9d8),0);
  }
  return;
}

