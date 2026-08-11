/* Ghidra address: 00a78170 */
/* Ghidra symbol: FUN_00a78170 */


void FUN_00a78170(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006e65f0(param_1);
  if (param_2 != iVar1) {
    iVar1 = FUN_006e65a0(param_1);
    if (param_2 < iVar1) {
      FUN_006e6920(param_1,param_2 + 1);
      FUN_006e6920(param_1,param_2);
    }
    else {
      iVar1 = FUN_006e65a0(param_1);
      FUN_006e6860(param_1,iVar1 + 1);
      uVar2 = FUN_006e65a0(param_1);
      FUN_006e6920(param_1,uVar2);
      FUN_006e6920(param_1,param_2);
      iVar1 = FUN_006e65a0(param_1);
      FUN_006e6860(param_1,iVar1 + -1);
    }
    FUN_00a78210(param_1);
  }
  return;
}

