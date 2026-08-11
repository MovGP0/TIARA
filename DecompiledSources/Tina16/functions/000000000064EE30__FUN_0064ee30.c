/* Ghidra address: 0064ee30 */
/* Ghidra symbol: FUN_0064ee30 */


void FUN_0064ee30(longlong param_1,undefined8 *param_2)

{
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    local_20 = *param_2;
    (**(code **)(param_1 + 0x1b8))(*(undefined8 *)(param_1 + 0x1c0),param_1,&local_20);
    *param_2 = local_20;
  }
  return;
}

