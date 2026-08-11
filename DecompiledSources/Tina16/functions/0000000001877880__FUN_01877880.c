/* Ghidra address: 01877880 */
/* Ghidra symbol: FUN_01877880 */


void FUN_01877880(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0x41) {
    if (iVar1 < 9) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0x10;
    }
  }
  else {
    iVar2 = iVar1 / 4;
  }
  (**(code **)(*param_1 + 0x58))(param_1,iVar1 + iVar2);
  return;
}

