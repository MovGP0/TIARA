/* Ghidra address: 018240b0 */
/* Ghidra symbol: FUN_018240b0 */


undefined8 FUN_018240b0(longlong param_1)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  uStack_c = 0;
  if (param_1 != 0) {
    iVar1 = FUN_004170c0(&LAB_018241a8,param_1,1);
    FUN_00416dc0(local_20,param_1,1,iVar1 + -1);
    uStack_c = FUN_0043fc00(local_20[0]);
    iVar1 = FUN_004170c0(&LAB_018241a8,param_1,1);
    FUN_00416dc0(&local_28,param_1,iVar1 + 1,0xff);
    local_10 = FUN_0043fc00(local_28);
  }
  FUN_00414560(&local_28,2);
  return CONCAT44(uStack_c,local_10);
}

