/* Ghidra address: 006f3bf0 */
/* Ghidra symbol: FUN_006f3bf0 */


void FUN_006f3bf0(longlong param_1)

{
  undefined **local_20;
  
  local_20 = &PTR_FUN_006c36c8;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    (**(code **)(param_1 + 0x760))(*(undefined8 *)(param_1 + 0x768),param_1,&local_20);
  }
  (*(code *)local_20[3])(local_20,1,*(undefined8 *)(param_1 + 0x4e0));
  return;
}

