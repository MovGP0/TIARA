/* Ghidra address: 00afd110 */
/* Ghidra symbol: FUN_00afd110 */


void FUN_00afd110(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004170c0(param_3,*param_2,1);
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + -4);
  }
  FUN_00416ea0(param_4,param_2,iVar1 + iVar2);
  return;
}

