/* Ghidra address: 011235d0 */
/* Ghidra symbol: FUN_011235d0 */


void FUN_011235d0(undefined8 param_1,undefined8 *param_2,undefined2 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_004170c0(&DAT_01123638,*param_2,1);
  if (0 < iVar1) {
    lVar2 = FUN_00414de0(param_2);
    iVar1 = FUN_004170c0(&DAT_0112364c,*param_2,1);
    *(undefined2 *)(lVar2 + -2 + (longlong)(iVar1 + 1) * 2) = param_3;
  }
  return;
}

