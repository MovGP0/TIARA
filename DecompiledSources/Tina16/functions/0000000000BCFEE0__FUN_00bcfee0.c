/* Ghidra address: 00bcfee0 */
/* Ghidra symbol: FUN_00bcfee0 */


void FUN_00bcfee0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  if (iVar1 < 0x41) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1 / 4;
  }
  (**(code **)(*param_1 + 0x50))(param_1,iVar1 + iVar2);
  return;
}

