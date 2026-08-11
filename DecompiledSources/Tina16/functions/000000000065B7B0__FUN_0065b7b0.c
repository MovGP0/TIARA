/* Ghidra address: 0065b7b0 */
/* Ghidra symbol: FUN_0065b7b0 */


void FUN_0065b7b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_007f9b70(param_1,1);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x358) == 0) {
      FUN_007f9b90(param_1,1);
    }
    else {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_03c244fb(uVar2);
    }
  }
  else {
    FUN_00802010(lVar1,param_1);
  }
  return;
}

