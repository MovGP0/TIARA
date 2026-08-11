/* Ghidra address: 01ce8c10 */
/* Ghidra symbol: FUN_01ce8c10 */


void FUN_01ce8c10(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + -4);
  }
  if (0 < iVar1) {
    uVar2 = FUN_0040f200(param_1 + 600,*param_2);
    FUN_0040f590(uVar2);
    FUN_00409900();
  }
  FUN_00414480(param_2);
  return;
}

