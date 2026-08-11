/* Ghidra address: 00eab220 */
/* Ghidra symbol: FUN_00eab220 */


void FUN_00eab220(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_020049a0,local_res10[0]);
  FUN_00eaafa0(auStack_58,local_20[0]);
  FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_02001340,local_res10[0]);
  FUN_00eaafa0(auStack_58,local_28);
  FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_02004438,local_res10[0]);
  FUN_00eaafa0(auStack_58,local_30);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return;
}

