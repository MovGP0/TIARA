/* Ghidra address: 01aa8050 */
/* Ghidra symbol: FUN_01aa8050 */


void FUN_01aa8050(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 1);
  if (cVar2 != '\0') {
    puVar1 = (undefined1 *)(param_1 + 0x5a8);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0x788;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
  }
  return;
}

