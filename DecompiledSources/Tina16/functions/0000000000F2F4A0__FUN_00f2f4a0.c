/* Ghidra address: 00f2f4a0 */
/* Ghidra symbol: FUN_00f2f4a0 */


undefined8 FUN_00f2f4a0(longlong param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  
  psVar2 = *(short **)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar3 = 0;
  if (psVar2 != (short *)0x0) {
    iVar3 = *(int *)(psVar2 + -2);
  }
  psVar1 = psVar2 + iVar3;
  while( true ) {
    if (psVar1 <= psVar2) {
      return 0;
    }
    if ((ushort)(*psVar2 - 8U) < 0x58) {
      uVar4 = ((ulonglong)(ushort)(*psVar2 - 8U) & 0x7f) + 0x20;
      bVar5 = (*(byte *)(((longlong)uVar4 >> 3) + 0xf2f518) >> (uVar4 & 7) & 1) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    psVar2 = psVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar2 >> 8),1);
}

