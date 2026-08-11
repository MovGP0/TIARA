/* Ghidra address: 00b58e40 */
/* Ghidra symbol: FUN_00b58e40 */


void FUN_00b58e40(longlong param_1,uint param_2,ushort param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  short sVar3;
  
  uVar2 = (ulonglong)param_2;
  if ((ushort)param_2 <= param_3) {
    sVar3 = (param_3 - (ushort)param_2) + 1;
    do {
      uVar1 = FUN_00b53830(*(undefined8 *)(param_1 + 0x20),uVar2);
      FUN_00b506e0(uVar1);
      uVar2 = CONCAT62((int6)(uVar2 >> 0x10),(short)uVar2 + 1);
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  return;
}

