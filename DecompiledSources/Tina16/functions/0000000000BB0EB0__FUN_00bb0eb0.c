/* Ghidra address: 00bb0eb0 */
/* Ghidra symbol: FUN_00bb0eb0 */


void FUN_00bb0eb0(undefined8 *param_1,longlong *param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_2 + 0x50))(param_2,0);
  (**(code **)*param_1)(param_1,&local_28);
  FUN_00416cd0(local_20,5,&DAT_00bb0f88,local_28,&DAT_00bb0f9c,param_1[0xc],&DAT_00bb0fac);
  (**(code **)(*param_2 + 0x90))(param_2,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

