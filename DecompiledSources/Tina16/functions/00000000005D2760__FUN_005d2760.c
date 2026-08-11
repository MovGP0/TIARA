/* Ghidra address: 005d2760 */
/* Ghidra symbol: FUN_005d2760 */


bool FUN_005d2760(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  
  bVar5 = false;
  if (param_1 != 0) {
    cVar1 = FUN_005d2b20(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_005d2850(param_1);
      uVar3 = thunk_FUN_0416db5f();
      uVar4 = *(ushort *)(param_1 + (longlong)(iVar2 + -1) * 2);
      if ((ushort)(uVar4 - 0x61) < 0x1a) {
        uVar4 = uVar4 & 0xffdf;
      }
      if ((0x40 < uVar4) && (bVar5 = false, uVar4 < 0x5b)) {
        bVar5 = (uVar3 >> ((char)uVar4 + 0xbfU & 0x1f) & 1) == 1;
      }
    }
  }
  return bVar5;
}

