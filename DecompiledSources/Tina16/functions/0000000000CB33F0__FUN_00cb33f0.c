/* Ghidra address: 00cb33f0 */
/* Ghidra symbol: FUN_00cb33f0 */


undefined8 FUN_00cb33f0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*(longlong *)param_1[0x20] + 0x178))((longlong *)param_1[0x20],param_2,0);
  FUN_00cbdf10(param_1);
  return param_2;
}

