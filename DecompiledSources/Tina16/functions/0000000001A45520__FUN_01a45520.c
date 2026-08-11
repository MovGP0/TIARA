/* Ghidra address: 01a45520 */
/* Ghidra symbol: FUN_01a45520 */


undefined8 FUN_01a45520(undefined8 param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      sVar1 = *(short *)(local_res10[0] + -2 + (longlong)iVar2 * 2);
      if ((sVar1 == 0xd) || (sVar1 == 10)) break;
      FUN_00416780(local_30,sVar1);
      FUN_00416ad0(&local_20,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_1,local_20);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return param_1;
}

