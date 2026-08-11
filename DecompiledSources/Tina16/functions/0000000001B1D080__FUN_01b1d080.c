/* Ghidra address: 01b1d080 */
/* Ghidra symbol: FUN_01b1d080 */


void FUN_01b1d080(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (((longlong)param_2 & *(ulonglong *)(param_1 + 0x18)) != 0) {
    FUN_007e2da0(param_1,param_3);
  }
  iVar1 = FUN_007e2ef0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_007e2f10(param_1,iVar3);
      FUN_01b1d080(uVar2,param_2,param_3);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

