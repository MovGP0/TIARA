/* Ghidra address: 014fb2e0 */
/* Ghidra symbol: FUN_014fb2e0 */


void FUN_014fb2e0(longlong param_1)

{
  int iVar1;
  short *psVar2;
  char *pcVar3;
  uint uVar4;
  char local_3b [32];
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  psVar2 = (short *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x550),1,1,&local_1a,&local_1b,local_19);
  FUN_01aa0b90((longlong)*psVar2,local_3b);
  iVar1 = 1;
  uVar4 = (uint)*(byte *)(param_1 + 1);
  if (uVar4 != 0) {
    pcVar3 = local_3b;
    do {
      if (*pcVar3 == '\x01') {
        *(undefined1 *)(param_1 + -0x1e0 + (longlong)iVar1 * 0x788) = 1;
      }
      else {
        *(undefined1 *)(param_1 + -0x1e0 + (longlong)iVar1 * 0x788) = 0;
      }
      iVar1 = iVar1 + 1;
      pcVar3 = pcVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

