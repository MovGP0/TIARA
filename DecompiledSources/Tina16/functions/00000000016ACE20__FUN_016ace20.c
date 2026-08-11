/* Ghidra address: 016ace20 */
/* Ghidra symbol: FUN_016ace20 */


undefined8 FUN_016ace20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar3;
  undefined4 uVar4;
  longlong local_res18 [2];
  undefined8 local_10;
  int iVar2;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414630();
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
    iVar3 = 0;
    if (local_res18[0] != 0) {
      iVar3 = *(int *)(local_res18[0] + -4);
    }
  } while ((iVar1 <= iVar3) && (*(char *)(local_res18[0] + -1 + (longlong)iVar1) == ' '));
  if (1 < iVar1) {
    FUN_00415b50(local_res18,1,iVar2);
  }
  FUN_00416880(&local_10,local_res18[0]);
  iVar1 = FUN_004170c0(&LAB_016acf34,local_10,1);
  if (0 < iVar1) {
    uVar4 = 0;
    if (local_res18[0] != 0) {
      uVar4 = *(undefined4 *)(local_res18[0] + -4);
    }
    FUN_00415b50(local_res18,iVar1,uVar4);
  }
  FUN_00414bf0(param_2,local_res18[0]);
  FUN_00414480(&local_10);
  FUN_004144d0(local_res18);
  return param_2;
}

