/* Ghidra address: 005b9870 */
/* Ghidra symbol: FUN_005b9870 */


ushort FUN_005b9870(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1[1];
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + -4);
  }
  if (iVar2 <= iVar3) {
    iVar3 = (iVar3 - iVar2) + 1;
    do {
      uVar1 = *(ushort *)(*param_1 + -2 + (longlong)iVar2 * 2);
      if (uVar1 < 0x30) {
        return uVar1;
      }
      if (0x39 < uVar1) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

