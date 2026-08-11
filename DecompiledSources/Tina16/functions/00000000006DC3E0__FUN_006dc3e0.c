/* Ghidra address: 006dc3e0 */
/* Ghidra symbol: FUN_006dc3e0 */


void FUN_006dc3e0(longlong param_1)

{
  undefined **local_20;
  
  local_20 = &PTR_FUN_006b26e8;
  if (*(longlong *)(param_1 + 0x560) != 0) {
    (**(code **)(param_1 + 0x560))(*(undefined8 *)(param_1 + 0x568),param_1,&local_20);
  }
  (*(code *)local_20[7])(local_20,1,*(undefined8 *)(param_1 + 0x490));
  return;
}

