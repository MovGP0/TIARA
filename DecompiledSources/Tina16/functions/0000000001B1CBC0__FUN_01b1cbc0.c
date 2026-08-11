/* Ghidra address: 01b1cbc0 */
/* Ghidra symbol: FUN_01b1cbc0 */


undefined8 FUN_01b1cbc0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 local_res10 [3];
  int local_1c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  bVar2 = false;
  local_1c = param_3;
  while ((1 < local_1c && (!bVar2))) {
    iVar1 = FUN_004170c0(&LAB_01b1ccb4,local_res10[0],1);
    bVar2 = iVar1 == 0;
    if (!bVar2) {
      FUN_00416e20(local_res10,1,iVar1);
    }
    local_1c = local_1c + -1;
  }
  if (!bVar2) {
    iVar1 = FUN_004170c0(&LAB_01b1ccb4,local_res10[0],1);
    if (iVar1 == 0) {
      iVar1 = 0x100;
    }
    FUN_00416dc0(param_1,local_res10[0],1,iVar1 + -1);
  }
  FUN_00414480(local_res10);
  return param_1;
}

