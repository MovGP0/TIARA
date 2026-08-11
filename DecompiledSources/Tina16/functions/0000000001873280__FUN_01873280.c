/* Ghidra address: 01873280 */
/* Ghidra symbol: FUN_01873280 */


void FUN_01873280(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  FUN_00414480(param_2);
  iVar1 = FUN_004170c0(&DAT_018732f0,*param_3,1);
  if (0 < iVar1) {
    FUN_00416dc0(param_2,*param_3,1,iVar1 + -1);
    FUN_00416e20(param_3,1,iVar1 + 2);
  }
  return;
}

