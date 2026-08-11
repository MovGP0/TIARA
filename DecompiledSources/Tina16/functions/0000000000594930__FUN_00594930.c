/* Ghidra address: 00594930 */
/* Ghidra symbol: FUN_00594930 */


void FUN_00594930(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  uVar1 = FUN_00416740(param_2);
  FUN_00525420(uVar1,iVar2 * 2,0);
  return;
}

