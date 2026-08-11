/* Ghidra address: 00685780 */
/* Ghidra symbol: FUN_00685780 */


undefined8 FUN_00685780(longlong param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x54a) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x54a) & 0x1f)
            & 0x18U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (cVar1 = FUN_006853c0(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

