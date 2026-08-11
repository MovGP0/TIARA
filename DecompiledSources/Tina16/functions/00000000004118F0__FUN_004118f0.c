/* Ghidra address: 004118f0 */
/* Ghidra symbol: FUN_004118f0 */


longlong FUN_004118f0(longlong *param_1,byte *param_2)

{
  short *psVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  short sVar5;
  byte *pbVar6;
  byte local_138 [264];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar6 = local_138;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar6 = *param_2;
    param_2 = param_2 + 1;
    pbVar6 = pbVar6 + 1;
  }
  lVar3 = *param_1;
  do {
    psVar1 = *(short **)(lVar3 + -0xa0);
    if (psVar1 == (short *)0x0) {
      sVar5 = 0;
      puVar4 = (uint *)0x0;
    }
    else {
      sVar5 = *psVar1;
      puVar4 = (uint *)(psVar1 + 5);
    }
    if (sVar5 != 0) {
      for (; sVar5 != 0; sVar5 = sVar5 + -1) {
        pbVar6 = (byte *)((longlong)puVar4 + 6);
        if ((*pbVar6 == local_138[0]) && (cVar2 = FUN_00411680(pbVar6,local_138), cVar2 != '\0')) {
          return (longlong)param_1 + (ulonglong)*puVar4;
        }
        puVar4 = (uint *)((longlong)puVar4 + (ulonglong)(*pbVar6 + 7));
      }
    }
    lVar3 = FUN_00410ca0(lVar3);
    if (lVar3 == 0) {
      return 0;
    }
  } while( true );
}

