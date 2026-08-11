/* Ghidra address: 01857d20 */
/* Ghidra symbol: FUN_01857d20 */


longlong * FUN_01857d20(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_40 = param_4;
  local_20 = (longlong *)(**(code **)(param_1 + 0x28))(param_1,0,0,param_3);
  (**(code **)(*local_20 + 0x10))(local_20,param_2);
  return local_20;
}

