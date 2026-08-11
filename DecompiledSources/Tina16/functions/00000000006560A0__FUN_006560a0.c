/* Ghidra address: 006560a0 */
/* Ghidra symbol: FUN_006560a0 */


void FUN_006560a0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88),param_2);
  FUN_0064af50();
  FUN_00607680();
  return;
}

