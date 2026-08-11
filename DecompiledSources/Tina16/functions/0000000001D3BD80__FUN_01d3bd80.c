/* Ghidra address: 01d3bd80 */
/* Ghidra symbol: FUN_01d3bd80 */


undefined8 FUN_01d3bd80(undefined **param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_1 == (undefined **)0x0) ||
     (((undefined **)*param_1 != &PTR_FUN_0149cf30 &&
      (param_1 = (undefined **)*param_1, param_1 != &PTR_FUN_010b6978)))) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  if (((char)puVar1 == '\0') && (puVar1 = PTR_DAT_020052b8, *PTR_DAT_020052b8 != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  return uVar2;
}

