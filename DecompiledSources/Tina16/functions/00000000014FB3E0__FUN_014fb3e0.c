/* Ghidra address: 014fb3e0 */
/* Ghidra symbol: FUN_014fb3e0 */


ulonglong FUN_014fb3e0(longlong param_1,undefined8 param_2)

{
  short *psVar1;
  undefined8 unaff_RBX;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char local_6b [32];
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49 [25];
  
  psVar1 = (short *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x550),1,1,&local_4a,&local_4b,local_49);
  FUN_01aa0b90((longlong)*psVar1,local_6b);
  iVar2 = 1;
  uVar4 = (uint)*(byte *)(param_1 + 1);
  if (uVar4 != 0) {
    pcVar3 = local_6b;
    do {
      if (*pcVar3 == '\x01') {
        FUN_01aa3a80(param_1 + -0x1e0 + (longlong)iVar2 * 0x788,param_2,
                     *(undefined8 *)PTR_DAT_02004660,1);
      }
      else {
        FUN_01aa3a80(param_1 + -0x1e0 + (longlong)iVar2 * 0x788,param_2,
                     *(undefined8 *)PTR_DAT_02004660,0);
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

