/* Ghidra address: 0044f730 */
/* Ghidra symbol: FUN_0044f730 */


int FUN_0044f730(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = param_2 + 1;
  uVar1 = *(ushort *)(param_1 + -2 + (longlong)param_2 * 2);
  if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
    lVar3 = FUN_00416740();
    iVar2 = FUN_0044f680(lVar3 + -2 + (longlong)param_2 * 2);
    iVar2 = param_2 + iVar2 / 2;
  }
  return iVar2;
}

