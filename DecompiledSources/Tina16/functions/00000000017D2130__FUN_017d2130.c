/* Ghidra address: 017d2130 */
/* Ghidra symbol: FUN_017d2130 */


int FUN_017d2130(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x2d8);
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      plVar1 = *(longlong **)
                (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar4 * 8) + 0x128);
      sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (sVar2 == 0x62) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar3;
}

