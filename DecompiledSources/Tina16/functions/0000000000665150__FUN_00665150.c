/* Ghidra address: 00665150 */
/* Ghidra symbol: FUN_00665150 */


undefined8 FUN_00665150(HIMC param_1,undefined8 *param_2)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  tagCOMPOSITIONFORM local_34;
  
  local_34._0_8_ = *param_2;
  local_34._8_8_ = param_2[1];
  local_34.rcArea._4_8_ = param_2[2];
  local_34.rcArea.bottom = *(LONG *)(param_2 + 3);
  if (DAT_01df89d0 == 0) {
    uVar2 = 0;
  }
  else {
    BVar1 = ImmSetCompositionWindow(param_1,&local_34);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
  }
  return uVar2;
}

