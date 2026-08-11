/* Ghidra address: 0064fca0 */
/* Ghidra symbol: FUN_0064fca0 */


undefined8 FUN_0064fca0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_1 != 0) {
    local_38[0] = param_2;
    local_30 = param_3;
    local_28 = param_4;
    (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88),local_38);
  }
  return local_20;
}

