/* Ghidra address: 006ed840 */
/* Ghidra symbol: FUN_006ed840 */


void FUN_006ed840(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x38) != param_2) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if ((((iVar2 <= param_2) || (param_2 < 0)) &&
        (iVar1 = *(int *)(param_1 + 0x28), iVar2 = param_2, 0 < iVar1)) && (iVar1 < param_2)) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar2;
    FUN_006ed570();
  }
  return;
}

