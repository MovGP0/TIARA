/* Ghidra address: 01d3bdc0 */
/* Ghidra symbol: FUN_01d3bdc0 */


undefined8 FUN_01d3bdc0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  cVar1 = FUN_01d3bd80(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0198a580(param_1);
    if ((byte)uVar2 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x3eU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      bVar3 = false;
      goto LAB_01d3be02;
    }
  }
  bVar3 = true;
LAB_01d3be02:
  if ((bVar3) || (*PTR_DAT_020052b8 == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

