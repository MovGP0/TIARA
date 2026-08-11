/* Ghidra address: 010b12e0 */
/* Ghidra symbol: FUN_010b12e0 */


void FUN_010b12e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0xff00);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x58))(*(longlong **)(param_1 + 0x30),local_20);
  FUN_00410f20(local_20);
  FUN_00414480(local_res10);
  return;
}

