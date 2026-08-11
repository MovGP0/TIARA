/* Ghidra address: 00d3f270 */
/* Ghidra symbol: FUN_00d3f270 */


undefined8 FUN_00d3f270(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  cVar2 = FUN_00d3f6a0(param_1);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FUN_00787d50(uVar1);
    uVar3 = FUN_00787d50(uVar1);
    if (((uVar3 & 0x40000) != 0x40000) &&
       ((uVar3 = FUN_00787d50(uVar1), (uVar3 & 0x20000) == 0x1000000 ||
        (uVar3 = FUN_00787d50(uVar1), (uVar3 & 0x20000) == 0x20000)))) {
      uVar4 = 1;
    }
    uVar3 = FUN_00787d50(uVar1);
    if ((((uVar3 & 0x40000) != 0x40000) &&
        (uVar3 = FUN_00787d50(uVar1), (uVar3 & 0x20000) != 0x1000000)) &&
       (uVar3 = FUN_00787d50(uVar1), (uVar3 & 0x20000) != 0x20000)) {
      uVar4 = 3;
    }
    uVar3 = FUN_00787d50(uVar1);
    if ((uVar3 & 0x40000) == 0x40000) {
      uVar4 = 2;
    }
    return uVar4;
  }
  return 0;
}

