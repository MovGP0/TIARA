/* Ghidra address: 004bf430 */
/* Ghidra symbol: FUN_004bf430 */


bool FUN_004bf430(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_004c23c0();
  if ((byte)(cVar1 - 8U) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (cVar1 - 8U & 0x1f) & 3U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    FUN_004bdee0();
  }
  return bVar2 && cVar1 == '\t';
}

