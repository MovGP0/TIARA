/* Ghidra address: 00451b40 */
/* Ghidra symbol: FUN_00451b40 */


void FUN_00451b40(void)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = '\x01';
  for (puVar2 = DAT_01dc2390; (cVar1 != '\0' && (puVar2 != (undefined8 *)0x0));
      puVar2 = (undefined8 *)*puVar2) {
    cVar1 = (*(code *)puVar2[1])();
  }
  return;
}

