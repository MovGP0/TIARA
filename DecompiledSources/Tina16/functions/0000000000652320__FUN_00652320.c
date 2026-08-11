/* Ghidra address: 00652320 */
/* Ghidra symbol: FUN_00652320 */


void FUN_00652320(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = *param_2;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    (**(code **)(param_1 + 0x218))(*(undefined8 *)(param_1 + 0x220),param_1,local_20,param_3);
  }
  return;
}

