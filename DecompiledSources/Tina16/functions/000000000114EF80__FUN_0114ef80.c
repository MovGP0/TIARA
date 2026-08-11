/* Ghidra address: 0114ef80 */
/* Ghidra symbol: FUN_0114ef80 */


ulonglong FUN_0114ef80(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar4 = 1;
  uVar5 = *(ushort *)(param_1 + 0x46);
  do {
    uVar1 = (ulonglong)(uVar4 + uVar5) / 2;
    sVar2 = (short)uVar1;
    iVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(*(longlong *)(param_1 + 0x58) + -2 + uVar1 * 2);
    if (iVar3 < 0) {
      if (iVar3 < 0) {
        uVar5 = sVar2 - 1;
      }
    }
    else {
      uVar4 = (uint)(ushort)(sVar2 + 1);
    }
  } while ((ushort)uVar4 <= uVar5);
  return (ulonglong)(uVar4 + uVar5) / 2;
}

