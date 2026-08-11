/* Ghidra address: 00456110 */
/* Ghidra symbol: FUN_00456110 */


uint FUN_00456110(ushort param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  bool bVar6;
  
  uVar3 = 0;
  bVar4 = 0;
  puVar5 = &DAT_01dc26c4;
  do {
    if (bVar4 < 0x10) {
      uVar2 = (int)CONCAT62((int6)(param_2 >> 0x10),1) << (bVar4 & 0x1f);
      param_2 = (ulonglong)uVar2;
      bVar6 = ((ushort)uVar2 & param_1) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      if (bVar4 == 0) {
        param_2 = 0;
        cVar1 = FUN_0045cdf0(6,0);
        if (cVar1 == '\0') goto LAB_00456182;
      }
      if (bVar4 == 8) {
        param_2 = 0;
        cVar1 = FUN_0045cdf0(6,1);
        if (cVar1 == '\0') goto LAB_00456182;
      }
      uVar3 = uVar3 | *puVar5;
    }
LAB_00456182:
    bVar4 = bVar4 + 1;
    puVar5 = puVar5 + 1;
    if (bVar4 == 10) {
      return uVar3;
    }
  } while( true );
}

