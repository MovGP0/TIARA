/* Ghidra address: 0147cfc0 */
/* Ghidra symbol: FUN_0147cfc0 */


undefined8 FUN_0147cfc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004170c0(&LAB_0147d020,param_2,1);
  if (iVar1 < 1) {
    FUN_00414ad0(param_1,param_2);
  }
  else {
    FUN_00416dc0(param_1,param_2,1,iVar1 + -1);
  }
  return param_1;
}

