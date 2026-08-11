/* Ghidra address: 00bb16c0 */
/* Ghidra symbol: FUN_00bb16c0 */


void FUN_00bb16c0(longlong *param_1,longlong *param_2)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_28);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  FUN_00bac850(&local_30,local_38);
  FUN_00416cd0(local_20,5,&DAT_00bb17b8,local_28,&DAT_00bb17c8,local_30,&DAT_00bb17dc);
  (**(code **)(*param_2 + 0x90))(param_2,local_20[0]);
  FUN_00414560(&local_38,4);
  return;
}

