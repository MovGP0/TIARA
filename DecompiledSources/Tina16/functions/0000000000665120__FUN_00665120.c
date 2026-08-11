/* Ghidra address: 00665120 */
/* Ghidra symbol: FUN_00665120 */


undefined8 FUN_00665120(HWND param_1,HIMC param_2)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (DAT_01df89d0 == 0) {
    uVar2 = 0;
  }
  else {
    BVar1 = ImmReleaseContext(param_1,param_2);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
  }
  return uVar2;
}

