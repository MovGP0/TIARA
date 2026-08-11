/* Ghidra address: 013c10e0 */
/* Ghidra symbol: FUN_013c10e0 */


byte FUN_013c10e0(int *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong local_res18 [2];
  byte local_49;
  longlong local_40 [4];
  
  local_40[2] = 0;
  local_40[1] = 0;
  local_40[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar3 = 0;
  if (*param_2 != 0) {
    uVar3 = *(undefined4 *)(*param_2 + -4);
  }
  *param_1 = 1;
  FUN_00414b50(local_40,*param_2);
  do {
    iVar1 = FUN_004170c0(local_res18[0],local_40[0],1);
    bVar4 = iVar1 != 0;
    if (bVar4) {
      local_49 = FUN_013c0da0(local_40[0],local_res18[0]);
      if (local_49 == 0) {
        iVar2 = 0;
        if (local_res18[0] != 0) {
          iVar2 = *(int *)(local_res18[0] + -4);
        }
        FUN_00416dc0(local_40,local_40[0],iVar1 + iVar2,uVar3);
      }
    }
  } while ((local_49 == 0) && (bVar4));
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + -4);
  }
  iVar2 = 0;
  if (local_40[0] != 0) {
    iVar2 = *(int *)(local_40[0] + -4);
  }
  *param_1 = (iVar1 - iVar2) + 1;
  FUN_00414560(local_40,3);
  FUN_00414480(local_res18);
  return bVar4 & local_49;
}

