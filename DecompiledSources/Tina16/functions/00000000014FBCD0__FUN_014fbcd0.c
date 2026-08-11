/* Ghidra address: 014fbcd0 */
/* Ghidra symbol: FUN_014fbcd0 */


undefined1 FUN_014fbcd0(longlong param_1,undefined8 param_2)

{
  undefined1 local_31;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x288))(*(longlong **)(param_1 + 0x550),local_20);
  FUN_014fbb20(param_1,param_2);
  FUN_00414480(local_20);
  return local_31;
}

