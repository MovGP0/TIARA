/* Ghidra address: 004d2c90 */
/* Ghidra symbol: FUN_004d2c90 */


void FUN_004d2c90(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),param_1,&local_38,param_3);
  }
  return;
}

