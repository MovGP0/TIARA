/* Ghidra address: 00b64990 */
/* Ghidra symbol: FUN_00b64990 */


void FUN_00b64990(longlong param_1)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined4 *puVar3;
  char cVar4;
  
  uVar2 = CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),0x38);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x92);
  iVar1 = (int)uVar2 * 4;
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
               CONCAT22((short)((uint)iVar1 >> 0x10),(short)iVar1 + 2));
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2 & 0xffffffff);
  cVar4 = '8';
  puVar3 = (undefined4 *)PTR_DAT_02002510;
  do {
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),*puVar3);
    puVar3 = puVar3 + 1;
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  return;
}

