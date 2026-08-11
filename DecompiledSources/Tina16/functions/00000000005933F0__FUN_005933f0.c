/* Ghidra address: 005933f0 */
/* Ghidra symbol: FUN_005933f0 */


undefined ** FUN_005933f0(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  
  if (param_2 < 4) {
    if (param_2 == 3) {
      return &PTR_PTR_01de1fd8;
    }
    if (param_2 == 1) {
      return &PTR_PTR_01de1c50;
    }
    if (param_2 == 2) {
      return &PTR_PTR_01de1c60;
    }
  }
  else {
    if (param_2 == 4) {
      return &PTR_PTR_01de1c70;
    }
    if (param_2 == 8) {
      return &PTR_PTR_01de1d78;
    }
  }
  ppuVar1 = (undefined **)FUN_00592ba0(&PTR_FUN_01de1f98,param_1,param_2);
  return ppuVar1;
}

