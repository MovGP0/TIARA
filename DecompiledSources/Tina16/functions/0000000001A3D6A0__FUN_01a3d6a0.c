/* Ghidra address: 01a3d6a0 */
/* Ghidra symbol: FUN_01a3d6a0 */


undefined1 FUN_01a3d6a0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_31 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
      iVar2 = FUN_00416db0(local_30[0],&DAT_01a3d754);
      if (iVar2 == 0) {
        local_31 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return local_31;
}

