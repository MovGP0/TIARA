/* Ghidra address: 018bdf50 */
/* Ghidra symbol: FUN_018bdf50 */


undefined8 FUN_018bdf50(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      iVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),iVar2);
      if (iVar1 == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa8),(longlong)param_2);
  return 0;
}

