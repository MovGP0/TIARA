/* Ghidra address: 01aa7880 */
/* Ghidra symbol: FUN_01aa7880 */


void FUN_01aa7880(longlong param_1)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  short sVar4;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  sVar4 = 0;
  if (*(char *)(param_1 + 0x570) == '\x01') {
    sVar1 = 1;
    do {
      if (*(char *)(param_1 + 0x567 + (longlong)sVar1) == '\x01') {
        sVar4 = sVar4 + 1;
      }
      if (sVar1 < 8) {
        sVar4 = sVar4 * 2;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 != 9);
  }
  else {
    sVar4 = 0xff;
  }
  psVar2 = (short *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x550),2,1,&local_1a,&local_1b,&local_19)
  ;
  *psVar2 = sVar4;
  if (DAT_02110a54 != '\0') {
    uVar3 = FUN_019a45d0();
    uVar3 = FUN_0198d430(uVar3);
    FUN_01d04aa0(*(undefined8 *)(param_1 + 0x550),uVar3);
  }
  return;
}

