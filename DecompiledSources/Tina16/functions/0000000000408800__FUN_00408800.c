/* Ghidra address: 00408800 */
/* Ghidra symbol: FUN_00408800 */


undefined8 FUN_00408800(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_00408770();
  if ((cVar2 == '\0') || (0x1ffd < *DAT_0200ac68)) {
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(DAT_0200ac68 + (longlong)*DAT_0200ac68 * 2 + 2) = param_1;
    piVar1 = DAT_0200ac68;
    *DAT_0200ac68 = *DAT_0200ac68 + 1;
    uVar3 = CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
  }
  DAT_0200ac70 = 0;
  return uVar3;
}

