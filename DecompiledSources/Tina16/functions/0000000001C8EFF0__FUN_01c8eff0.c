/* Ghidra address: 01c8eff0 */
/* Ghidra symbol: FUN_01c8eff0 */


undefined8 * FUN_01c8eff0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00414ad0(param_2,param_3);
  while( true ) {
    iVar2 = FUN_004170c0(&LAB_01c8f058,*param_2,1);
    if (iVar2 < 1) break;
    uVar1 = FUN_004170c0(&LAB_01c8f058,*param_2,1);
    FUN_00416e20(param_2,uVar1,1);
  }
  return param_2;
}

