/* Ghidra address: 004983e0 */
/* Ghidra symbol: FUN_004983e0 */


ushort * FUN_004983e0(ushort *param_1)

{
  char cVar1;
  ushort *puVar2;
  
  puVar2 = param_1;
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    puVar2 = param_1 + 1;
    if ((0xdbff < *puVar2) && (*puVar2 < 0xe000)) {
      puVar2 = param_1 + 2;
    }
    while( true ) {
      cVar1 = FUN_004322f0(puVar2);
      if (cVar1 != '\f') break;
      puVar2 = puVar2 + 1;
    }
  }
  return puVar2;
}

