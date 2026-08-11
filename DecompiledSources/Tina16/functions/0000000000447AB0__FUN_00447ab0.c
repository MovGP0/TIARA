/* Ghidra address: 00447ab0 */
/* Ghidra symbol: FUN_00447ab0 */


ulonglong FUN_00447ab0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  
  sVar3 = FUN_004479f0(param_1);
  uVar4 = 0;
  while( true ) {
    cVar2 = FUN_00432270(param_1 + 0x3e);
    if (cVar2 == '\0') break;
    lVar1 = (ulonglong)(uint)((int)uVar4 * 2) * 5;
    uVar4 = CONCAT62((int6)((ulonglong)lVar1 >> 0x10),
                     (short)lVar1 + *(short *)(param_1 + 0x3e) + -0x30);
    FUN_004479a0(param_1);
  }
  if (0x400 < (short)uVar4) {
    uVar4 = CONCAT62((int6)((ulonglong)uVar4 >> 0x10),0x400);
  }
  return CONCAT62((int6)((ulonglong)uVar4 >> 0x10),(short)uVar4 * sVar3) & 0xffffffff;
}

