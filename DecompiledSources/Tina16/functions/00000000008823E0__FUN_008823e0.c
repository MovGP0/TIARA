/* Ghidra address: 008823e0 */
/* Ghidra symbol: FUN_008823e0 */


short FUN_008823e0(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  undefined8 *puVar3;
  
  sVar2 = 0;
  puVar3 = &DAT_01e1f158;
  do {
    cVar1 = FUN_00879070(*puVar3,param_1);
    if (cVar1 != '\0') {
      return sVar2;
    }
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar2 != 0x390);
  return 0;
}

