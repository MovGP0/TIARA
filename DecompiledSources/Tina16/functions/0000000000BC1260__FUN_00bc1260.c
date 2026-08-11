/* Ghidra address: 00bc1260 */
/* Ghidra symbol: FUN_00bc1260 */


char FUN_00bc1260(longlong param_1)

{
  char cVar1;
  
  cVar1 = (*(byte *)(param_1 + 0x28) & 1) != 0;
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    cVar1 = cVar1 + '\x02';
  }
  if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
    cVar1 = cVar1 + '\x04';
  }
  if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
    cVar1 = cVar1 + '\b';
  }
  return cVar1;
}

