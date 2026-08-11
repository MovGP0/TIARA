/* Ghidra address: 01d3e7b0 */
/* Ghidra symbol: FUN_01d3e7b0 */


undefined8 FUN_01d3e7b0(undefined8 param_1,short param_2)

{
  short *psVar1;
  undefined *puVar2;
  char cVar3;
  
  FUN_00414ad0(param_1,L"Not_found");
  cVar3 = '\x1a';
  psVar1 = &DAT_01ff57f4;
  puVar2 = &DAT_01ff5d60;
  do {
    if (*psVar1 == param_2) {
      FUN_004169a0(param_1,puVar2);
      return param_1;
    }
    puVar2 = puVar2 + 0x30;
    psVar1 = psVar1 + 1;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  return param_1;
}

