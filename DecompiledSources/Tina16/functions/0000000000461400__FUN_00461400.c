/* Ghidra address: 00461400 */
/* Ghidra symbol: FUN_00461400 */


void FUN_00461400(longlong param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(param_1 + 1);
  iVar4 = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      lVar3 = (longlong)iVar4;
      pbVar1 = (byte *)(param_1 + 3 + lVar3);
      if (param_3 == '\0') {
        lVar3 = (longlong)(int)(((uint)*(byte *)(param_1 + 1) - iVar4) + -1);
      }
      uVar2 = *(ushort *)(param_2 + lVar3 * 0x18);
      if (((*pbVar1 & 0x80) != 0x80) && ((uVar2 == 0xc || ((uVar2 & 0x2000) == 0x2000)))) {
        FUN_00460b80();
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

