/* Ghidra address: 004c39b0 */
/* Ghidra symbol: FUN_004c39b0 */


void FUN_004c39b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  code *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_40 = auStack_68;
  local_30 = (code *)*param_2;
  local_28 = param_2[1];
  local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (*local_30)(local_28,local_20);
  FUN_004c8510(param_1,10);
  local_34 = (**(code **)*local_20)(local_20);
  FUN_004c3930(param_1,&local_34,4);
  FUN_004c3930(param_1,local_20[1],(longlong)local_34);
  FUN_00410f20(local_20);
  return;
}

