/* Ghidra address: 006e4200 */
/* Ghidra symbol: FUN_006e4200 */


void FUN_006e4200(longlong param_1)

{
  undefined **local_20;
  
  local_20 = &PTR_FUN_006b5a58;
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    (**(code **)(param_1 + 0x6c8))(*(undefined8 *)(param_1 + 0x6d0),param_1,&local_20);
  }
  (*(code *)local_20[3])(local_20,1,*(undefined8 *)(param_1 + 0x550));
  return;
}

