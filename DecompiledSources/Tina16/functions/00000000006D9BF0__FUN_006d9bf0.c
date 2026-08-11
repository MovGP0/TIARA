/* Ghidra address: 006d9bf0 */
/* Ghidra symbol: FUN_006d9bf0 */


void FUN_006d9bf0(longlong *param_1)

{
  longlong local_20;
  
  local_20 = (**(code **)(*param_1 + 0x278))(param_1);
  if (param_1[0x9a] != 0) {
    (*(code *)param_1[0x9a])(param_1[0x9b],param_1,&local_20);
  }
  (**(code **)(local_20 + 0x38))(local_20,1,param_1[0x92]);
  return;
}

