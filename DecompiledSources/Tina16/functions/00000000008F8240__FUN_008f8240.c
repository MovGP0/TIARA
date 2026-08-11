/* Ghidra address: 008f8240 */
/* Ghidra symbol: FUN_008f8240 */


undefined2 FUN_008f8240(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = *(uint *)(param_2 + -4) >> 1;
  }
  iVar4 = *(int *)(param_1 + 8) - uVar5;
  if ((iVar4 < 0) || (uVar5 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar3 = 1;
    do {
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x10) + -2 + (longlong)(iVar3 + iVar4 + -1) * 2);
      bVar6 = sVar1 == *(short *)(param_2 + -2 + (longlong)iVar3 * 2);
      uVar2 = CONCAT11((char)((ushort)sVar1 >> 8),bVar6);
      iVar3 = iVar3 + 1;
      if (!bVar6) {
        return uVar2;
      }
    } while (iVar3 <= (int)uVar5);
  }
  return uVar2;
}

