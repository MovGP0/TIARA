/* Ghidra address: 006651c0 */
/* Ghidra symbol: FUN_006651c0 */


undefined8 FUN_006651c0(HKL param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (DAT_01df89d0 == 0) {
    uVar2 = 0;
  }
  else {
    BVar1 = ImmIsIME(param_1);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
  }
  return uVar2;
}

