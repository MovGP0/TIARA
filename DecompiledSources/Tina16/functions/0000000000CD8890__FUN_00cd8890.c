/* Ghidra address: 00cd8890 */
/* Ghidra symbol: FUN_00cd8890 */


void FUN_00cd8890(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1,0);
    if (*(char *)((longlong)param_1 + 0x81) == '\0') {
      FUN_00416cd0(&local_28,3,param_2,param_1[0xf],param_3);
      (**(code **)(*param_1 + 0x40))(param_1,uVar1,local_28);
    }
    else {
      FUN_00416cd0(local_20,3,param_2,param_1[0xf],param_3);
      FUN_00cd8e90(param_1,local_20[0],uVar1);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

