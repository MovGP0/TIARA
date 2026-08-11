/* Ghidra address: 01aa7660 */
/* Ghidra symbol: FUN_01aa7660 */


ulonglong FUN_01aa7660(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short *psVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  int iVar4;
  char *pcVar5;
  char local_5b [32];
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39 [17];
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  uVar1 = FUN_01d01370(*(undefined8 *)(param_1 + 0x550));
  psVar2 = (short *)FUN_01cfde70(uVar1,1,1,&local_3a,&local_3b,local_39);
  FUN_01aa0b90((longlong)*psVar2,local_5b);
  if (*(char *)(param_1 + 0x568) == '\0') {
    iVar4 = 1;
    pcVar5 = local_5b;
    do {
      if (*pcVar5 == '\x01') {
        FUN_01aa3a80(param_1 + -0x1e0 + (longlong)iVar4 * 0x788,param_2,
                     *(undefined8 *)PTR_DAT_02004660,1);
      }
      else {
        FUN_01aa3a80(param_1 + -0x1e0 + (longlong)iVar4 * 0x788,param_2,
                     *(undefined8 *)PTR_DAT_02004660,0);
      }
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (iVar4 != 5);
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}

