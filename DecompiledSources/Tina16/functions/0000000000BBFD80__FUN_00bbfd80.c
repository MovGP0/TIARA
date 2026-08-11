/* Ghidra address: 00bbfd80 */
/* Ghidra symbol: FUN_00bbfd80 */


undefined8 FUN_00bbfd80(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004170c0(&LAB_00bbfe10,*param_3,1);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*param_3 != 0) {
      iVar1 = *(int *)(*param_3 + -4);
    }
    iVar1 = iVar1 + 1;
  }
  FUN_00416dc0(param_2,*param_3,1,iVar1 + -1);
  iVar2 = 0;
  if (*param_3 != 0) {
    iVar2 = *(int *)(*param_3 + -4);
  }
  FUN_00416dc0(param_3,*param_3,iVar1 + 1,iVar2 - iVar1);
  return param_2;
}

