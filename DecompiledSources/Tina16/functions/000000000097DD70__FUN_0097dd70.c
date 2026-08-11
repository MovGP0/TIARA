/* Ghidra address: 0097dd70 */
/* Ghidra symbol: FUN_0097dd70 */


void FUN_0097dd70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_20 = FUN_0096fb60(&PTR_FUN_0091e218,1,param_1,param_2);
    FUN_00414b90(local_20 + 0x88,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80),local_20);
    FUN_00410f20(local_20);
  }
  return;
}

