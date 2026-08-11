/* Ghidra address: 004b31e0 */
/* Ghidra symbol: FUN_004b31e0 */


void FUN_004b31e0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_004b3260(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  (**(code **)(*param_1 + 0x88))(param_1,param_2);
  FUN_004b3390(param_1);
  return;
}

