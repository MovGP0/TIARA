/* Ghidra address: 01c00f30 */
/* Ghidra symbol: FUN_01c00f30 */


undefined8 FUN_01c00f30(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2e8))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar4);
      FUN_0064dd90(uVar3,&local_20);
      iVar2 = FUN_0043e6d0(local_20,param_2);
      if (iVar2 == 0) {
        local_28 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_20);
  return local_28;
}

