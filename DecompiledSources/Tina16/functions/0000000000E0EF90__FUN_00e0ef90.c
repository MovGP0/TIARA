/* Ghidra address: 00e0ef90 */
/* Ghidra symbol: FUN_00e0ef90 */


undefined8 FUN_00e0ef90(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x18))(param_1,local_20,param_3);
  iVar1 = FUN_004170c0(*(undefined8 *)PTR_PTR_02001558,local_20[0],1);
  if (iVar1 == 0) {
    FUN_00414ad0(param_2,local_20[0]);
  }
  else {
    FUN_00416dc0(&local_28,local_20[0],1,iVar1 + -1);
    FUN_00416dc0(&local_30,local_20[0],iVar1 + 1,0xff);
    FUN_00414ad0(param_2,local_28);
  }
  FUN_00414560(&local_30,3);
  return param_2;
}

