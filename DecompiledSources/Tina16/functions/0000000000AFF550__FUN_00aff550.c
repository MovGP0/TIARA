/* Ghidra address: 00aff550 */
/* Ghidra symbol: FUN_00aff550 */


void FUN_00aff550(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x800) != 0) {
    local_res18[0] = param_3;
    (**(code **)(param_1 + 0x800))(*(undefined8 *)(param_1 + 0x808),param_1,param_2,local_res18);
  }
  return;
}

