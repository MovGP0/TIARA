/* Ghidra address: 01956150 */
/* Ghidra symbol: FUN_01956150 */


undefined8 FUN_01956150(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 8) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 8) & 0x1f) &
            7U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((((bVar2) && (*(longlong *)(param_1 + 0x30) == 0)) ||
      ((*(char *)(param_1 + 8) == '\x04' && (*(longlong *)(param_1 + 0x18) == 0)))) ||
     (((*(char *)(param_1 + 8) == '\x03' && (*(longlong *)(param_1 + 0x10) == 0)) ||
      (*(char *)(param_1 + 8) == '\x06')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

