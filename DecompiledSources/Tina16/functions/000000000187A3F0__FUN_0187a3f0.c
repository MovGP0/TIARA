/* Ghidra address: 0187a3f0 */
/* Ghidra symbol: FUN_0187a3f0 */


void FUN_0187a3f0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  cVar1 = FUN_0195f670(param_2,0);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x348))(param_2,local_20);
    FUN_004168b0(&local_28,local_20[0]);
    FUN_0187ba20(param_1,param_2,local_28,param_2[0x5a],param_3,0,0,0);
  }
  FUN_00414480(&local_28);
  FUN_00414520(local_20);
  return;
}

