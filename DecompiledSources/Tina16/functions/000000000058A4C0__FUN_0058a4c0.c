/* Ghidra address: 0058a4c0 */
/* Ghidra symbol: FUN_0058a4c0 */


undefined8 FUN_0058a4c0(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  
  lVar3 = *(longlong *)(*param_1 + -0xa8);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = lVar3 + 2 + (ulonglong)*(byte *)(lVar3 + 1);
    psVar7 = (short *)(lVar3 + 0x13 + (ulonglong)*(byte *)(lVar3 + 0x12));
    psVar6 = psVar7 + 1;
    for (sVar5 = *psVar7; sVar5 != 0; sVar5 = sVar5 + -1) {
      psVar6 = (short *)((longlong)psVar6 + (ulonglong)*(byte *)(psVar6 + 0x15) + 0x2b);
    }
    psVar7 = psVar6 + 1;
    for (sVar5 = *psVar6; sVar5 != 0; sVar5 = sVar5 + -1) {
      pcVar1 = (char *)(*(longlong *)((longlong)psVar7 + 1) + 0x2a);
      cVar4 = *pcVar1;
      if ((cVar4 == *(char *)(param_2 + 0x2a)) &&
         (cVar4 = FUN_0043e2c0(pcVar1,(char *)(param_2 + 0x2a),cVar4), cVar4 != '\0')) {
        uVar2 = *(ushort *)((longlong)psVar7 + 9);
        if (uVar2 != 2) {
          return CONCAT71((uint7)(byte)(uVar2 >> 8),1);
        }
      }
      else {
        uVar2 = *(ushort *)((longlong)psVar7 + 9);
      }
      psVar7 = (short *)((longlong)psVar7 + (ulonglong)uVar2 + 9);
    }
    if (*(longlong **)(lVar3 + 8) == (longlong *)0x0) break;
    lVar3 = **(longlong **)(lVar3 + 8);
  }
  return 0;
}

