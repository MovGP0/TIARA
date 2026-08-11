/* Ghidra address: 0097de20 */
/* Ghidra symbol: FUN_0097de20 */


void FUN_0097de20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_20 = FUN_0096fb60(&PTR_FUN_0091cbd0,1,param_1,param_2);
    *(undefined1 *)(local_20 + 0x88) = 0;
    FUN_00414b90(local_20 + 0x90,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80),local_20);
    FUN_00410f20(local_20);
  }
  return;
}

