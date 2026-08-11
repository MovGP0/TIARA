/* Ghidra address: 00593470 */
/* Ghidra symbol: FUN_00593470 */


undefined ** FUN_00593470(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  
  if (param_2 < 4) {
    if (param_2 == 3) {
      return &PTR_PTR_01de2030;
    }
    if (param_2 == 1) {
      return &PTR_PTR_01de1cf0;
    }
    if (param_2 == 2) {
      return &PTR_PTR_01de1cf8;
    }
  }
  else {
    if (param_2 == 4) {
      return &PTR_PTR_01de1d00;
    }
    if (param_2 == 8) {
      return &PTR_PTR_01de1da8;
    }
  }
  ppuVar1 = (undefined **)FUN_00592ba0(&PTR_FUN_01de1fe0,param_1,param_2);
  return ppuVar1;
}

