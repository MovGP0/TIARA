/* Ghidra address: 00d020f0 */
/* Ghidra symbol: FUN_00d020f0 */


undefined1 FUN_00d020f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_res20 [2];
  undefined1 local_19 [9];
  
  local_19[0] = *(undefined1 *)(param_1 + 0x204);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    local_res20[0] = param_4;
    (**(code **)(param_1 + 0x230))
              (*(undefined8 *)(param_1 + 0x238),param_1,param_2,local_res20,local_19,param_3);
  }
  return local_19[0];
}

