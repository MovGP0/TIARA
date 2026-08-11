/* Ghidra address: 01aa75b0 */
/* Ghidra symbol: FUN_01aa75b0 */


void FUN_01aa75b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  short *psVar3;
  char *pcVar4;
  char local_3b [32];
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  uVar2 = FUN_01d01370(*(undefined8 *)(param_1 + 0x550));
  psVar3 = (short *)FUN_01cfde70(uVar2,1,1,&local_1a,&local_1b,local_19);
  FUN_01aa0b90((longlong)*psVar3,local_3b);
  if (*(char *)(param_1 + 0x568) == '\0') {
    iVar1 = 1;
    pcVar4 = local_3b;
    do {
      if (*pcVar4 == '\x01') {
        *(undefined1 *)(param_1 + -0x1e0 + (longlong)iVar1 * 0x788) = 1;
      }
      else {
        *(undefined1 *)(param_1 + -0x1e0 + (longlong)iVar1 * 0x788) = 0;
      }
      iVar1 = iVar1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (iVar1 != 5);
  }
  return;
}

