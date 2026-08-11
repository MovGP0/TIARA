/* Ghidra address: 0044ed80 */
/* Ghidra symbol: FUN_0044ed80 */


undefined4 FUN_0044ed80(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 != 0)) {
    if ((param_2 == 0) || (param_1 != 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_0044ebd0(param_2,param_3);
    }
  }
  else {
    uVar1 = 0;
    thunk_FUN_039b8e11();
  }
  return uVar1;
}

