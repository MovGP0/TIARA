/* Ghidra address: 01966bb0 */
/* Ghidra symbol: FUN_01966bb0 */


bool FUN_01966bb0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  
  if ((byte)param_2 < 8) {
    bVar1 = ((byte)((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << ((byte)param_2 & 0x1f)) &
            *(byte *)(param_1 + 0x2a8)) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

