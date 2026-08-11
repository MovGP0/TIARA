/* Ghidra address: 0188b810 */
/* Ghidra symbol: FUN_0188b810 */


bool FUN_0188b810(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  
  if (*(uint *)(param_1 + 0x38) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
             ((byte)*(uint *)(param_1 + 0x38) & 0x1f) & 0xcU) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

