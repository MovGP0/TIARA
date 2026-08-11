/* Ghidra address: 01b210c0 */
/* Ghidra symbol: FUN_01b210c0 */


void FUN_01b210c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_19;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  local_19 = 0;
  if (0 < iVar2) {
    uVar1 = FUN_00415ab0(param_2);
    FUN_004b89e0(param_1,uVar1,(longlong)iVar2);
  }
  FUN_004b89e0(param_1,&local_19,1);
  return;
}

