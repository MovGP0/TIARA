/* Ghidra address: 00ce9290 */
/* Ghidra symbol: FUN_00ce9290 */


void FUN_00ce9290(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar2);
      FUN_00ce9110(param_1,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

