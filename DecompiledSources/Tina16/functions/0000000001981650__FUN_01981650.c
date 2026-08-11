/* Ghidra address: 01981650 */
/* Ghidra symbol: FUN_01981650 */


bool FUN_01981650(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_2 + 0x18) == '\x01';
  }
  return bVar1;
}

