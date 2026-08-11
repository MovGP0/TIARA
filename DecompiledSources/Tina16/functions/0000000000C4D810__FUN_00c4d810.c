/* Ghidra address: 00c4d810 */
/* Ghidra symbol: FUN_00c4d810 */


undefined8 FUN_00c4d810(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined4 *)(param_3 + -4);
  }
  iVar1 = 1;
  do {
    iVar1 = FUN_004170c0(param_3,local_res10[0],iVar1);
    if (0 < iVar1) {
      FUN_00416e20(local_res10,iVar1,uVar3);
      FUN_00416ea0(param_4,local_res10,iVar1);
      iVar2 = 0;
      if (param_4 != 0) {
        iVar2 = *(int *)(param_4 + -4);
      }
      iVar1 = iVar1 + iVar2;
    }
  } while (iVar1 != 0);
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

