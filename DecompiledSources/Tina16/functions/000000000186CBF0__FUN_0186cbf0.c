/* Ghidra address: 0186cbf0 */
/* Ghidra symbol: FUN_0186cbf0 */


undefined8 FUN_0186cbf0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00414520(param_2);
  iVar1 = (**(code **)(*param_3 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,local_30,iVar3);
      FUN_00415f90(param_2,local_30[0]);
      iVar2 = (**(code **)(*param_3 + 0x28))(param_3);
      if (iVar3 < iVar2 + -1) {
        FUN_00415f90(param_2,&DAT_0186ccbc);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414520(local_30);
  return param_2;
}

