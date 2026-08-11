/* Ghidra address: 00706fa0 */
/* Ghidra symbol: FUN_00706fa0 */


bool FUN_00706fa0(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_00706df0(param_1);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_2;
  bVar1 = iVar2 <= *(int *)(param_1 + 0x20);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return bVar1;
}

