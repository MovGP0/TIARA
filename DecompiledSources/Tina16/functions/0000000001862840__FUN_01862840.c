/* Ghidra address: 01862840 */
/* Ghidra symbol: FUN_01862840 */


void FUN_01862840(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  (**(code **)(*(longlong *)param_1[9] + 0xc0))((longlong *)param_1[9],param_2);
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

