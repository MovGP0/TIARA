/* Ghidra address: 01ce7f10 */
/* Ghidra symbol: FUN_01ce7f10 */


undefined8 FUN_01ce7f10(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  if (local_res18[0] == 0) {
    FUN_00414ad0(param_1,local_res10);
  }
  else {
    iVar1 = FUN_00416db0(local_res18[0],&DAT_01ce8178);
    if (iVar1 == 0) {
      iVar1 = FUN_004170c0(&DAT_01ce8188,local_res10,1);
      if (iVar1 < 1) {
        FUN_00414ad0(param_1,local_res10);
      }
      else {
        iVar1 = FUN_004170c0(&DAT_01ce8188,local_res10,1);
        FUN_00416dc0(param_1,local_res10,1,iVar1 + -1);
      }
    }
    else {
      iVar1 = FUN_004170c0(&DAT_01ce8188,local_res10,1);
      if (0 < iVar1) {
        iVar1 = FUN_004170c0(&DAT_01ce8198,local_res10,1);
        if (0 < iVar1) {
          iVar1 = FUN_004170c0(&DAT_01ce81a8,local_res18[0],1);
          if (iVar1 == 0) {
            FUN_00416ba0(local_res18,&DAT_01ce81a8,local_res18[0]);
          }
          uVar2 = FUN_004170c0(&DAT_01ce8188,local_res10,1);
          FUN_00416dc0(param_1,local_res10,1,uVar2);
          FUN_00416ad0(param_1,local_res18[0]);
          uVar3 = FUN_004170c0(&DAT_01ce8198,local_res10,1);
          uVar2 = 0;
          if (local_res10 != 0) {
            uVar2 = *(undefined4 *)(local_res10 + -4);
          }
          FUN_00416dc0(&local_10,local_res10,uVar3,uVar2);
          FUN_00416ad0(param_1,local_10);
          goto code_r0x01ce811e;
        }
      }
      iVar1 = FUN_004170c0(&DAT_01ce81a8,local_res18[0],1);
      if (iVar1 == 0) {
        FUN_00416ba0(local_res18,&DAT_01ce81a8,local_res18[0]);
      }
      FUN_00416cd0(param_1,4,local_res10,&LAB_01ce81b8,local_res18[0],&DAT_01ce8198);
    }
  }
code_r0x01ce811e:
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return param_1;
}

