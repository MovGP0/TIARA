/* Ghidra address: 00bc5cd0 */
/* Ghidra symbol: FUN_00bc5cd0 */


void FUN_00bc5cd0(undefined8 *param_1)

{
  if (param_1[0x31] == 0) {
    (**(code **)*param_1)(param_1,0x3eb);
  }
  else {
    FUN_00bc5f60(param_1,param_1[0x31]);
  }
  return;
}

