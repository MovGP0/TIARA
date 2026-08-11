/* Ghidra address: 00d3efa0 */
/* Ghidra symbol: FUN_00d3efa0 */


byte FUN_00d3efa0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_00787d50(uVar1);
  bVar3 = (uVar2 & 0x80000) == 0x80000;
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 0x10000) == 0x10000) {
    bVar3 = bVar3 | 4;
  }
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 0x20000) == 0x20000) {
    bVar3 = bVar3 | 2;
  }
  uVar2 = FUN_00787d70(uVar1);
  if ((((uVar2 & 0x400) == 0x400) && ((bVar3 & 4) == 0)) && ((bVar3 & 2) == 0)) {
    bVar3 = bVar3 | 8;
  }
  return bVar3;
}

