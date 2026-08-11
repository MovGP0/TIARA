/* Ghidra address: 016ed840 */
/* Ghidra symbol: FUN_016ed840 */


double FUN_016ed840(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  double dVar3;
  
  bVar1 = (char)param_2 - 8;
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    dVar3 = *(double *)(param_1 + 0x3a0) * 6.283185307179586;
  }
  else {
    dVar3 = 1.0;
  }
  return dVar3;
}

