/* Ghidra address: 006fa360 */
/* Ghidra symbol: FUN_006fa360 */


void FUN_006fa360(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x33a) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (*(byte *)(param_1 + 0x33a) & 0x1f)
            & 0x18U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (*(char *)(param_1 + 0xff) != '\x01')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *(longlong *)(param_2 + 0x18) = (longlong)cVar1;
  return;
}

