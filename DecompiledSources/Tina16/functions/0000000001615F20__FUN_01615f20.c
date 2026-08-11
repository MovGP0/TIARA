/* Ghidra address: 01615f20 */
/* Ghidra symbol: FUN_01615f20 */


undefined1 FUN_01615f20(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_004170c0(&DAT_01615fb4,local_res8[0],1);
  iVar3 = FUN_004170c0(&LAB_01615fc4,local_res8[0],1);
  if ((iVar2 < 1) || (iVar3 < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00414480(local_res8);
  return uVar1;
}

