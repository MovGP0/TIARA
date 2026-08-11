/* Ghidra address: 01b88140 */
/* Ghidra symbol: FUN_01b88140 */


undefined8 FUN_01b88140(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res18 [2];
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(local_30);
  iVar3 = 0;
  if (local_res18[0] != 0) {
    iVar3 = *(int *)(local_res18[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_01b7fd00(*(undefined2 *)(local_res18[0] + -2 + (longlong)iVar2 * 2));
      if (cVar1 == '\0') break;
      FUN_00416780(local_40,*(undefined2 *)(local_res18[0] + -2 + (longlong)iVar2 * 2));
      FUN_00416ad0(local_30,local_40[0]);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return param_2;
}

