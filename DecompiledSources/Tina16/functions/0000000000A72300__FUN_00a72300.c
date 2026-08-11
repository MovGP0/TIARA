/* Ghidra address: 00a72300 */
/* Ghidra symbol: FUN_00a72300 */


undefined8 FUN_00a72300(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  int local_10;
  undefined4 uStack_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&DAT_00a723c4,local_res10[0],1);
  if (iVar1 < 1) {
    iVar1 = FUN_004170c0(&LAB_00a723d4,local_res10[0],1);
    local_10 = param_1;
    if (iVar1 < 1) {
      uStack_c = CONCAT31(uStack_c._1_3_,1);
    }
    else {
      uStack_c = CONCAT31(uStack_c._1_3_,3);
    }
  }
  else {
    if (100 < param_1) {
      param_1 = 100;
    }
    local_10 = param_1 * 10;
    uStack_c = CONCAT31(uStack_c._1_3_,2);
  }
  FUN_00414480(local_res10);
  return CONCAT44(uStack_c,local_10);
}

