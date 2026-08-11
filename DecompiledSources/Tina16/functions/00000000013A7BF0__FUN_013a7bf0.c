/* Ghidra address: 013a7bf0 */
/* Ghidra symbol: FUN_013a7bf0 */


undefined8 FUN_013a7bf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong local_res18 [2];
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(&local_20);
  iVar3 = 0;
  if (local_res18[0] != 0) {
    iVar3 = *(int *)(local_res18[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      sVar1 = *(short *)(local_res18[0] + -2 + (longlong)iVar2 * 2);
      if (sVar1 != 0x20) {
        FUN_00416780(local_30,sVar1);
        FUN_00416ad0(&local_20,local_30[0]);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_2,local_20);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return param_2;
}

