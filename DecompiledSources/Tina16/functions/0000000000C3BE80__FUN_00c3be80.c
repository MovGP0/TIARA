/* Ghidra address: 00c3be80 */
/* Ghidra symbol: FUN_00c3be80 */


undefined8 * FUN_00c3be80(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00414ad0(param_1);
  while( true ) {
    iVar2 = FUN_004170c0(&DAT_00c3bee8,*param_1,1);
    if (iVar2 < 1) break;
    uVar1 = FUN_004170c0(&DAT_00c3bee8,*param_1,1);
    FUN_00416e20(param_1,uVar1,1);
  }
  return param_1;
}

