/* Ghidra address: 01bf7c50 */
/* Ghidra symbol: FUN_01bf7c50 */


void FUN_01bf7c50(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x90))(param_1,0);
  FUN_00441b80(&local_38,param_2);
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_38,0xff00);
  FUN_01bf7d80(param_1,local_20);
  FUN_00410f20(local_20);
  FUN_00414560(&local_40,2);
  return;
}

