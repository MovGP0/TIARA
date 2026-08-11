/* Ghidra address: 00411750 */
/* Ghidra symbol: FUN_00411750 */


undefined8 FUN_00411750(longlong param_1,byte *param_2)

{
  short *psVar1;
  char cVar2;
  longlong lVar3;
  short sVar4;
  byte *pbVar5;
  ushort *puVar6;
  byte local_128 [256];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  do {
    psVar1 = *(short **)(param_1 + -0x98);
    if (psVar1 == (short *)0x0) {
      sVar4 = 0;
      puVar6 = (ushort *)0x0;
    }
    else {
      sVar4 = *psVar1;
      puVar6 = (ushort *)(psVar1 + 1);
    }
    if (sVar4 != 0) {
      for (; sVar4 != 0; sVar4 = sVar4 + -1) {
        if (((byte)puVar6[5] == local_128[0]) &&
           (cVar2 = FUN_00411680(puVar6 + 5,local_128), cVar2 != '\0')) {
          return *(undefined8 *)(puVar6 + 1);
        }
        puVar6 = (ushort *)((longlong)puVar6 + (ulonglong)*puVar6);
      }
    }
    param_1 = FUN_00410ca0(param_1);
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}

