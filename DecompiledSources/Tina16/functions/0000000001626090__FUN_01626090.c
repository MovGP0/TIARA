/* Ghidra address: 01626090 */
/* Ghidra symbol: FUN_01626090 */


undefined8 FUN_01626090(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  FUN_00414480(param_1);
  iVar1 = FUN_004170c0(L"bvams_",local_res10[0],1);
  iVar2 = FUN_004170c0(L"_evams",local_res10[0],1);
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      if ((iVar3 < iVar1) || (iVar2 + 6 < iVar3)) {
        FUN_00416780(&local_30,*(undefined2 *)(local_res10[0] + -2 + (longlong)iVar3 * 2));
        FUN_00416ad0(param_1,local_30);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return param_1;
}

