/* Ghidra address: 0097ef70 */
/* Ghidra symbol: FUN_0097ef70 */


void FUN_0097ef70(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_20 = FUN_0096fb60(&PTR_FUN_0091af90,1,param_1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80),local_20);
    FUN_00410f20(local_20);
  }
  return;
}

