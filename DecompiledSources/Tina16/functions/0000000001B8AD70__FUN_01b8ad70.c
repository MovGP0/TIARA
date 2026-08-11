/* Ghidra address: 01b8ad70 */
/* Ghidra symbol: FUN_01b8ad70 */


undefined1 FUN_01b8ad70(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_00416db0(local_res10[0],&DAT_01b8ae44);
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res10[0],&DAT_01b8ae54);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res10[0],&DAT_01b8ae64);
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_res10[0],&DAT_01b8ae74);
        if (iVar2 != 0) {
          iVar2 = FUN_00416db0(local_res10[0],&DAT_01b8ae84);
          if (iVar2 != 0) {
            iVar2 = FUN_00416db0(local_res10[0],&LAB_01b8ae94);
            if (iVar2 != 0) {
              uVar1 = 0;
              goto LAB_01b8ae04;
            }
          }
        }
      }
    }
  }
  uVar1 = 1;
LAB_01b8ae04:
  FUN_00414480(local_res10);
  return uVar1;
}

