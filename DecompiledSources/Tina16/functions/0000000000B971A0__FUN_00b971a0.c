/* Ghidra address: 00b971a0 */
/* Ghidra symbol: FUN_00b971a0 */


undefined8 FUN_00b971a0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
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
  FUN_00414480(&local_20);
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      uVar1 = *(ushort *)(local_res10[0] + -2 + (longlong)iVar2 * 2);
      if ((uVar1 < 0x41) || (0x48 < uVar1)) {
        FUN_00416780(local_30,uVar1);
        FUN_00416ad0(&local_20,local_30[0]);
      }
      else {
        FUN_00416ad0(&local_20,*(undefined8 *)(&DAT_02019a38 + (longlong)(int)(uVar1 - 0x40) * 2));
      }
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

