/* Ghidra address: 018924f0 */
/* Ghidra symbol: FUN_018924f0 */


void FUN_018924f0(longlong param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00686cf0(param_1,param_2,param_3);
  if (param_3 == *(longlong *)(param_1 + 0x4f8)) {
    if (*param_2 == 7) {
      uVar1 = FUN_0065b870(param_1);
      uVar1 = thunk_FUN_0411fe47(uVar1);
      FUN_01892620(param_1,uVar1,1);
      FUN_01892830(param_1,1);
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041a9b5c(uVar2,uVar1);
    }
    else if (*param_2 == 8) {
      uVar1 = FUN_0065b870(param_1);
      uVar1 = thunk_FUN_0411fe47(uVar1);
      FUN_01892620(param_1,uVar1,0);
      FUN_01892830(param_1,0);
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041a9b5c(uVar2,uVar1);
    }
  }
  return;
}

