/* Ghidra address: 0082c190 */
/* Ghidra symbol: FUN_0082c190 */


void FUN_0082c190(void)

{
  undefined8 *puVar1;
  char cVar2;
  
  cVar2 = '\v';
  puVar1 = &DAT_020126d8;
  do {
    FUN_00410f20(*puVar1);
    puVar1 = puVar1 + 1;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  return;
}

