/* Ghidra address: 010b68e0 */
/* Ghidra symbol: FUN_010b68e0 */


void FUN_010b68e0(longlong param_1,undefined4 param_2)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(char)param_2 == '\0');
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x788),uVar1 & 0xffffffff);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x790),uVar1 & 0xffffffff);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x778),param_2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x780),param_2);
  return;
}

