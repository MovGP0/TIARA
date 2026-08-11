/* Ghidra address: 00785510 */
/* Ghidra symbol: FUN_00785510 */


uint FUN_00785510(byte param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = 0;
  bVar2 = 0;
  puVar3 = &DAT_01e08d5c;
  do {
    if (bVar2 < 8) {
      uVar4 = (int)CONCAT71((int7)(param_4 >> 8),1) << (bVar2 & 0x1f);
      param_4 = (ulonglong)uVar4;
      bVar5 = ((byte)uVar4 & param_1) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      uVar1 = uVar1 | *puVar3;
    }
    bVar2 = bVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (bVar2 != 8);
  return uVar1;
}

